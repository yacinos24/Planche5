#ifndef COMPLEXE_H
#define COMPLEXE_H


class Complexe
{
    public:
        //constructors
        Complexe();
        Complexe(double re, double img);
        //getters
        double getRe();
        double getImg();
        //class methods
        double module();
        Complexe conjuge();
        void afficher();
        //deconstructor
        virtual ~Complexe();
    protected:

    private:
        double re,img;

};
Complexe operator+ (Complexe a,Complexe b);
Complexe operator+ (double a,Complexe b);
Complexe operator+ (Complexe a,double b);

Complexe operator*(Complexe,Complexe);
Complexe operator* (double,Complexe);
Complexe operator* (Complexe,double);

Complexe operator-(Complexe,Complexe);
Complexe operator- (double,Complexe);
Complexe operator- (Complexe,double);
#endif // COMPLEXE_H
