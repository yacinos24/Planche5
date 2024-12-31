#include "Cercle.h"
#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;

///cercle
Cercle::Cercle()
{
    this->c=Point();
    this->rayon=0;
}
Cercle::Cercle(Point p,double rayon){
    this->c=p;
    this->rayon=rayon;
}
Cercle::Cercle(double x1, double y1,double rayon){
    this->c=Point(x1,y1);
    this->rayon=rayon;
}
//getters
double Cercle::getRayon(){return this->rayon;}
Point Cercle::getCentre(){return this->c;}
//setters
void Cercle::setRayon(double r){this->rayon=r;}
void Cercle::setCentre(Point c){this->c=c;}
//methods
void Cercle::affiche(){
    cout<<"les caracteristiques du cercle[";
    this->c.affiche();
    cout<<","<<this->rayon<<"]";
}
double Cercle::calculSurface(){
    return (M_PI * this->rayon * this->rayon);
}
double Cercle::calculPerimeter(){
    return 2 * M_PI * this->rayon;
}
bool Cercle::egalite(Cercle c){
    if (Point::comparer(this->c,c.c) && c.rayon==this->rayon){
        return true;
    }
    return false;
}
bool Cercle::verifAppartient(Point p){
    double distanceCarre = pow(p.getX() - this->c.getX(), 2) + pow(p.getY() - this->c.getY(), 2);
    double rayonCarre = pow(rayon, 2);
    return (distanceCarre<=rayonCarre);
}
//deconstructor
Cercle::~Cercle()
{
    //dtor
}
