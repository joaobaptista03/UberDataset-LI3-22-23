/**
 * @file query6.c
 * 
 * Este ficheiro contém o conteúdo das funções relacionadas com as Query 6.
 * 
 */

#include "../include/query6.h"

void query6 (int counter, Ride *rides_cat, char *input, int mode) {
    printf("\nA executar Q6 (linha de input %i)\n", counter);

    // Medição de tempo
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    
    int i;
    char *city; city = malloc(20 * sizeof(char));
    for (i = 0; input[i] != ' '; i++) city[i] = input[i]; 
    city[i] = '\0';

    char *data1; data1 = malloc(20 * sizeof(char));
    memcpy(data1, input + 1 + i, 10); data1[10] = '\0';

    char *data2; data2 = malloc(20 * sizeof(char));
    memcpy(data2, input + i + 2 + 10, 10); data2[10] = '\0';

    int distance = 0;
    int contagem = 0;

    for(int i = 1; i <= atoi(rides_cat[0].id); i++) {
        
        if ((most_recent(rides_cat[i].date, data1) == 1 || most_recent(rides_cat[i].date, data1) == 3)
        &&  (most_recent(rides_cat[i].date, data2) == 2 || most_recent(rides_cat[i].date, data2) == 3)
        && stricmp(rides_cat[i].city, city) == 0) {
            contagem++;
            distance += atoi(rides_cat[i].distance);
        }
    }
    
    if (contagem == 0) {
        // Medição de tempo
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        free(city);
        free(data1);
        free(data2);
        
        if (mode == 1) printf("\nNão há viagens!\n\n");
        handle_outputs(counter, "");
        printf("Fim da Q6 (Sem viagens) - %f segundos(linha de input %i)\n", cpu_time_used, counter);
        return;
    }

    char *output; output = malloc(70 * sizeof(char));
    double resultado = (double) distance/contagem;
    sprintf(output, "%.3f\n", resultado);
    if (mode == 1) puts("\nForma do Resultado: distancia_media");
    if (mode == 1) printf("Resultado: %s\n",output);
    handle_outputs(counter,output);

    free(output);
    free(city);
    free(data1);
    free(data2);

    // Medição de tempo
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Fim da Q6 - %f segundos (linha de input %i)\n", cpu_time_used, counter);
}