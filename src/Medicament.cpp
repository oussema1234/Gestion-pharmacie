#include "../include/Medicament.h"



void Medicament::ajouter ()
{
cout<<" entrez le titre ";
cin>>titre;
cout<<" entrez la reference ";
cin>>refr;
cout<<"entrez le prix ";
cin>>prix;
cout<<"entrez la quantite en stock ";
cin>>qt;
}
int Medicament::quantite ()
{
    return(qt);
}
string Medicament::getT()
{
    return(titre);
}
int Medicament::stat(int x)
{
    return(x-qt);
}

double Medicament::calculer ()
{
return(prix);
}
bool Medicament::tester(string a)
{
    if (titre==a)
        return(true);
        else
            return(false);
}
void Medicament::rechercher (string a)
{
if (titre==a && qt!=0)
    cout<<"le medicament"<<a<<" est disponnible"<<endl;
else
    cout<<"le medicament"<<a<<" nest pas disponnible"<<endl;
}
void Medicament::afficher ()
{
  cout<<"le titre : "<<titre<<   " | " <<"la refrence : "<< refr  << " | " <<"le prix : "<< prix  << " | " <<"la quantite : "<< qt<<endl;
}

Medicament::~Medicament()
{
    cout<<"objet detruit"<<endl;
}


