#include <iostream>
#include "Vecteur3D.h"
using namespace std;

int main() {
    Vecteur3D v1(1, 2, 3);
    Vecteur3D v2(4, 5, 6);
    Vecteur3D v3;

    cout<<"Vecteur v1: ";
    v1.afficher();
    cout<<"Vecteur v2: ";
    v2.afficher();

    v3=v3.somme(v1, v2);
    cout<<"La somme de v1 et v2: ";
    v3.afficher();

    float product=v3.prod(v1,v2);
    cout<<"Produit de v1 et v2: "<<product<<endl;

    cout<<"Est ce que v1 et v2 coincides? ";
    cout<<(v3.coincide(v1,v2)? "Oui" : "Non")<<endl;

    cout<<"Norme de v1: "<<v1.norme()<<endl;

    //NormauxParValeur
    Vecteur3D a = v3.normauxParValeur(v1, v2);
    cout << "Normaux par valeur: ";
    a.afficher();

    //NormauxParReference
    Vecteur3D& b = v3.normauxParReference(v1, v2);
    cout << "Normaux par reference: ";
    b.afficher();

    // Using normauxParPointeur
    Vecteur3D* c = v3.normauxParPointeur(&v1, &v2);
    cout << "Normaux par pointeur: ";
    c->afficher();

    return 0;
}

