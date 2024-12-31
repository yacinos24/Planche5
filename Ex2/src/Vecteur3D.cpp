#include "Vecteur3D.h"
#include <iostream>
#include <math.h>
using namespace std;

//constructor
Vecteur3D::Vecteur3D():x(0),y(0),z(0){}
Vecteur3D::Vecteur3D(float x,float y,float z):x(x),y(y),z(z){}
//getters
float Vecteur3D::getX(){return this->x;}
float Vecteur3D::getY(){return this->y;}
float Vecteur3D::getZ(){return this->z;}
//methods
void Vecteur3D::afficher()const{
    cout<<'('<<x<<','<<y<<','<<z<<')'<<endl;
}
Vecteur3D Vecteur3D::somme(Vecteur3D a,Vecteur3D b)const{
    return Vecteur3D(a.x+b.x , a.y+b.y ,a.z+b.z);
}
float Vecteur3D::prod(Vecteur3D a,Vecteur3D b)const{
    return (a.x*b.x + a.y*b.y + a.z*b.z);
}
bool Vecteur3D::coincide(Vecteur3D a,Vecteur3D b)const{
    return (a.x==b.x && a.y==b.y && a.z==b.z);
}
float Vecteur3D::norme()const{
    return sqrt(x*x+y*y+z*z);
}

Vecteur3D Vecteur3D::normauxParValeur(Vecteur3D a, Vecteur3D b) const {
    return (a.norme() > b.norme()) ? a : b;
}
Vecteur3D& Vecteur3D::normauxParReference(Vecteur3D& a, Vecteur3D& b) const {
    return (a.norme() > b.norme()) ? a : b;
}
Vecteur3D* Vecteur3D::normauxParPointeur(Vecteur3D* a, Vecteur3D* b) const {
    return (a->norme() > b->norme()) ? a : b;
}
//destructor
Vecteur3D:: ~Vecteur3D(){}
