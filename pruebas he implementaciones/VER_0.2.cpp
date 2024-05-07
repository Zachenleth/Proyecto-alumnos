/*inicio del programa*/

//  datos del equipo

/*
    Materia:
    Programacion

    Maestra:
    Estela Lizbeth Muñoz Andrade

    Fecha de entrega:
    07-05-2024

    Equipo:
    Héctor Abraham Aguilar Galindo
    Erick Gustavo Gallardo Cuevas
    Eduardo Guzman Guzman
    Jaime Alberto Cruz Rodriguez

    Proyecto B:
    Registro de Alumnos

    Institucion:
    Universidad Autonoma de Aguascalientes
*/

//  cabeceras
#include <iostream> //  cabecera principal (estandar c++)
#include <string.h> //  cabecera para cadenas

//  namespaces
using namespace std; //  namespace principal (estandar)

/*declaraciones*/

//  defines
#define CANTIDAD_CALIFICACIONES 3 //  cantidad de calificaciones
#define LARGO_CARRERA 70          // largo de nombre de carrera
#define LARGO_NOMBRE 100          //  largo de nombre de estudiante

#define INT_NULL 0         //  solo para la funcion impresion_matriz
#define LARGO_TITULOS 35   //  largo de los titulos
#define LARGO_PARRAFOS 100 //  largo de los parrafos
#define LARGO_OPCIONES 25  //  largo de las opciones
#define LARGO_LISTAS 40    //  largo de las listas

//  enums
//  Mes
enum Mes
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
};

//  structs
//  Fecha
struct Fecha
{
    /*variables de la estructura Fecha*/
    //  int
    int
        fecha_dd,                          //  variable dia
            *ptr_fecha_dd = &fecha_dd,     //  puntero a dia
        fecha_aaaa,                        //  variable año
            *ptr_fecha_aaaa = &fecha_aaaa; //  puntero a año
    ;
    //  Mes
    Mes
        fecha_mm,                     //  variable mes
            *ptr_fecha_mm = &fecha_mm //  puntero a mes
        ;
};

//  Estudiante
struct Estudiante
{
    /*variables de la estructura Estudiante*/
    //  char
    char
        *estudiante_nombre, //  arreglo dinamico nombre del estudiante
        *estudiante_carrera //  arreglo dinamico nombre de carrera
        ;
    //  Fecha
    Fecha
        estudiante_fecha_ingreso,                          //  variable fecha_ingreso
            *ptr_fecha_ingreso = &estudiante_fecha_ingreso //  puntero a fecha_ingreso
        ;
    //  float
    float
        *estudiante_calificaciones,                               //  arreglo dinamico califiaciones
        estudiante_colegiatura,                                   //  variable estudiante_colegiatura
            *ptr_estudiante_colegiatura = &estudiante_colegiatura //  puntero a estudiante_colegiatura
        ;
    //  int
    int
        estudiante_identificador,                                     //  variable identificador
            *ptr_estudiante_identificador = &estudiante_identificador // puntero a identificador
        ;
};

//  functions
//  bloque consulta

//  funciones bool
//  funciones char
//  funciones Fecha
//  funciones float
//  funciones Estudiante
//  funciones int
//  funciones void

//  bloque extras

//  funciones bool
//  funciones char
//  funciones Fecha
//  funciones float
//  funciones Estudiante
//  funciones int
//  funciones void

//  bloque modificacion

//  funciones bool
//  funciones char
//  funciones Fecha
//  funciones float
//  funciones Estudiante
//  funciones int
//  funciones void

//  bloque registro

//  funciones bool
bool verificar_calificaciones(float *), //  verificar que estudiantes_calificaciones es correcto    (verificar_calificaciones("puntero simple de tipo float");)
    verificar_fecha(Fecha *)            //  verificar que Fecha es correcta (verificar_fecha("puntero simple de tipo Fecha");)
    ;
//  funciones char
//  funciones Fecha
Fecha registro_fecha(Fecha &) //  guarda el registro de una Fecha (registro_fecha("puntero de tipo Fecha");)
    ;
