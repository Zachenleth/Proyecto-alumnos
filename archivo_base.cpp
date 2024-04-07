#include <iostream>
#include <conio.h>
using namespace std;

// temporal definitions
#define LARGO_RENGLON 200

/*DIClarations*/

// enums

// Mes, list the Mess of the year
enum Mes
{
    ENE = 1, // january
    FEB,     // february
    MAR,     // march
    ABR,     // april
    MAY,     // may
    JUN,     // june
    JUL,     // july
    AGO,     // AGOust
    SEP,     // september
    OCT,     // october
    NOV,     // november
    DIC      // DICember
};

// struct´s

// Calificaciones, from Estudiante Calificacioness

struct Calificaciones
{
    /*Calificaciones variables*/

    // float variables
    float
        calificacion_uno,                 // first evaluation
            *ptr_cu = &calificacion_uno,  // ptr to calificacion_uno
        calificacion_dos,                // second evaluation
            *ptr_cd = &calificacion_dos, // ptr to calificacion_dos
        calificacion_tres,                 // third evaluation
            *ptr_ct = &calificacion_tres   // ptr to calificacion_tres
        ;
};

// Fecha, define a Fecha
struct Fecha
{
    /*Fecha variables*/

    // int variables
    int
        dd,                // day
            *ptr_dd = &dd, // ptr to dd
        yy,                // year
            *ptr_yy = &yy  // ptr to yy
        ;

    // Mes (enum) variables
    Mes
        mm,               // Mes
            *ptr_mm = &mm // ptr to mm
        ;
};

// Estudiante, Estudiante profile
struct Estudiante
{
    /*Estudiante variables*/

    // int variables
    int
        numero_id,               // alumn id
            *ptr_ni = &numero_id // ptr numero_id
        ;

    // char variables
    char
        estudiante_nombre[LARGO_RENGLON],       // Estudiante name
            *ptr_cd = estudiante_nombre,     // ptr to estudiante_nombre
        carrera_universitaria[LARGO_RENGLON],  // career name
            *ptr_uc = carrera_universitaria // ptr to carrera_universitaria
        ;

    // float variables
    float
        costo_colegiatura,               // tution cost
            *ptr_ct = &costo_colegiatura // ptr to tuition_cost
        ;

    /*nested struct´s*/

    Calificaciones
        estudiante_calificaciones,               // Calificaciones variable
            *ptr_cd = &estudiante_calificaciones // ptr to estudiante_calificaciones
        ;
    Fecha
        fecha_de_entrada,                // Fecha variable
            *ptr_fde = &fecha_de_entrada // ptr to fecha_de_entrada
        ;
};

/*functions*/
void imprimir_cuerpo(const char[], const char[]);

// add registry
Estudiante estudiante_agregar(Estudiante *, int *);
Calificaciones calificaciones_llenar(Calificaciones *);
bool calificaciones_verificar(Calificaciones *);
Fecha fecha_llenar(Fecha *);
bool fecha_verificar(Fecha *);

// delete registry

// search in registry

/*implementations*/
// main
int main()
{
    /*main function variables*/

    // int
    int
        usuario_opcion,                   // option the user have selected
            *ptr_uo = &usuario_opcion,    // ptr to usuario_opcion
        estudiante_numero = 0,           // counter
            *ptr_cd = &estudiante_numero // ptr to i variable
        ;

    const int
        exit_option = 5; // option to exit

    // Estudiante variables
    Estudiante
        estudiante_actual,                // variable
            *ptr_ea = &estudiante_actual, // ptr to estudiante_actual
        estudiante_lista[LARGO_RENGLON],  // list
            *ptr_el = estudiante_lista // ptr to Estudiante_list
        ;

    // arrays

    /*main menu information*/

    const char
        main_titulo[] = {"Estudiante Registration"},                                    // main menu title
        *ptr_mt = main_titulo,                                                       // ptr to main_titulo
        main_opciones[] = {"add\ndelete\nsearch\nmore\nexit"},                       // main menu options
            *ptr_mo = main_opciones,                                                 // ptr to main_opciones
        switch_default_advertencia_titulo[] = {"Invalid Number"},                        // sdw_title
            *ptr_sdat = switch_default_advertencia_titulo,                               // ptr to sdw_title
        switch_default_advertencia_cuerpo[] = {"try to use another number\nlike 1 or 2"}, // sdw_body
            *ptr_sdab = switch_default_advertencia_cuerpo                                 // ptr to sdw_body
        ;

    /*beggin*/

    do
    {
        imprimir_cuerpo(ptr_mt, ptr_mo); // call to "menu" function

        /*input user option*/

        cout << "> ";   // prompt
        cin >> *ptr_uo; // input

        /*switch options*/

        switch (*ptr_uo)
        {
        case 1:
            ptr_el[*ptr_cd] = estudiante_agregar(ptr_ea, ptr_cd);
            ptr_cd++;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case exit_option:
            break;
        default:
            imprimir_cuerpo(ptr_sdat, ptr_sdab); // call "imprimir_cuerpo" function (switch_default_warning)
            system("pause");
            break;
        }
    } while (*ptr_uo != exit_option); // if usuario_opcion (input) is same as exit_option (currently "5"), program will be finished

    return 0;
}

