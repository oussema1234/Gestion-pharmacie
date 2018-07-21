#include <iostream>
#include <string.h>
#include"Stock.h"
using namespace std ;
int main()
{
    int x;

    int i;
    int n;
    double s=0;
    string rep;
    int t[30];
    Medicament tab[30];
    cout<<"donnez le nombre de medicaments"<<endl;
    cin>>n;
    for (i=0;i<n;i++)
    {tab[i].ajouter();
    t[i]=tab[i].quantite();}

        do
        {
        cout<<"Tapez 0 pour Quitter"<<endl;
        cout<<"Tapez 1 pour Ajouter un medicament"<<endl;
        cout<<"Tapez 2 pour Modifier un medicament existant"<<endl;
        cout<<"Tapez 3 pour Calculer le chiffre d'affaire par jour"<<endl;
        cout<<"Tapez 4 pour Afficher les statistiques d un medicament donnee"<<endl;
        cout<<"Tapez 5 pour Rechercher un medicament et consulter son etat en stock"<<endl;
        cout<<"Tapez 6 pour Afficher la liste des medicaments disponible"<<endl;

            do
            {
                cout<<"Tapez votre choix svp"<<endl;
                cin>>x;
            } while(x>6 || x<0);
            if (x==1)
            {
              cout<<"ajouter un element"<<endl;

              tab[n].ajouter();
              n=n+1;
            }
            else
                if (x==2)
            {
                cout<<"donnez le titre de medicament a modifie"<<endl;
                cin>>rep;
                for(i=0;i<n;i++)
                  {if(tab[i].tester(rep))
                    {tab[i].ajouter();
                     cout<<"le medicament "<<rep<<"a ete modifie"<<endl;}
                     }
            }
                     else
                        if (x==3)
                     {for (i=0;i<n;i++)
                      s+=(tab[i].calculer() * tab[i].stat(t[i]));
                      cout<<"le chiffre d'affaire d aujourdhui : "<<s<<endl;
                     }
                     else
                        if (x==4)
                     {
                          cout<<"donnez le titre de medicament "<<endl;
                         cin>>rep;
                         for (i=0;i<n;i++)
                           { if (tab[i].getT()==rep)
                             {tab[i].afficher();
                              cout<<tab[i].stat(t[i])<<" packets vendu"<<endl;}
    }
                     }
                     else
                        if (x==5)
                     {
                            cout<<"donnez le titre de medicament a chercher";
                            cin>>rep;
                            for (i=0;i<n;i++)
                             tab[i].rechercher(rep);
                     }
                     else
                        if (x==6)
                     {cout<<"la liste de medicaments disponnible"<<endl;
                       for(i=0;i<n;i++)
                        tab[i].afficher();
                     }

        } while (x!=0);
    cout<<"vous avez Quittez l application"<<endl;
    return 0;
}
