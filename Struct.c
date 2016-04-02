#include <stdio.h>
#include <string.h>
#include "myHeader.h"


alien crearAlien(char pNombre,int pId, char pEspecie, planeta pPlaneta, idioma pIdioma){
    strcpy(lista_aliens->nombre, pNombre);
    strcpy(lista_aliens->especie, pEspecie);
    lista_aliens->id = pId;
    lista_aliens->planetas=pPlaneta;
    lista_aliens->idiomas=pIdioma;
    struct alien_t *siguiente
}

idioma crearIdioma(char pNombre, int pTipo,int pSimbolo,planeta pPlaneta){
    strcpy(lista_aliens->idiomas->nombre, pNombre);
    lista_aliens->idiomas->tipo = pTipo;
    lista_aliens->idiomas->simbolos = pSimbolo;
    lista_aliens->idiomas->planetas= pPlaneta;
    struct idiomas_t *siguiente;
}

planeta crearPlaneta(char pNombre,int pCode, char pAgua,char pOxigeno){
    strcpy(lista_aliens->planetas->nombre,pNombre);
    lista_aliens->planetas->agua = pAgua;
    lista_aliens->planetas->oxigeno =pOxigeno;
    lista_aliens->planetas->starwars_code = pCode;
    struct planetas_t *siguiente;
}

int main(){
    alien *lista_aliens;
    lista_aliens = malloc(sizeof(alien));
    int n, opcion;
    do
    {
        printf( "\n   1. Ingresar nuevo alien", 163 );
        printf( "\n   2. Buscar alien", 163 );
        printf( "\n   3. Salir." );
        printf( "\n\n   Introduzca opción (1-3): ", 162 );

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1: printf( "\n   Introduzca el nombre del alien: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n  ", n, n * 2 );
                    break;

            case 2: printf( "\n   Introduzca el id del alien: ", 163 );
                    scanf( "%d", &n );
                    printf( "\n   La mitad de %d es %f\n\n", n, ( float ) n / 2 );
                    break;
          }
         /* Fin del anidamiento */
    } while ( opcion != 4 );

    return 0;
}
