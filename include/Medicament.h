#include <iostream>
#include <string.h>
using namespace std;
class Medicament
{
private:
    string titre, refr;
    double prix;
    int qt;
    public:
public:
        void ajouter ();
        bool tester (string);
        double calculer ();
        void rechercher (string);
        void afficher ();
        int quantite ();
        string getT();
        int stat(int);
        ~Medicament();

};

