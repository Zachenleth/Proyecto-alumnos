#include <iostream>
using namespace std;
enum prro
{
    MASTER = 1,
    CANIJO,
    CHALAN
};

prro *marro(prro *);

int main()
{
    prro *guarro;
    prro *morro;
    morro=marro(guarro);
    cout<<"el resultado es "<<morro<<endl;
    return 0;
}

prro *marro(prro *jabali)
{
    cout<<"mierda";
    while (jabali != 0)
    {
        cout<<"carajo"<<endl<<"< ";
        scanf("%i", &jabali);
        cout<<"chingao"<<endl;
        printf("> %i\n", jabali);
    }
    return jabali;
}