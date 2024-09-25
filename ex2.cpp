#include <iostream>
using namespace std; 

int main() {
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
    
    cout << "Table de multiplication de: " << n << endl;
    for (int i = 10; i >= 0; i--)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    
    return 0;

}
