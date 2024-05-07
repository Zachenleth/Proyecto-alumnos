#include <iostream>
#include <string.h>
using namespace std;

#define ROW 200
#define TAM 3

struct nombre
{
    char *nombre;
};

nombre registrar(nombre&);

int main()
{
    nombre *datos;
    datos=(nombre*)malloc(TAM*sizeof(nombre));
    nombre nuevo;
    nombre *ptr=&nuevo;

    for(int i=0;i<TAM;i++){
        datos[i]=registrar(*ptr);
    }

    system("clear");

    for (int i = 0; i != TAM; i++)
    {
        for (int j = 0; j != ROW; j++)
        {
            cout << datos[i].nombre[j];
        }
        cout << endl;
    }

    free(datos);
    free(ptr->nombre);

    return 0;
}

nombre registrar(nombre &ptr)
{
    ptr.nombre=(char*)malloc(ROW*sizeof(char));

    system("clear");

    cout<<"escribe tu nombre: ";
    fgets(ptr.nombre,ROW,stdin);

    return ptr;
}