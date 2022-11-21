/**
 * @file catalog.h
 * Este ficheiro contém as structs do Projeto.
 * 
 */

#ifndef CATALOG_H
#define CATALOG_H

#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

/**
 *
 * Esta é a Struct que define o que é um Driver, e contém todas as informações dele. Será inserida no catálogo das Drivers.
 * 
 */
typedef struct {
    char id[15];
    char name[100];
    char birth_date[15];
    char gender[5];
    char car_class[10];
    char license_plate[10];
    char city[20];
    char acc_creation[15];
    char status[10];

} Driver;

/**
 *
 * Esta é a Struct que define o que é um User, e contém todas as informações dele. Será inserida no catálogo dos Users.
 * 
 */
typedef struct {
    char user[100];
    char name[100];
    char gender[5];
    char birth_date[15];
    char acc_creation[15];
    char pay_method[20];
    char status[10];

} User;

/**
 *
 * Esta é a Struct que define o que é uma Ride, e contém todas as informações dela. Será inserida no catálogo das Rides.
 * 
 */
typedef struct {
    char id[15];
    char date[15];
    char driver[15];
    char user[100];
    char city[20];
    char distance[10];
    char score_user[5];
    char score_driver[5];
    char tip[10];
    char comment[100];

} Ride;


/**
 *
 * Este é o header da função que insere os dados dos drivers, users e rides nos catálogos respetivos.
 * 
 */
void inserir_dados(FILE *drivers, FILE *users, FILE *rides, FILE *inputs);

#endif