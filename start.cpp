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
        first_grade,  // first evaluation
        second_grade, // second evaluation
        third_grade   // third evaluation
        ;
};

// Date, define a date
struct Date
{
    /*Date variables*/

    // int variables
    int
        dd, // day
        yy  // year
        ;

    // Month (enum) variables
    Month mm; // month
};

// Student, student profile
struct Student
{
    /*Student variables*/

    // int variables
    int id_number; // alumn id

    // char variables
    char
        student_name[ROW_LENGHT],      // student name
        university_career[ROW_LENGHT]; // career name
    ;

    // float variables
    float tution_cost; // tution cost

    /*nested struct´s*/

    Grade student_grades; // Grade variable
    Date date_of_entry;   // Date variable
};

/*functions*/
void print_message(const char[], const char[]);

// add registry
Student add_student(Student, int);
Grade fill_grade(Grade);
bool verify_grade(Grade);
Date fill_date(Date);
bool verify_date(Date);

// delete registry

// search in registry

/*implementations*/
// main
int main()
{
    /*main function variables*/

    // int
    int
        user_option, // option the user have selected
        i = 0        // counter
        ;

    const int exit_option = 5; // option to exit

    // Student variables
    Student
        student_var,              // variable
        students_list[ROW_LENGHT] // list
        ;

    // arrays

    /*main menu information*/

    const char
        main_title[] = {"Student Registration"},                                    // main menu title
        main_options[] = {"add\ndelete\nsearch\nmore\nexit"},                       // main menu options
        switch_default_warning_title[] = {"Invalid Number"},                        // sdw_title
        switch_default_warning_body[] = {"try to use another number\nlike 1 or 2"}; // sdw_body

    /*beggin*/

    do
    {
        print_message(main_title, main_options); // call to "menu" function

        /*input user option*/

        cout << "> ";       // prompt
        cin >> user_option; // input

        /*switch options*/

        switch (user_option)
        {
        case 1:
            students_list[i] = add_student(student_var, i);
            i++;
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
            print_message(switch_default_warning_title, switch_default_warning_body); // call "print_message" function (switch_default_warning)
            system("pause");
            break;
        }
    } while (user_option != exit_option); // if user_option (input) is same as exit_option (currently "5"), program will be finished

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
Student add_student(Student new_student, int i)
{
    /*add_student function variables*/

    // int
    int joker = 0; // to exit

    // Date variables
    Date date_var;

    // Student variables
    Grade grade_var;

    /*add_student menu information*/

    const char
        add_title[] = {"Add Student"},                // add_student menu title
        add_body[] = {"create a new student profile"} // add_student menu body
    ;

    // call "print_message" function
    print_message(add_title, add_body);

    /*user input*/

    // ID number
    new_student.id_number = i; // student ID
    cout << endl
         << "ID number: "
         << new_student.id_number;

    // Student name
    cout << endl
         << "Student name: ";
    cin >> new_student.student_name; // student name

    // Career name
    cout << "Student career name: ";
    cin >> new_student.university_career; // career name

    // Grades
    cout << "Grades"
         << endl;

    // call to "fill_grade"
    new_student.student_grades = fill_grade(grade_var);

    // tuition
    cout << "tution cost: ";
    cin >> new_student.tution_cost;

    // Date
    cout << "Date of entry"
         << endl;

    // call to "fill_date"
    new_student.date_of_entry = fill_date(date_var);

    // finisher
    cout << endl
         << "continue> ";
    getch();

    return new_student;
}

Grade fill_grade(Grade new_grades)
{
    /*fill_grade function variables*/

    // boolean
    bool valid_grades = false; // if valid_grades, all grades will be numbers between 0 and 10
    do
    {
        /*capture grades*/

        // first evaluation
        cout << "\t> first grade: ";
        cin >> new_grades.first_grade;

        // second evaluation
        cout << "\t> second grade: ";
        cin >> new_grades.second_grade;

        // third evaluation
        cout << "\t> third grade: ";
        cin >> new_grades.third_grade;

        // call to "verify_date"
        if (verify_grade(new_grades))
        {
            valid_grades = true;
        }
        else
        {
            cout << endl
                 << "Invalid grades, Retry: "
                 << endl;
            valid_grades = false;
        }
    } while (valid_grades != true); // if valid_grades == true, the loop ends

    return new_grades;
}

Date fill_date(Date new_date)
{
    /*fill_date function variables*/

    // boolean
    bool
        leap_year = false, // if leap_year, february have 29 days (1 day more)
        valid_date = false // if valid_date, the do while loop end
        ;

    do
    {
        /*capture date*/

        // day
        cout << "\t"
             << "day: ";
        cin >> new_date.dd;

        // month
        cout << "\t"
             << "month: ";
        scanf("%d", &new_date.mm);

        // year
        cout << "\t"
             << "year: ";
        cin >> new_date.yy;

        // call to "verify_date"
        if (verify_date(new_date))
        {
            valid_date = true;
        }
        else
        {
            cout << endl
                 << "Invalid date, Retry: "
                 << endl;
            valid_date = false;
        }
    } while (valid_date != true); // if valid_date == true, the loop ends

    return new_date;
}

bool verify_grade(Grade verify)
{
    /*verify_grade function variables*/

    // boolean
    bool verifier;

    /*check that it is less than 10 and greater than 0*/

    // first grade
    if (verify.first_grade < 0 || verify.first_grade > 10)
    {
        verifier = false;
    }
    else
    {
        verifier = true;
    }

    // second grade
    if (verify.second_grade < 0 || verify.second_grade > 10)
    {
        verifier = false;
    }
    else
    {
        verifier = true;
    }

    // third grade
    if (verify.third_grade < 0 || verify.third_grade > 10)
    {
        verifier = false;
    }
    else
    {
        verifier = true;
    }

    return verifier;
}

bool verify_date(Date verify)
{
    /*verify_date function variables*/

    // int
    int leap_year = verify.yy % 4; // obtains the residue of year/4

    // check that the month is not older than 12 (December) and less than 1 (January)
    if (verify.mm < JAN || verify.mm > DEC)
    {
        // check to see if the year is a leap year
        if ((verify.yy % 100) == 0 || (verify.yy % 400) == 0)
        {
            leap_year = false;
        }
        else
        {
            leap_year = true;
        }
    }
    else
    {
        // verify based on month
        switch (verify.mm)
        {
        // if month is 1
        case JAN:
            // check that the day is greater than 1 and less than 31
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        // if month is 2
        case FEB:
            // if leap_year is 0, the year is a leap year
            if (leap_year == 0)
            {
                // check that the day is greater than 1 and less than 29
                if (verify.dd < 1 || verify.dd > 29)
                {
                    return false;
                }
            }
            else
            {
                // check that the day is greater than 1 and less than 28
                if (verify.dd < 1 || verify.dd > 28)
                {
                    return false;
                }
            }
            break;
        // if month is 3
        case MAR:
            // check that the day is greater than 1 and less than 31
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        // if month is 4
        case APR:
            // check that the day is greater than 1 and less than 30
            if (verify.dd < 1 || verify.dd > 30)
            {
                return false;
            }
            break;
        // if month is 5
        case MAY:
            // check that the day is greater than 1 and less than 31
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        // if month is 6
        case JUN:
            // check that the day is greater than 1 and less than 30
            if (verify.dd < 1 || verify.dd > 30)
            {
                return false;
            }
            break;
        // if month is 7
        case JUL:
            // check that the day is greater than 1 and less than 31
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        // if month is 8
        case AUG:
            // check that the day is greater than 1 and less than 31
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        // if month is 9
        case SEP:
            // check that the day is greater than 1 and less than 30
            if (verify.dd < 1 || verify.dd > 30)
            {
                return false;
            }
            break;
        // if month is 10
        case OCT:
            // check that the day is greater than 1 and less than 31
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        // if month is 11
        case NOV:
            // check that the day is greater than 1 and less than 30
            if (verify.dd < 1 || verify.dd > 30)
            {
                return false;
            }
            break;
        // if month is 12
        case DEC:
            // check that the day is greater than 1 and less than 31
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        }
    }
    return true;
}