/**
 * @file query7.h
 * 
 * Este ficheiro contém as assinaturas das funções relacionadas com as Query 7.
 * 
 */

#ifndef QUERY7_H
#define QUERY7_H

#include "cat_drivers.h"
#include "cat_rides.h"
#include "randomfuncs.h"
#include "outputs.h"

/**
 *
 * Este é o header da função que executa a Query 7, dado um ID em forma de string, e um contador para dizer em que linha está.
 * 
 */
void query7 (int counter, Driver *drivers_cat, GHashTable *drivers_hash, Ride *new_rides_cat, char *N_arg, char *cidade);


#endif