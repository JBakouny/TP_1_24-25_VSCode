#include <iostream>
using namespace std; 

int main() {
    cout << "Entrez l'entier pour lequel vous vouliez afficher la table de multiplication:" << endl;
    int n;
    bool borneInf;
    bool borneSup;
    do {
        cout << "Entrez un entier positif inférieur à 70: ";
        cin >> n;
        borneInf = n <= 0;
        borneSup = n >= 70; 
        if (borneInf) {
            cout << "Votre nombre est inférieur ou égual à 0 !" << endl;
        }
        if (borneSup) {
            cout << "Votre nombre est supérieur ou égual à 70 !" << endl;
        }
    } while (borneInf || borneSup);
    
    cout << "Entrez la borne supérieur de cette table de multiplication:" << endl;
    int tableBorneSup;
    do {
        cout << "Entrez un entier superieur a 8 et inférieur à 30: ";
        cin >> tableBorneSup;
        borneInf = tableBorneSup <= 8;
        borneSup = tableBorneSup >= 30; 
        if (borneInf) {
            cout << "Votre nombre est inférieur ou égual à 8 !" << endl;
        }
        if (borneSup) {
            cout << "Votre nombre est supérieur ou égual à 30 !" << endl;
        }
    } while (borneInf || borneSup);


    cout << "Table de multiplication de: " << n << endl;
    for (int i = tableBorneSup; i >= 0; i--)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    
    return 0;

}
