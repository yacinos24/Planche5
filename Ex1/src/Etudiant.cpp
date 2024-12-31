#include "Etudiant.h"
#include <string>
#include <iostream>

using namespace std;
int Etudiant::sMatricule=0;
//constructeurs
Etudiant::Etudiant(){
    this->matricule=sMatricule++;
    this->nbrNotes=0;
    this->nom="";
    this->tabNotes=nullptr;
}
Etudiant::Etudiant(int nbrnotes,string nom){
    this->matricule=sMatricule++;
    this->nbrNotes=nbrnotes;
    this->nom=nom;
    this->tabNotes=nullptr;
    }
Etudiant::Etudiant (const Etudiant &et){
    this->matricule=sMatricule++;
    this->nbrNotes=et.nbrNotes;
    this->nom=et.nom;
    this->tabNotes=et.tabNotes;
}

//getters
int Etudiant::getMatricule()const {return this->matricule;}
string Etudiant::getNom()const{return this->nom;}
int Etudiant::getNbrNotes()const{return this->nbrNotes;}
double * Etudiant::getNotes()const{return this->tabNotes;}
//setters
void Etudiant::setNom(string nom){this->nom=nom;}
void Etudiant::setNbrNotes(int nb){
    this->nbrNotes=nb;
}
void Etudiant::setTabNotes(double* tabNotes,int taille){
    this->tabNotes=tabNotes;
    this->nbrNotes=taille;
}
//methods
void Etudiant::saisie(){
    this->tabNotes=new double[this->nbrNotes];
    for (int i=0;i<nbrNotes;i++){
        cout<<"Donner le note numero "<<i+1<<" de l'etudiant "<<this->nom<<":";
        cin>>this->tabNotes[i];
    }
}
void Etudiant::affichage()const{
    cout<<"________________________L'etudiant "<<this->nom<<" ________________________"<<endl;
    cout<<"Matricule: "<<this->matricule<<endl;
    cout<<"Nom: "<<this->nom<<endl;
    cout<<"Nombre de matières: "<<this->nbrNotes<<endl;
    if (this->tabNotes==nullptr){
        cout<<"Le tableau des notes est vide, rien a afficher"<<endl;
    }
    else{
        for (int i=0;i<this->nbrNotes;i++){
            cout<<"Note numero "<<i+1<<" est "<<this->tabNotes[i]<<endl;
        }
    }
    cout<<"______________________________***______________________________"<<endl;
}
float Etudiant::moyenne()const{
    if ((this->nbrNotes==0)||(this->tabNotes==nullptr)){
        cout<<"Le tableau des notes est vide. Impossible de calculer la moyenne";
        return 0;
    }
    else{
        int moy=0;
        for (int i=0;i<nbrNotes;i++){
            moy=moy+tabNotes[i];
        }
        return ((float)(moy/nbrNotes));
    }
}
bool Etudiant::admis()const{
    return ((this->moyenne())>=10);

}
bool Etudiant::comparer(const Etudiant& et1,const Etudiant& et2){
    return (et1.moyenne()==et2.moyenne());
}
//deconstructeur
Etudiant::~Etudiant(){
    delete[] tabNotes;
}
