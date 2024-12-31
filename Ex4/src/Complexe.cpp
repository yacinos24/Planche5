#include "Complexe.h"
#include <iostream>
#include <math.h>
using namespace std;
//constructors
Complexe::Complexe()
{
    this->re=0;
    this->img=0;
}
Complexe::Complexe(double re, double img)
{
    this->re=re;
    this->img=img;
}
//getters
double Complexe::getRe(){return this->re;}
double Complexe::getImg(){return this->img;}
//methods
double Complexe::module(){return sqrt(pow(re,2)+img*img);}
Complexe Complexe::conjuge(){
        return Complexe(re,(-1)*img);
}
void Complexe::afficher(){
    if (img<0){
        cout<<re<<img<<"i"<<endl;
    }
    else{
        cout<<re<<"+"<<img<<"i"<<endl;
    }
    }
//deconstructor
Complexe::~Complexe()
{
    //dtor
}
//surchage "+"
Complexe operator+ (Complexe a,Complexe b){
    return Complexe(a.getRe()+b.getRe(),a.getImg()+b.getImg());
}
Complexe operator+ (double a,Complexe b){
    return Complexe(a+b.getRe(),b.getImg());
}
Complexe operator+ (Complexe b,double a){
    return Complexe(a+b.getRe(),b.getImg());
}
//surchage "-"
Complexe operator- (Complexe a,Complexe b){
    return Complexe(a.getRe()-b.getRe(),a.getImg()-b.getImg());
}
Complexe operator- (double a,Complexe b){
    return Complexe(a-b.getRe(),b.getImg());
}
Complexe operator- (Complexe b,double a){
    return Complexe(b.getRe()-a,b.getImg());
}
//surcharge "*"
Complexe operator* (Complexe a,Complexe b){
    double r,i;
    r=(a.getRe()*b.getRe())+(a.getImg()-b.getImg());
    i=(a.getRe()*b.getImg())+(b.getRe()*a.getImg());
    return Complexe(r,i);
}
Complexe operator* (Complexe b,double a){
    return Complexe(a*b.getRe(),a*b.getImg());
}
Complexe operator* (double a,Complexe b){
    return Complexe(a*b.getRe(),a*b.getImg());
}