//  funciones float
//  funciones Estudiante
Estudiante registro_estudiante(Estudiante &) //  guarda el registro de un Estudiante   (registro_estudiante("puntero simple de tipo Estudiante");)
    ;
//  funciones int
//  funciones void
//  bloque utilidad

//  funciones bool
//  funciones char
//  funciones Fecha
//  funciones float
//  funciones Estudiante
//  funciones int
//  funciones void
void impresion_vector(const char[], const char[], const char[], const char[], const char[]), //  imprime vectores constantes  (impresion_vectores("titulo","subtitulo","parrafo");)
    impresion_matriz(const char[][LARGO_OPCIONES], const char[][LARGO_LISTAS], int, int)     //  imprime matrices constantes  (impresion_matrices("opciones","listas","lim. opciones","lim. listas");)
    ;

/*implementacion*/
//  bloque consulta

//  funciones bool
//  funciones char
//  funciones Fecha
//  funciones float
//  funciones Estudiante
//  funciones int
//  funciones void

//  bloque extras

//  funciones bool
//  funciones char
//  funciones Fecha
//  funciones float
//  funciones Estudiante
//  funciones int
//  funciones void

//  bloque modificacion

//  funciones bool
//  funciones char
//  funciones Fecha
//  funciones float
//  funciones Estudiante
//  funciones int
//  funciones void

//  bloque registro

//  funciones bool
bool verificar_calificaciones(float *calificacion_nueva)
{
    /*variables de la funcion verificar_calificaciones*/
    //  bool
    bool
        comprobador,                                        //  variable comprobador
            *ptr_comprobador = &comprobador,                //  puntero a comprobador
        fecha_aaaa_bisiesto,                                //  variable aaaa_bisiesto
            *ptr_fecha_aaaa_bisiesto = &fecha_aaaa_bisiesto //  puntero a aaaa_bisiesto
        ;

    /*verificacion*/
    if (*calificacion_nueva < 0 || *calificacion_nueva > 10)
    {                             //  si es menor de 0 o mayor de 10 la calificacion no es valida
        *ptr_comprobador = false; //  el valor que devolvera es falso
    }
    else
    {                            //  si esta entre 0 y 10 (o son estos mismos), la calificacion es valida
        *ptr_comprobador = true; //  el valor que devolvera es verdadero
    }

    return *ptr_comprobador; //  devuelve a registro_calificaciones
}

