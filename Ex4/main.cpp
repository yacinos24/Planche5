#include <iostream>
#include "Complexe.h"
using namespace std;

int main()
{
    Complexe z1(1,2),z2,z3,z4;
    z2=Complexe(-3,-4);
    z1.afficher();
    z2.afficher();
    z3=z1.conjuge();
    z3.afficher();
    z4=z1+z2;
    z4.afficher();
    Complexe z5=z1+z2+z3;
    z5.afficher();
    cout<<z1.module()<<endl;
    (1+z5+2).afficher();
    return 0;
}
