#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream monFlux;
    monFlux.open("/c/scores.txt");
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