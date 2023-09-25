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
        string ligne; // on crée une variable pour stocker les lignes
        while(getline(monFlux,ligne))
        cout << ligne << endl;
    }
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}