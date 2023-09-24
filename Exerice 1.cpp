#include <iostream>
#include <string>

using namespace std;
int main()

{
    string user ("lucien");
    user[0] = 'J'; //Modification de la premiere lettre
    user[2] = 'l'; //Modification de la troisieme lettre
    cout << "Vous etes : " << user << endl;
    return 0;
}