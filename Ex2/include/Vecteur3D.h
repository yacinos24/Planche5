#ifndef VECTEUR3D_H
#define VECTEUR3D_H


class Vecteur3D
{
    public:
        //constructor
        Vecteur3D();
        Vecteur3D(float x,float y,float z);
        //getters
        float getX();
        float getY();
        float getZ();
        //methods
        void afficher() const;
        Vecteur3D somme(Vecteur3D a,Vecteur3D b)const;
        float prod(Vecteur3D a,Vecteur3D b)const;
        bool coincide(Vecteur3D a,Vecteur3D b)const;
        float norme()const;
        Vecteur3D normauxParValeur(Vecteur3D a, Vecteur3D b) const;
        Vecteur3D& normauxParReference(Vecteur3D& a, Vecteur3D& b) const;
        Vecteur3D* normauxParPointeur(Vecteur3D* a, Vecteur3D* b) const;
        //destructor
        virtual ~Vecteur3D();



    protected:

    private:
        float x,y,z;
};

#endif // VECTEUR3D_H
