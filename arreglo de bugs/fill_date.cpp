#include <iostream>
using namespace std;

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

Date fill_date(Date);
bool validDate(Date);

int main()
{
    Date date;
    fill_date(date);
    return 0;
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

        cout << "\t"
             << "day: ";
        cin >> new_date.dd;

        cout << "\t"
             << "month: ";
        scanf("%d", &new_date.mm);

        cout << "\t"
             << "year: ";
        cin >> new_date.yy;

        // verify
        if (validDate(new_date))
        {
            cout << endl
                 << "valid date!";
            valid_date = true;
        }
        else
        {
            cout << endl
                 << "invalid date!";
            valid_date = false;
        }

        return new_date;
    } while (valid_date != true);
}
bool validDate(Date verify)
{
    int leap_year = verify.yy % 4;
    if (verify.mm < JAN || verify.mm > DEC)
    {
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
        switch (verify.mm)
        {
        case JAN:
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        case FEB:
            if (leap_year == 0)
            {
                if (verify.dd < 1 || verify.dd > 29)
                {
                    return false;
                }
            }
            else
            {
                if (verify.dd < 1 || verify.dd > 28)
                {
                    return false;
                }
            }
            break;
        case MAR:
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        case APR:
            if (verify.dd < 1 || verify.dd > 30)
            {
                return false;
            }
            break;
        case MAY:
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        case JUN:
            if (verify.dd < 1 || verify.dd > 30)
            {
                return false;
            }
            break;
        case JUL:
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        case AUG:
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        case SEP:
            if (verify.dd < 1 || verify.dd > 30)
            {
                return false;
            }
            break;
        case OCT:
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        case NOV:
            if (verify.dd < 1 || verify.dd > 30)
            {
                return false;
            }
            break;
        case DEC:
            if (verify.dd < 1 || verify.dd > 31)
            {
                return false;
            }
            break;
        }
    }
    return true;
}