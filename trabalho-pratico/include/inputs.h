/**
 * @file inputs.h
 * 
 * Este ficheiro contém as assinaturas das funções relacionadas com os inputs.
 * 
 */

#ifndef INPUTS_H
#define INPUTS_H

#include <string.h>
#include <stdio.h>

#include "../include/catalog.h"
#include "../include/query1.h"

/**
 *
 * Este é o header da função que faz o tratamento dos inputs e redireciona-os para as query's correspondentes.
 * 
 */
void handle_inputs(Driver *drivers_cat, User *users_cat, Ride *rides_cat, FILE *inputs);

#endif