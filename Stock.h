
#include"include/Medicament.h"
class Stock {
Medicament *tab;
int taille;

public:
Stock(int t){taille=t;
tab=new Medicament[taille];
}
~Stock(){
delete[]tab;}
Stock(const Stock&b){taille=b.taille;

tab=new Medicament[taille];
for(int i=0;i<taille;i++)
     tab[i]=b.tab[i];
}
void ajouter (Medicament c){
int i;
tab[i]=c;
i=i+1;}

void afficher(){for(int i=0;i<taille;i++)
tab[i].afficher();
}
};
