#include <iostream>
#include "Cercle.h"
#include "Point.h"
using namespace std;

int main()
{
    Point p=Point(10,10);
    Cercle c1=Cercle(p,1);
    c1.affiche();
    cout<<endl<<"le perimetre est "<<c1.calculPerimeter()<<endl;
    cout<<"la surface est"<<c1.calculSurface()<<endl;
    c1.setRayon(c1.getRayon()*2);
    c1.affiche();
    cout<<endl<<"le nouveau perimetre est "<<c1.calculPerimeter()<<endl;
    cout<<"la nouvelle surface est "<<c1.calculSurface()<<endl;
    c1.setCentre(Point(0,0));
    c1.affiche();
    cout<<endl<<"(1,1) est dans c1? : "<<boolalpha<<c1.verifAppartient(Point(1,1))<<endl;
    cout<<boolalpha<<"(3,3) est dans c1? : "<<c1.verifAppartient(Point(3,3))<<endl;
    Cercle c2=Cercle(0,0,2);
    cout<<boolalpha<<c1.egalite(c2);
    return 0;
}

