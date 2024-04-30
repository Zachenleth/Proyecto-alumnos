#include <iostream>
using namespace std;
enum prro
{
    MASTER = 1,
    CANIJO,
    CHALAN
};

struct cato
{
    
    prro *carajo;
};

prro *marro(prro *);

int main()
{
    cato *chinga;
    prro mono;
    scanf("%i",&mono);
    prro *morro=&mono;
    chinga->carajo=morro;
    printf("chinga->cerdo %d",&chinga->carajo);
    return 0;
}

prro *marro(prro *jabali)
{
    cout << "mierda" << endl;
    while (jabali != 0)
    {
        cout << "carajo" << endl;
        scanf("%i", &jabali);
        cout << "chingao" << endl;
        printf("> %i\n", jabali);
    }
    cout << "sali?" << endl;
    return jabali;
}