// imprimir_cuerpo, print the elements on screen
void imprimir_cuerpo(const char mensaje_titulo[], const char mensaje_cuerpo[])
{
    // system clean command
    system("cls");

    // title print
    cout << endl
         << "\t"
         << mensaje_titulo
         << endl
         << endl;

    // body print
    cout << mensaje_cuerpo
         << endl;
}

// estudiante_agregar, add a new Estudiante to registry
Estudiante estudiante_agregar(Estudiante *new_Estudiante, int *i)
{
    fflush(stdin);
    /*estudiante_agregar function variables*/

    // int

    // Calificaciones variables
    Calificaciones
        Calificaciones_var,
        *ptr_gv = &Calificaciones_var // ptr to Calificaciones_gv
        ;

    // Fecha variables
    Fecha
        Fecha_var,
        *ptr_dv = &Fecha_var // ptr to Fecha_var
        ;

    /*estudiante_agregar menu information*/

    const char
        add_title[] = {"Add Estudiante"},                 // estudiante_agregar menu title
        *ptr_at = add_title,                           // ptr to add_title
        add_body[] = {"create a new Estudiante profile"}, // estudiante_agregar menu body
            *ptr_ab = add_body                         // ptr to add_body
        ;

    // call "imprimir_cuerpo" function
    imprimir_cuerpo(ptr_at, ptr_ab);

    /*user input*/

    // ID number
    new_Estudiante->ptr_ni = i; // Estudiante ID
    cout << endl
         << "ID number: "
         << *new_Estudiante->ptr_ni;

    // Estudiante name
    cout << endl
         << "Estudiante name: ";
    cin >> new_Estudiante->ptr_cd; // Estudiante name

    // Career name
    cout << "Estudiante career name: ";
    cin >> new_Estudiante->ptr_uc; // career name

    // Calificacioness
    cout << "Calificacioness: "
         << endl;

    // call to "calificaciones_llenar"
    calificaciones_llenar(ptr_gv);

    // tuition
    cout << endl
         << "Tution cost: $";
    cin >> *new_Estudiante->ptr_ct;

    // Fecha
    cout << "Fecha of entry: "
         << endl;

    // call to "fecha_llenar"
    fecha_llenar(ptr_dv);

    cout << endl;
    cout << "\tdd: " << *new_Estudiante->ptr_fde->ptr_dd << endl;
    cout << "\tmm: " << *new_Estudiante->ptr_fde->ptr_mm << endl;
    cout << "\tyy: " << *new_Estudiante->ptr_fde->ptr_yy << endl;

    // finisher
    cout << endl
         << "continue> ";
    getch();

    return *new_Estudiante;
}

Calificaciones calificaciones_llenar(Calificaciones *new_Calificacioness)
{
    /*calificaciones_llenar function variables*/

    // boolean
    bool
        valid_Calificacioness = false,   // if valid_Calificacioness, all Calificacioness will be numbers between 0 and 10
        *ptr_vg = &valid_Calificacioness // ptr to valid_Calificacioness
        ;
    do
    {
        /*capture Calificacioness*/

        // first evaluation
        cout << "\t> first Calificaciones: ";
        cin >> *new_Calificacioness->ptr_cu;

        // second evaluation
        cout << "\t> second Calificaciones: ";
        cin >> *new_Calificacioness->ptr_cd;

        // third evaluation
        cout << "\t> third Calificaciones: ";
        cin >> *new_Calificacioness->ptr_ct;

        // call to "fecha_verificar"
        if (calificaciones_verificar(new_Calificacioness))
        {
            *ptr_vg = true;
        }
        else
        {
            cout << endl
                 << "Invalid Calificacioness, Retry: "
                 << endl;
            *ptr_vg = false;
        }
    } while (*ptr_vg != true); // if valid_Calificacioness == true, the loop ends

    return *new_Calificacioness;
}

