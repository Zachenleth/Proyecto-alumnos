#include <iostream>
#include <conio.h>
using namespace std;

// temporal definitions
#define ROW_LENGHT 200
#define COLUMN_LENGHT 200

/*declarations*/

// enums

// Month, list the months of the year
enum Month
{
    JAN = 1, // january
    FEB,     // february
    MAR,     // march
    APR,     // april
    MAY,     // may
    JUN,     // june
    JUL,     // july
    AUG,     // august
    SEP,     // september
    OCT,     // october
    NOV,     // november
    DEC      // december
};

// struct´s

// Grade, from Student grades

struct Grade
{
    /*Grade variables*/

    // float variables
    float
        first_grade,                 // first evaluation
            *ptr_fg = &first_grade,  // ptr to first_grade
        second_grade,                // second evaluation
            *ptr_sg = &second_grade, // ptr to second_grade
        third_grade,                 // third evaluation
            *ptr_tg = &third_grade   // ptr to third_grade
        ;
};

// Date, define a date
struct Date
{
    /*Date variables*/

    // int variables
    int
        dd,                // day
            *ptr_dd = &dd, // ptr to dd
            mm,               // month
            *ptr_mm = &mm, // ptr to mm
        yy,                // year
            *ptr_yy = &yy  // ptr to yy
        ;
};

// Student, student profile
struct Student
{
    /*Student variables*/

    // int variables
    int
        id_number,               // alumn id
            *ptr_in = &id_number // ptr id_number
        ;

    // char variables
    char
        student_name[ROW_LENGHT],       // student name
            *ptr_sn = student_name,     // ptr to student_name
        university_career[ROW_LENGHT],  // career name
            *ptr_uc = university_career // ptr to university_career
        ;

    // float variables
    float
        tution_cost,               // tution cost
            *ptr_tc = &tution_cost // ptr to tuition_cost
        ;

    /*nested struct´s*/

    Grade
        student_grades,               // Grade variable
            *ptr_sg = &student_grades // ptr to student_grades
        ;
    Date
        date_of_entry,                // Date variable
            *ptr_doe = &date_of_entry // ptr to date_of_entry
        ;
};

/*functions*/
void print_message(const char[], const char[]);

// add registry
Student add_student(Student *, int *);
Grade fill_grade(Grade *);
bool verify_grade(Grade *);
Date fill_date(Date *);
bool verify_date(Date *);

// delete registry

// search in registry

/*implementations*/
// main
int main()
{
    /*main function variables*/

    // int
    int
        user_option,                   // option the user have selected
            *ptr_uo = &user_option,    // ptr to user_option
        student_counter = 0,           // counter
            *ptr_sc = &student_counter // ptr to i variable
        ;

    const int
        exit_option = 5; // option to exit

    // Student variables
    Student
        student_var,                // variable
            *ptr_sv = &student_var, // ptr to student_var
        students_list[ROW_LENGHT],  // list
            *ptr_sl = students_list // ptr to student_list
        ;

    // arrays

    /*main menu information*/

    const char
        main_title[] = {"Student Registration"},                                    // main menu title
        *ptr_mt = main_title,                                                       // ptr to main_title
        main_options[] = {"add\ndelete\nsearch\nmore\nexit"},                       // main menu options
            *ptr_mo = main_options,                                                 // ptr to main_options
        switch_default_warning_title[] = {"Invalid Number"},                        // sdw_title
            *ptr_sdwt = switch_default_warning_title,                               // ptr to sdw_title
        switch_default_warning_body[] = {"try to use another number\nlike 1 or 2"}, // sdw_body
            *ptr_sdwb = switch_default_warning_body                                 // ptr to sdw_body
        ;

    /*beggin*/

    do
    {
        print_message(ptr_mt, ptr_mo); // call to "menu" function

        /*input user option*/

        cout << "> ";   // prompt
        cin >> *ptr_uo; // input

        /*switch options*/

        switch (*ptr_uo)
        {
        case 1:
            ptr_sl[*ptr_sc] = add_student(ptr_sv, ptr_sc);
            ptr_sc++;
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
            print_message(ptr_sdwt, ptr_sdwb); // call "print_message" function (switch_default_warning)
            system("pause");
            break;
        }
    } while (*ptr_uo != exit_option); // if user_option (input) is same as exit_option (currently "5"), program will be finished

    return 0;
}

// print_message, print the elements on screen
void print_message(const char message_title[], const char message_body[])
{
    // system clean command
    system("cls");

    // title print
    cout << endl
         << "\t"
         << message_title
         << endl
         << endl;

    // body print
    cout << message_body
         << endl;
}

// add_student, add a new student to registry
Student add_student(Student *new_student, int *i)
{
    /*add_student function variables*/

    // int

    // Grade variables
    Grade
        grade_var,
        *ptr_gv = &grade_var // ptr to grade_gv
        ;

    // Date variables
    Date
        date_var,
        *ptr_dv = &date_var // ptr to date_var
        ;

    /*add_student menu information*/

    const char
        add_title[] = {"Add Student"},                 // add_student menu title
        *ptr_at = add_title,                           // ptr to add_title
        add_body[] = {"create a new student profile"}, // add_student menu body
            *ptr_ab = add_body                         // ptr to add_body
        ;

    // call "print_message" function
    print_message(ptr_at, ptr_ab);

    /*user input*/

    // ID number
    new_student->ptr_in = i; // student ID
    cout << endl
         << "ID number: "
         << *new_student->ptr_in;

    // Student name
    cout << endl
         << "Student name: ";
    cin >> new_student->ptr_sn; // student name

    // Career name
    cout << "Student career name: ";
    cin >> new_student->ptr_uc; // career name

    // Grades
    cout << "Grades: "
         << endl;

    // call to "fill_grade"
    fill_grade(ptr_gv);

    // tuition
    cout << endl
         << "Tution cost: $";
    cin >> *new_student->ptr_tc;

    // Date
    cout << "Date of entry: "
         << endl;

    // call to "fill_date"
    fill_date(ptr_dv);

    cout << endl;
    cout << "\tdd: " << *new_student->ptr_doe->ptr_dd << endl;
    cout << "\tmm: " << *new_student->ptr_doe->ptr_mm << endl;
    cout << "\tyy: " << *new_student->ptr_doe->ptr_yy << endl;

    // finisher
    cout << endl
         << "continue> ";
    getch();

    return *new_student;
}

