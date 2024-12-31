#ifndef CERCLE_H
#define CERCLE_H
#include "Point.h"

class Cercle
{
    public:
        Cercle();
        Cercle(Point p,double rayon);
        Cercle(double x1, double y1,double rayon);
        //getters
        double getRayon();
        Point getCentre();
        //setters
        void setRayon(double r);
        void setCentre(Point c);
        //methods
        void affiche();
        double calculSurface();
        double calculPerimeter();
        bool egalite(Cercle c);
        bool verifAppartient(Point p);
        //deconstructor
        virtual ~Cercle();
    protected:

    private:
        Point c;
        double rayon;
};

#endif // CERCLE_H