bool verificar_fecha(Fecha *fecha_nueva)
{
    /*variables de la funcion verificar_fecha*/
    //  bool
    bool
        comprobador,                              //  variable comprobador
            *ptr_comprobador = &comprobador,      //  puntero a comprobador
        fecha_bisiesto,                           //  variable bisiesto
            *ptr_fecha_bisiesto = &fecha_bisiesto //  puntero a bisiesto
        ;

    /*verificacion*/

    cout << "Tu fecha es" << fecha_nueva->ptr_fecha_dd << "/" << fecha_nueva->ptr_fecha_mm << "/" << fecha_nueva->ptr_fecha_aaaa;

    //  verificacion del mes
    if (*fecha_nueva->ptr_fecha_mm < ENE || *fecha_nueva->ptr_fecha_mm > DIC)
    {                             //  si es menor 1 (ENE) o mayor de 12 (DIC), la fecha no es valida
        *ptr_comprobador = false; // el valor que devolvera es falso
    }
    else
    { //  si esta entre ENE y DEC (o son estos mismos), la verificacion pasara al siguiente paso
      //  verificacion del año
        if ((*fecha_nueva->ptr_fecha_aaaa % 4) != 0)
        { //  si el resultado de dividir entre 4 no es cero, la verificacion pasara al siguiente paso y el año no es bisiesto
            *ptr_fecha_bisiesto = false;
        }
        else
        {
            if ((*fecha_nueva->ptr_fecha_aaaa % 100) == 0)
            { //  si el resultado de dividir entre 100 es cero, la verificacion pasara al siguiente paso
                if ((*fecha_nueva->ptr_fecha_aaaa % 400) != 0)
                { //  si el resultado de dividir entre 400 no es cero pero entre 100 si no es un año bisiesto
                    *ptr_fecha_bisiesto = false;
                }
                else
                { //  si el resultado de dividir entre 400 es 0 y entre 100 tambien si es un año bisiesto
                    *ptr_fecha_bisiesto = true;
                }
            }
        }

        //  verificacion del dia
        switch (*fecha_nueva->ptr_fecha_mm)
        {
        case ENE:
            //  si el mes es enero
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 31)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case FEB:
            //  si el mes es febrero
            if (*ptr_fecha_bisiesto == true)
            { //  si el año es bisiesto
                if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 29)
                { //  si el dia es menor de uno o mayor de 29 la fecha no es valida
                    *ptr_comprobador = false;
                }
                else
                { //  si el dia esta entre 1 y 29, la fecha es valida
                    *ptr_comprobador = true;
                }
            }
            else
            { //  si el año no es bisiesto
                if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 28)
                { //  si el dia es menor de uno o mayor de 28 la fecha no es valida
                    *ptr_comprobador = false;
                }
                else
                { //  si el dia esta entre 1 y 28, la fecha es valida
                    *ptr_comprobador = true;
                }
                break;
            }
            break;

        case MAR:
            //  si el mes es marzo
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 31)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case ABR:
            //  si el mes es abril
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 30)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case MAY:
            //  si el mes es mayo
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 31)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case JUN:
            //  si el mes es junio
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 31)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case JUL:
            //  si el mes es julio
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 31)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case AGO:
            //  si el mes es agosto
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 31)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case SEP:
            //  si el mes es septiembre
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 30)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case OCT:
            //  si el mes es octubre
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 31)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case NOV:
            //  si el mes es noviembre
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 30)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        case DIC:
            //  si el mes es diciembre
            if (*fecha_nueva->ptr_fecha_dd < 1 || *fecha_nueva->ptr_fecha_dd > 31)
            { //  si el dia es menor de uno o mayor de 31 la fecha no es valida
                *ptr_comprobador = false;
            }
            else
            { //  si el dia esta entre 1 y 31, la fecha es valida
                *ptr_comprobador = true;
            }
            break;

        default:
            break;
        }
    }

    return *ptr_comprobador; //  devuelve a registro_fecha
}

