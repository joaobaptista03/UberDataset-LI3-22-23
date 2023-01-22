/**
 * @file query1.c
 * 
 * Este ficheiro contém o conteúdo das funções relacionadas com as Query 1.
 * 
 */

#include "../include/query1_driver.h"
#include "../include/query1_user.h"
#include "../include/query1.h"

void query1 (int counter, Driver *drivers_cat, GHashTable *drivers_hash, User *users_cat, GHashTable *users_hash, Ride *rides_cat, char *id, int mode) {

    // Medição de tempo
    clock_t start, end;
    double cpu_time_used;
    start = clock();

    if (isDriver(id, strlen(id))) query1_driver(counter, drivers_cat, drivers_hash, rides_cat, id, mode);
    else query1_user(counter, drivers_cat, drivers_hash, users_cat, users_hash, rides_cat, id, mode);

    // Medição de tempo
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Fim da Q1 - %f segundos (linha de input %i)\n", cpu_time_used, counter);
}