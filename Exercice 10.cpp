#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const nomFichier("/c/scores.txt");
    ofstream monFlux(nomFichier.c_str());
    if(monFlux)
    {
        //Les instructions seront situés ici pour l'utiliser ce fichier.
    }
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}