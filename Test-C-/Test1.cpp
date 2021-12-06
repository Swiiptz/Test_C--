#include <iostream>
using namespace std;

int main()
{
    double a(0), b(0); // Déclaration des variables utiles

    cout << "Bienvenue dans le programme d'addition a+b !" << endl;

    cout << "Donnez une valeur pour a : "; // On demande le premier nombre
    cin >> a;

    cout << "Donnez une valeur pour b : "; // On demande le deuxième nombre
    cin >> b;
    //…
    double const resultat(a+b);

    cout << "La somme de a et b vaut " << resultat << endl;
    cout << "La société vous remercie de l'utilisation du logiciel " << endl;
    
    return 0;
}