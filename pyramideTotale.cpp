#include <iostream>
using namespace std;

int n;             // n c'est le nombre de lignes
int p = 1;
int v = 0;

int main() {
    cout << "Pour dessiner un pyramide "<< endl;
    cout << "Entrer un nombre entier max = 40 " << endl;
    cin >> n ;


    for(int i = 0; i < n ; i++){       // boucle globale trassage de lignes du pyramide

            for (int j =  n ; j > v ; j--){        // boucle en décrémentation pour l'espace agauche du pyramide
                cout << " ";
            }

            v++;


            for (int k = 0 ; k < p ; k++){        // boucle en incrémentation pour les "*" du pyramide
                cout << "*";
            }

            p = p + 2;


            cout << endl;
    }

return 0;
}
