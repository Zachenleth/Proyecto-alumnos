#include <iostream>
using namespace std;

int main()
{
    char name[100];
    char *ptr = name;
    float cost;
    float *ptr1 = &cost;

    /*
    fflush(stdin);
    fgets(ptr,101,stdin);
    system("cls");
    cout<<"nombre: "<<ptr;
    */

    cin >> *ptr1;
    cout << "costo: $" << *ptr1;

    return 0;
}