//  funciones char
//  funciones Fecha
Fecha registro_fecha(Fecha &ptr_fecha_nueva)
{
    /*variables de la funcion registro_fecha*/
    //  bool
    bool
        fecha_validacion,                             //  variable validacion
            *ptr_fecha_validacion = &fecha_validacion //  puntero a validacion
        ;

    /*registro*/
    do
    {
        cout << "Fecha de ingreso (dd mm aaaa): ";

        cin >> *ptr_fecha_nueva.ptr_fecha_dd;
        scanf("%d", &ptr_fecha_nueva.ptr_fecha_mm);
        cin >> *ptr_fecha_nueva.ptr_fecha_aaaa;

        if (verificar_fecha(&ptr_fecha_nueva))
        {
            *ptr_fecha_validacion = true;
        }
    } while (*ptr_fecha_validacion != true);

    return ptr_fecha_nueva;
}
//  funciones float
//  funciones Estudiante
Estudiante registro_estudiante(Estudiante &ptr_estudiante_nuevo)
{
    /*enums*/
    //  lista datos
    enum
    {
        NOMBRE_ESTUDIANTE = 1,
        NOMBRE_CARRERA,
        FECHA_INGRESO,
        CALIFICACIONES,
        COLEGIATURA,
        IDENTIFICADOR
    };

    /*variables de la funcion registro_estudiante*/
    //  const char
    const char
        titulo_registro_estudiantes[] = {"Registro de estudiantes"},                                      //  titulo de registro_estudiante
        parrafo_instrucciones[] = {"A continuacion, seran solicitados los datos de tu alumno que son: "}, //  descripcion introduccion de registro_estudiante
        lista_datos_estudiante[IDENTIFICADOR][LARGO_LISTAS] =
            {
                "Nombre",                                   //  estudiante_nombre
                "Nombre de la carrera",                     //  estudiante_carrera
                "Fecha de ingreso",                         //  estudiante_fecha_ingreso
                "Calificaciones",                           //  estudiante_calificaciones
                "Colegiatura semestral",                    //  estudiante_colegiatura
                "Numero identificador (ID)"                 //  estudiante_identificador
            },                                              //  lista de datos a recibir del usuario
        popup_contiunar[] = {"Continuar si (1) o no (0): "} //  pop-up continuar
    ;
    //  Fecha
    Fecha
        fecha_nueva,                        //  variable nueva
            *ptr_fecha_nueva = &fecha_nueva //  puntero a nueva
        ;
    //  int
    int
        usuario_opcion,                           //  variable opcion
            *ptr_usuario_opcion = &usuario_opcion //  puntero a opcion
        ;

    ptr_estudiante_nuevo.estudiante_nombre = (char *)malloc(LARGO_NOMBRE * sizeof(Estudiante));
    ptr_estudiante_nuevo.estudiante_carrera = (char *)malloc(LARGO_CARRERA * sizeof(Estudiante));
    ptr_estudiante_nuevo.estudiante_calificaciones = (float *)malloc(CANTIDAD_CALIFICACIONES * sizeof(Estudiante));

    /*registro*/
    impresion_vector(titulo_registro_estudiantes, NULL, NULL, NULL, NULL);

    //  temporal
    system("clear");

    cout << "ID: ";
    cin >> *ptr_estudiante_nuevo.ptr_estudiante_identificador;

    cout << "Nombre: ";
    fgets(ptr_estudiante_nuevo.estudiante_nombre, LARGO_NOMBRE, stdin);

    cout << "Carrera: ";
    fgets(ptr_estudiante_nuevo.estudiante_carrera, LARGO_CARRERA, stdin);

    cout << "Fecha: ";
    *ptr_estudiante_nuevo.ptr_fecha_ingreso = registro_fecha(*ptr_fecha_nueva);

    cout << "Colegiatura semestral: ";
    cin >> *ptr_estudiante_nuevo.ptr_estudiante_colegiatura;

    return ptr_estudiante_nuevo;
}
//  funciones int
//  funciones void

// bloque utilidad

