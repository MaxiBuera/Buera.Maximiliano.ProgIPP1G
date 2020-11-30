#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PAISES 2


typedef struct{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

ePais arrayPais[PAISES]=
{
    {0,"Argentina",100,50,25},
    {1,"Brasil",1000,500,250},
};

/*1.Dada una estructura ePais cuyos campos son
     id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
     Desarrollar una funci�n llamada actualizarRecuperados que reciba el pa�s y los
     recuperados del dia y que acumule estos a los que ya tiene el pa�s. La funci�n no devuelve nada.
*/
void actualizarRecuperados(char* pais, int recuperados);

/*
2. Crear una funci�n que se llame invertirCadena que reciba una cadena
de caracteres como par�metro y su responsabilidad es invertir los caracteres
de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
*/
void invertirCadena(char* cadena);


/*
3. Crear una funci�n que se llame ordenarCaracteres que reciba una cadena de
caracteres como par�metro y su responsabilidad es ordenarlos caracteres de manera
ascendente dentro de la cadena. Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
*/
void ordenarCaracteres(char* cadena);

int main()
{

    //1)
    actualizarRecuperados("Argentina",1);
    actualizarRecuperados("Brasil",100);

    //2)
    invertirCadena("UTN-FRA");

    //3)
    ordenarCaracteres("algoritmo");

    return 0;
}

void actualizarRecuperados(char* pais, int recuperados){

    int i=0;

    if(arrayPais != NULL && pais != NULL && recuperados >= 0){

        for(i=0;i<PAISES;i++){

            if(strcmp(arrayPais[i].nombre,pais) == 0){

               arrayPais[i].recuperados = arrayPais[i].recuperados + recuperados;
               arrayPais[i].infectados = arrayPais[i].infectados - recuperados;
               printf("Pais: %s - Recuperados: %d", arrayPais[i].nombre, arrayPais[i].recuperados);
               printf("\n\t\t  Infectados: %d\n\n", arrayPais[i].infectados);
            }
        }
    }
}

void invertirCadena(char* cadena){

    int i;
    int j=0;
    char cadenaAux[strlen(cadena)];


    for(i=strlen(cadena)-1;i>=0;i--){

        cadenaAux[j] = cadena[i];
        j++;
    }

    printf(".%s\n.%s",cadenaAux,cadena);
}

void ordenarCaracteres(char* cadena){

    int i;
    char auxiliar;

    printf("\n\n.%s",cadena);

    if(cadena != NULL){

        for(i=0;i<strlen(cadena);i++){
            printf("\n%c",cadena[i]);
            if(cadena[i] > cadena[i+1]){

                /*auxiliar = cadena[i];
                cadena[i] = cadena[i+1];
                cadena[i+1] = auxiliar;
                printf("\n %c %c %c", auxiliar, cadena[i], cadena[i+1]);*/
            }
        }
    }

    //printf("\n.%s-",cadena);
}
