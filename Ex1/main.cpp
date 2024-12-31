#include <iostream>
#include <string>
using namespace std;
#include <Etudiant.h>
int main()
{
    Etudiant e1=Etudiant(3,"yassine");
    e1.saisie();
    e1.affichage();
    cout<<"La moyenne de "<<e1.getNom()<<" ayant la matricule "<<e1.getMatricule()<<" est: "<<e1.moyenne()<<"\t";
    cout<<e1.getNom()<<(e1.admis()?" admis! ":" redoublant:( ")<<endl;
    Etudiant e2=Etudiant(2,"jihed");
    e2.affichage();
    e2.setNbrNotes(4);
    e2.saisie();
    e2.affichage();
    cout<<"La moyenne de "<<e2.getNom()<<" ayant la matricule "<<e2.getMatricule()<<" est: "<<e2.moyenne()<<endl;
    cout<<e2.getNom()<<(e2.admis()?" admis! ":" redoublant:( ");
    Etudiant e3=Etudiant(e2);
    if (Etudiant.comparer(e1,e2)) {
        std::cout << "Les deux étudiants ont la même moyenne." << std::endl;
    }
    else {
        std::cout << "Les deux étudiants n'ont pas la même moyenne." << std::endl;
    }

    //delete &e1,&e2,&e3;
    return 0;
}