//  funciones bool
//  funciones char
//  funciones Fecha
//  funciones float
//  funciones Estudiante
//  funciones int
int main()
{
    /*enums*/
    enum
    {
        CONSULTA = 1,
        EXTRAS,
        MODIFICACION,
        REGISTRO,
        SALIR
    };

    /*variables de la funcion main*/
    //  const char
    const char
        titulo_main[] = {"Control de Datos de Estudiantes"},                                                      //  titulo de main
        parrafo_introduccion[] = {"Esta aplicacion te permite manejar registros de estudiantes en una escuela."}, //  parrafo de introduccion
        subtitulo_main_opciones[] = {"Opciones: "},                                                               //  subtitulo opciones
        opciones_funciones[SALIR][LARGO_OPCIONES] =
            {
                "consulta",                                                                      //  ...
                "extras",                                                                        //  ...
                "modificacion",                                                                  //  ...
                "registro",                                                                      //  registro_estudiantes(Estudiante &);
                "salir"                                                                          //  fin del programa
            },                                                                                   //  opciones codigos de acceso a las funciones
        popup_usuario_opcion[] = {"Escribe el numero de una de las opciones mostradas arriba: "} //  pop-up opcion del usuario
    ;
    //  Estudiante
    Estudiante
        *estudiante_lista,                            //  arreglo de estructuras
        estudiante_nuevo,                             //  variable estudiante_nuevo
            *ptr_estudiante_nuevo = &estudiante_nuevo //  apuntador a estudiante nuevo
        ;

    //  int
    int
        estudiante_posicion = 0,                                  //  variable posicion (para el arreglo de estructuras)
        *ptr_estudiante_posicion = &estudiante_posicion,          //  puntero a posicion
        usuario_opcion = 0,                                       //  variable opcion
            *ptr_usuario_opcion = &usuario_opcion,                //  puntero a opcion
        estudiante_lista_largo = 0,                               //  variable largo (para el largo de la lista)
            *ptr_estudiante_lista_largo = &estudiante_lista_largo //  puntero a largo
        ;

    /*menu*/
    do
    {
        impresion_vector(titulo_main, NULL, parrafo_introduccion, NULL, NULL); //  imprime titulo y parrafo
        impresion_vector(NULL, subtitulo_main_opciones, NULL, NULL, NULL);     //  imprime subtitulo
        impresion_matriz(opciones_funciones, NULL, SALIR, INT_NULL);           //  imprime opciones
        impresion_vector(NULL, NULL, NULL, popup_usuario_opcion, NULL);        //  imprime pop-up
        cin >> *ptr_usuario_opcion;                                            //  captura opcion del usuario

        //  temporal
        system("clear");

        //  switch
        switch (*ptr_usuario_opcion)
        {
        case CONSULTA:
            //  ...
            break;

        case EXTRAS:
            //  ...
            break;

        case MODIFICACION:
            //  ...
            break;

        case REGISTRO:
            cout << char(168) << "cuantos estudiantes guardaras? ";
            cin >> *ptr_estudiante_lista_largo;
            estudiante_lista = (Estudiante *)malloc(*ptr_estudiante_lista_largo * sizeof(Estudiante));

            for (*ptr_estudiante_posicion; *ptr_estudiante_posicion != *ptr_estudiante_lista_largo; *ptr_estudiante_posicion++)
            {
                estudiante_lista[*ptr_estudiante_posicion] = registro_estudiante(*ptr_estudiante_nuevo);
            }
            break;

        case SALIR:
            //  ...
            break;

        default:
            break;
        }

    } while (*ptr_usuario_opcion != SALIR);

    return 0;
}
//  funciones void
void impresion_vector(const char titulo[], const char subtitulo[], const char parrafo[], const char popup[], const char advertencia[])
{
    /*impresion*/

    // titulo
    if (titulo != NULL)
    {
        if (parrafo != NULL)
        {
            for (int i = 0; i != ((strlen(parrafo) / 2) - (strlen(titulo) / 2)); i++)
            {
                cout << char(32);
            }
        }
        cout << titulo
             << endl
             << endl;
    }

    //  subtitulo
    if (subtitulo != NULL)
    {
        if (subtitulo != 0)
        {
            cout << subtitulo
                 << endl;
        }
    }

    // parrafo
    if (parrafo != NULL)
    {
        for (int i = 0; i != ((strlen(parrafo) / 2) - (strlen(titulo) / 2)); i++)
        {
            cout << char(32);
        }
        // cout << "\t";
        for (int i = 0; parrafo[i] != '\0'; i++)
        {
            if (parrafo[i] != char(32))
            {
                cout << parrafo[i];
            }
            else if (i >= (strlen(titulo) * 1))
            {
                if (i % (strlen(titulo) * 1))
                {
                    cout << endl;
                    for (int i = 0; i != ((strlen(parrafo) / 2) - (strlen(titulo) / 2)); i++)
                    {
                        cout << char(32);
                    }
                }
            }
        }
        cout << endl
             << endl;
    }

    //  pop-up
    if (popup != NULL)
    {
        cout << endl
             << popup;
    }
}

void impresion_matriz(const char opciones[][LARGO_OPCIONES], const char listas[][LARGO_LISTAS], int lim_opc, int lim_lis)
{
    // opciones
    if (opciones != NULL)
    {
        for (int i = 0; i != lim_opc; i++)
        {
            cout << i + 1
                 << ") "
                 << opciones[i]
                 << endl;
        }
    }

    // listas
    if (listas != NULL)
    {
        for (int i = 0; i != lim_lis; i++)
        {
            cout << ">"
                 << listas[i]
                 << endl;
        }
    }
}