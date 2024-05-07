/*  Proyecto B  -   version alpha 0.1 */

#include <iostream>
using namespace std;

/*  defines */
#define TAM 200

/*  enums   */
enum Meses
{
    ENE = 1,
    FEB,
    MAR,
    ABR,
    MAY,
    JUN,
    JUL,
    AGO,
    SEP,
    OCT,
    NOV,
    DIC
}; // Meses es una variable de tipo enum que enumera los meses del año

/*  structs */

// Fecha
struct Fecha
{
    /*  variables de la estructura Fecha   */

    // variables int
    int
        dd,                // variable dia
            *ptr_dd = &dd, // puntero dia
        mm,                // variable mes
            *ptr_mm = &mm, // puntero mes
        yy,                // variable año
            *ptr_yy = &yy  // puntero año
        ;
};

// Estudiante
struct Estudiante
{
    /*  variables de la estructura Estudiante   */

    // variables char
    char
        *estudiante_nombre, // variable nombre
        *estudiante_carrera // variable carrera
        ;

    // variables Fecha
    Fecha
        *estudiante_fecha_ingreso // variable fecha de ingreso
        ;

    // variables float
    float
        *estudiante_colegiatura // variable calificaciones
        ;
    // variables float
    float
        *estudiante_calificaciones // variable calificaciones
        ;

    // variables int
    int
        *estudiante_id // variable numero de identificacion
        ;
};

/*  Funciones (declaracion) */

/*bloque consulta*/

/*bloque modificar*/

/*bloque registro*/

// funciones bool
bool verificar_calificaciones(float *), // funcion calificaciones
    verificar_fecha(Fecha *)            // funcion fecha
    ;

// funciones Fecha
Fecha fecha_nueva(Fecha *) // funcion nueva (fecha)
    ;

// funciones Estudiante
Estudiante
registro_estudiante(Estudiante *) // funcion nuevo (estudiante)
    ;

/*bloque utilidad*/

// funciones void
void menu(const char[], const char[][TAM], int) // funcion menu
    ;

/*  Implementacion  */

/*bloque consulta*/

/*bloque modificar*/

/*bloque registro*/

// registro_estudiante
Estudiante registro_estudiante(Estudiante &estudiante_registro_en_curso)
{
    return *estudiante_registro_en_curso;
}

/*bloque utilidad*/

// menu
void menu(const char encabezado[], const char cuerpo[][TAM], int limite)
{
    /*  inicio de la funcion    */

    /*impresion*/

    // encabezado
    cout << endl
         << "\t"
         << encabezado
         << endl
         << endl;

    // cuerpo
    for (int i = 0; i != limite; i++)
    {
        cout << i + 1
             << ") "
             << cuerpo[i]
             << endl;
    }
}

// main
int main()
{
    /*  enums de la funcion main    */
    enum
    {
        CONSULTA = 1,
        REGISTRO,
        MODIFICAR,
        SALIR
    };

    /*  variables de la funcion main    */

    // char
    const char
        main_encabezado[] = {"Menu Principal"},                                  // encabezado principal
        main_cuerpo[SALIR][TAM] = {"consulta", "registro", "modificar", "salir"} // opciones principal
    ;

    // Estudiante
    Estudiante
        estudiante_registro, // crea el registro
        *ptr_estudiante_registro=&estudiante_registro,  // apunta al registro
        *estudiante_lista     // lista de estudiantes
        ;

    // int
    int
        usuario_opcion,                                // opcion del usuario
            *ptr_usuario_opcion = &usuario_opcion,     // puntero a usuario_opcion
        estudiante_numero = 0,                         // numero de estudiante en la lista
            *ptr_estudiante_nuevo = &estudiante_numero // puntero a estudiante_numero
        ;

    /*  inicio del programa */
    do
    {
        system("clear"); // limpia la pantalla

        /*salida*/
        menu(main_encabezado, main_cuerpo, SALIR);
        cout << "> ";
        cin >> *ptr_usuario_opcion;

        /*divisor*/
        switch (*ptr_usuario_opcion)
        {
        case CONSULTA:
            break;
        case REGISTRO:
            estudiante_lista[*ptr_estudiante_nuevo] = registro_estudiante(ptr_estudiante_registro);
            ptr_estudiante_nuevo++;
            break;
        case MODIFICAR:
            break;
        }
    } while (*ptr_usuario_opcion != SALIR);

    return 0;
}

// verificar_calificaciones
bool verificar_calificaciones(float *nuevas_calificaciones)
{
    return *nuevas_calificaciones;
}