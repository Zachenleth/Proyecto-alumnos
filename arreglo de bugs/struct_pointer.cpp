#include <iostream>
using namespace std;

enum cato
{
    ENERO = 1,
    FEBRERO,
    MARZO,
    ABRIL
};

struct Prro
{
    int *ptr_x;
};

int main()
{
    Prro *dober;
    cout << "tu numero: ";
    cin>>*dober->ptr_x;
    switch (*dober->ptr_x)
    {
    case ENERO:
        cout << "1 - " << dober->ptr_x << endl;
        break;
    case FEBRERO:
        cout << "2 - " << dober->ptr_x << endl;
        break;
    case MARZO:
        cout << "3 - " << dober->ptr_x << endl;
        break;
    case ABRIL:
        cout << "4 - " << dober->ptr_x << endl;
        break;

    default:
        cout << "aaaaaa" << endl;
        break;
    }
    return 0;
}