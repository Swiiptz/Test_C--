#include <iostream>

using namespace std;

int main()
{
    int nbEnfants;
    cout << "Nombre d'enfant ?" <<  endl;
    cin >> nbEnfants;

    if (nbEnfants>0)
    {
        cout << "Oh, Vous avez de enfants !" << endl;

    }
    else
    {
        cout << "Eh bien, vous n'avez pas d'enfants !" << endl;
    }
    cout << "Le programme est fini" << endl;
    return 0;
}