Fecha fecha_llenar(Fecha *new_Fecha)
{
    /*fecha_llenar function variables*/

    // boolean
    bool
        leap_year = false,        // if leap_year, february have 29 days (1 day more)
        *ptr_ly = &leap_year,     // ptr to leap_year
        valid_Fecha = false,       // if valid_Fecha, the do while loop end
            *ptr_vd = &valid_Fecha // ptr to valid_Fecha
        ;

    do
    {
        /*capture Fecha*/

        // day
        cout << "\t"
             << "day: ";
        cin >> *new_Fecha->ptr_dd;

        // Mes
        cout << "\t"
             << "Mes: ";
        scanf("%d", &
        new_Fecha->ptr_mm);

        // year
        cout << "\t"
             << "year: ";
        cin >> *new_Fecha->ptr_yy;

        // call to "fecha_verificar"
        if (fecha_verificar(new_Fecha))
        {
            *ptr_vd = true;
        }
        else
        {
            cout << endl
                 << "Invalid Fecha, Retry: "
                 << endl;
            *ptr_vd = false;
        }
    } while (*ptr_vd != true); // if valid_Fecha == true, the loop ends

    return *new_Fecha;
}

bool calificaciones_verificar(Calificaciones *verify)
{
    /*calificaciones_verificar function variables*/

    // boolean
    bool
        verifier,
        *ptr_verifier // ptr to verifier
        ;

    /*check that it is less than 10 and greater than 0*/

    // first Calificaciones
    if (*verify->ptr_cu < 0 || *verify->ptr_cu > 10)
    {
        *ptr_verifier = false;
    }
    else
    {
        *ptr_verifier = true;
    }

    // second Calificaciones
    if (*verify->ptr_cd < 0 || *verify->ptr_cd > 10)
    {
        *ptr_verifier = false;
    }
    else
    {
        *ptr_verifier = true;
    }

    // third Calificaciones
    if (*verify->ptr_ct < 0 || *verify->ptr_ct > 10)
    {
        *ptr_verifier = false;
    }
    else
    {
        *ptr_verifier = true;
    }

    return *ptr_verifier;
}

bool fecha_verificar(Fecha *verify)
{
    /*fecha_verificar function variables*/

    // int
    int
        leap_year = *verify->ptr_yy % 4, // obtains the residue of year/4
        *ptr_ly = &leap_year             // ptr to leap_year
        ;

    // check that the Mes is not older than 12 (DICember) and less than 1 (January)
    if (*verify->ptr_mm < ENE || *verify->ptr_mm > DIC)
    {
        // check to see if the year is a leap year
        if ((*verify->ptr_yy % 100) == 0 || (*verify->ptr_yy % 400) == 0)
        {
            *ptr_ly = false;
        }
        else
        {
            *ptr_ly = true;
        }
    }
    else
    {
        // verify based on Mes
        switch (*verify->ptr_mm)
        {
        // if Mes is 1
        case ENE:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if Mes is 2
        case FEB:
            // if leap_year is 0, the year is a leap year
            if (ptr_ly == 0)
            {
                // check that the day is greater than 1 and less than 29
                if (*verify->ptr_dd < 1 || *verify->ptr_dd > 29)
                {
                    return false;
                }
            }
            else
            {
                // check that the day is greater than 1 and less than 28
                if (*verify->ptr_dd < 1 || *verify->ptr_dd > 28)
                {
                    return false;
                }
            }
            break;
        // if Mes is 3
        case MAR:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if Mes is 4
        case ABR:
            // check that the day is greater than 1 and less than 30
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 30)
            {
                return false;
            }
            break;
        // if Mes is 5
        case MAY:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if Mes is 6
        case JUN:
            // check that the day is greater than 1 and less than 30
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 30)
            {
                return false;
            }
            break;
        // if Mes is 7
        case JUL:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if Mes is 8
        case AGO:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if Mes is 9
        case SEP:
            // check that the day is greater than 1 and less than 30
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 30)
            {
                return false;
            }
            break;
        // if Mes is 10
        case OCT:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if Mes is 11
        case NOV:
            // check that the day is greater than 1 and less than 30
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 30)
            {
                return false;
            }
            break;
        // if Mes is 12
        case DIC:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        }
    }
    return true;
}

/*              EMPIECEN AQUÍ               */