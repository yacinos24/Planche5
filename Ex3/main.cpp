#include "Point.h"
#include <iostream>
using namespace std;

int main() {
    Point p1(3.0, 4.0);
    Point p2(6.0, 8.0);

    p1.affiche();
    p2.affiche();

    cout << "La distance entre p1 et p2 est : " << Point::distance(p1, p2) << endl;
    cout<<(Point::comparer(p1, p2)?"Les points p1 et p2 sont egaux." :"Les points p1 et p2 sont differents.")<< endl;
    Point pMilieu = Point::milieu(p1, p2);
    cout << "Le milieu de p1 et p2 est : ";
    pMilieu.affiche();

    return 0;
}
