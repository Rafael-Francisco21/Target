#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"

// Função para ler o arquivo JSON
char* ler_arquivo_json(const char* nome_arquivo) {
    FILE* arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return NULL;
    }
    fseek(arquivo, 0, SEEK_END);
    long tamanho_arquivo = ftell(arquivo);
    fseek(arquivo, 0, SEEK_SET);
    
    char* conteudo = (char*)malloc(tamanho_arquivo + 1);
    fread(conteudo, 1, tamanho_arquivo, arquivo);
    conteudo[tamanho_arquivo] = '\0';
    
    fclose(arquivo);
    return conteudo;
}

int main() {
    double faturamento[30], media = 0, maior = 0, menor = 0;
    int n = 0, n_d = 0;
    
    // Lendo o arquivo JSON
    char* dados_json = ler_arquivo_json("dados.json");
    if (dados_json == NULL) {
        return 1;
    }
    
    // Parsing do arquivo JSON
    cJSON* json = cJSON_Parse(dados_json);
    if (json == NULL) {
        printf("Erro ao fazer o parse do JSON.\n");
        free(dados_json);
        return 1;
    }
    
    // Iterar pelos dias no JSON
    cJSON* dias = json;
    cJSON* dia_item = NULL;

    cJSON_ArrayForEach(dia_item, dias) {
        cJSON* valor = cJSON_GetObjectItem(dia_item, "valor");
        
        // Ignorar dias com faturamento zero
        if (valor->valuedouble > 0.0) {
            faturamento[n] = valor->valuedouble;
            
            // Inicializa menor e maior no primeiro valor válido
            if (n == 0) {
                menor = maior = faturamento[n];
            }

            // Verifica se o valor atual é maior ou menor
            if (faturamento[n] > maior) {
                maior = faturamento[n];
            }
            if (faturamento[n] < menor) {
                menor = faturamento[n];
            }

            // Soma para o cálculo da média
            media += faturamento[n];
            n++;  // Incrementa o contador de dias com faturamento
        }
    }

    // Calculando a média (apenas dias com faturamento)
    if (n > 0) {
        media = media / n;
    }

    // Contando os dias com faturamento acima da média
    for (int i = 0; i < n; i++) {
        if (faturamento[i] > media) {
            n_d++;
        }
    }

    // Exibindo os resultados
    printf("O menor faturamento foi %.2f\n", menor);
    printf("O maior faturamento foi %.2f\n", maior);
    printf("O número de dias com faturamento acima da média mensal foi %d dias\n", n_d);

    // Liberar a memória
    cJSON_Delete(json);
    free(dados_json);
    
    return 0;
}