Grade fill_grade(Grade *new_grades)
{
    /*fill_grade function variables*/

    // boolean
    bool
        valid_grades = false,   // if valid_grades, all grades will be numbers between 0 and 10
        *ptr_vg = &valid_grades // ptr to valid_grades
        ;
    do
    {
        /*capture grades*/

        // first evaluation
        cout << "\t> first grade: ";
        cin >> *new_grades->ptr_fg;

        // second evaluation
        cout << "\t> second grade: ";
        cin >> *new_grades->ptr_sg;

        // third evaluation
        cout << "\t> third grade: ";
        cin >> *new_grades->ptr_tg;

        // call to "verify_date"
        if (verify_grade(new_grades))
        {
            *ptr_vg = true;
        }
        else
        {
            cout << endl
                 << "Invalid grades, Retry: "
                 << endl;
            *ptr_vg = false;
        }
    } while (*ptr_vg != true); // if valid_grades == true, the loop ends

    return *new_grades;
}

Date fill_date(Date *new_date)
{
    /*fill_date function variables*/

    // boolean
    bool
        leap_year = false,        // if leap_year, february have 29 days (1 day more)
        *ptr_ly = &leap_year,     // ptr to leap_year
        valid_date = false,       // if valid_date, the do while loop end
            *ptr_vd = &valid_date // ptr to valid_date
        ;

    do
    {
        /*capture date*/

        // day
        cout << "\t"
             << "day: ";
        cin >> *new_date->ptr_dd;

        // month
        cout << "\t"
             << "month: ";
        cin >> *new_date->ptr_mm;

        // year
        cout << "\t"
             << "year: ";
        cin >> *new_date->ptr_yy;

        // call to "verify_date"
        if (verify_date(new_date))
        {
            cout<<"verificacion exitosa";
            *ptr_vd = true;
        }
        else
        {
            cout << endl
                 << "Invalid date, Retry: "
                 << endl;
            *ptr_vd = false;
        }
    } while (*ptr_vd != true); // if valid_date == true, the loop ends

    return *new_date;
}

bool verify_grade(Grade *verify)
{
    /*verify_grade function variables*/

    // boolean
    bool
        verifier_all,
        *ptr_verifier_all = &verifier_all, // ptr to verifier
        verifier_first,
        *ptr_verifier_first = &verifier_first, // ptr to verifier
        verifier_second,
        *ptr_verifier_second = &verifier_second, // ptr to verifier
        verifier_third,
        *ptr_verifier_third = &verifier_third // ptr to verifier
        ;

    /*check that it is less than 10 and greater than 0*/

    // first grade
    if (*verify->ptr_fg < 0 || *verify->ptr_fg > 10)
    {
        *ptr_verifier_first = false;
    }
    else
    {
        *ptr_verifier_first = true;
    }

    // second grade
    if (*verify->ptr_sg < 0 || *verify->ptr_sg > 10)
    {
        *ptr_verifier_second = false;
    }
    else
    {
        *ptr_verifier_second = true;
    }

    // third grade
    if (*verify->ptr_tg < 0 || *verify->ptr_tg > 10)
    {
        *ptr_verifier_third = false;
    }
    else
    {
        *ptr_verifier_third = true;
    }

    if (*ptr_verifier_first != true || *ptr_verifier_second != true || *ptr_verifier_third != true)
    {
        *ptr_verifier_all = false;
    }
    else
    {
        *ptr_verifier_all = true;
    }

    return *ptr_verifier_all;
}

bool verify_date(Date *verify)
{
    /*verify_date function variables*/

    // int
    int
        leap_year = *verify->ptr_yy % 4, // obtains the residue of year/4
        *ptr_ly = &leap_year             // ptr to leap_year
        ;

    // check that the month is not older than 12 (December) and less than 1 (January)
    if (*verify->ptr_mm < JAN || *verify->ptr_mm > DEC)
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
        // verify based on month
        switch (*verify->ptr_mm)
        {
        // if month is 1
        case JAN:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if month is 2
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
        // if month is 3
        case MAR:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if month is 4
        case APR:
            // check that the day is greater than 1 and less than 30
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 30)
            {
                return false;
            }
            break;
        // if month is 5
        case MAY:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if month is 6
        case JUN:
            // check that the day is greater than 1 and less than 30
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 30)
            {
                return false;
            }
            break;
        // if month is 7
        case JUL:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if month is 8
        case AUG:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if month is 9
        case SEP:
            // check that the day is greater than 1 and less than 30
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 30)
            {
                return false;
            }
            break;
        // if month is 10
        case OCT:
            // check that the day is greater than 1 and less than 31
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 31)
            {
                return false;
            }
            break;
        // if month is 11
        case NOV:
            // check that the day is greater than 1 and less than 30
            if (*verify->ptr_dd < 1 || *verify->ptr_dd > 30)
            {
                return false;
            }
            break;
        // if month is 12
        case DEC:
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