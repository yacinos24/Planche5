#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>

using namespace std;
class Etudiant
{
    public:
        //constructors
        Etudiant();
        Etudiant(int nbrNotes,string nom);
        Etudiant (const Etudiant &et);
        //getters
        int getMatricule()const;
        string getNom()const;
        int getNbrNotes()const;
        double * getNotes()const;
        //setters
        void setNom(string nom);
        void setNbrNotes(int nb);
        void setTabNotes(double* tabNotes,int taille);
        //methods
        void saisie();
        void affichage()const;
        float moyenne()const;
        bool admis()const;
        static bool comparer(const Etudiant& et1,const Etudiant& et2);

        //deconstructors
        virtual ~Etudiant();


    protected:

    private:
        static int sMatricule;
        int matricule;
        string nom;
        int nbrNotes;
        double *tabNotes;

};
#endif // ETUDIANT_H
