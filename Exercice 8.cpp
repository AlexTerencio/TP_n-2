#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const nomFichier("/c/scores.txt"); //Essayer d'ouvrir un fichier non existant
    ifstream monFlux(nomFichier.c_str());
    if(monFlux)
    {
        cout << "Pas de souci lors de l'ouverture du fichier." << endl;
        //Les instructions seront situés ici pour modifier ce fichier.
    }
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}