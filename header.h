#include <iostream>
using namespace std;
class Vehicule
{
private:
    string marque;
    string modele;
    int cylindree;
    string matricule;
    float prix;
public:
    void afficher();
    void saisir();
     Vehicule (string,string,int,string,float);

};

Vehicule::Vehicule(string ma,string mo,int cyl,string mat,float pr)
{
    marque = ma;
    modele = mo;
    cylindree = cyl;
    matricule = mat;
    prix = pr;
}

void Vehicule::afficher()
{
cout << "les caracteristiques de la voiture sont les suivantes :\n";
cout << marque<<"\t";
cout << modele<<"\t";
cout << cylindree<<"\t";
cout << matricule<<"\t";
cout << prix<<"\t\n";
}

void Vehicule::saisir()
{
    cout << "marque ?";
    cin >> marque;
    cout <<"modele?";
    cin >> modele;
    cout<<"cylindree";
    cin >> cylindree;
    cout <<"matricule?";
    cin >> matricule;
    cout<< "prix?";
    cin>>prix;
}
