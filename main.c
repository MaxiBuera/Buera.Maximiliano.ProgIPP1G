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
    {0,"Brasil",1000,500,250},
};

void actualizarRecuperados(ePais* arrayPais,char* pais, int recuperados);


int main()
{

    //1)
    actualizarRecuperados(arrayPais,"Argentina",1);
    
    //2)

    return 0;
}

/*Dada una estructura ePais cuyos campos son
     id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
     Desarrollar una función llamada actualizarRecuperados que reciba el país y los
     recuperados del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada.
*/
void actualizarRecuperados(ePais* arrayPais,char* pais, int recuperados){

    int i=0;
    int j=0;

    if(arrayPais != NULL && pais != NULL && recuperados >= 0){

        for(i=0;i<PAISES;i++){

            if(strcmp(arrayPais[i].nombre,pais) == 0){

               arrayPais[i].recuperados = arrayPais[i].recuperados + recuperados;
            }
        }
    }
    
    for(j=0;j<PAISES;j++){
     
        printf("\nPais: %s - Recuperados: %d", arrayPais[j].nombre,arrayPais[j].recuperados);
        
    }
}

