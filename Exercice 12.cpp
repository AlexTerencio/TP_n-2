#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream monFlux;
    monFlux.open("/c/scores.txt");
    if(monFlux)
    {
        int position = monFlux.tellp();
        cout << "Nous nous situons au " << position << " eme caractere du fichier." << endl;
    }
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}