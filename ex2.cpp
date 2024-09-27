#include <iostream>
using namespace std;

int saisir(int inf, int sup) {
    int res;
    bool borneInf;
    bool borneSup;
    do {
        cout << "Entrez un entier superieur a "<<inf<<" et inférieur à "<<sup<<": ";
        cin >> res;
        borneInf = res <= inf;
        borneSup = res >= sup; 
        if (borneInf) {
            cout << "Votre nombre est inférieur ou égual à "<<inf<<" !" << endl;
        }
        if (borneSup) {
            cout << "Votre nombre est supérieur ou égual à "<<sup<<" !" << endl;
        }
    } while (borneInf || borneSup);
    return res;
}

int main_ex2() {
    cout << "Entrez l'entier pour lequel vous vouliez afficher la table de multiplication:" << endl;
    int n = saisir(0,70);
    cout << "Entrez la borne supérieur de cette table de multiplication:" << endl;
    int tableBorneSup = saisir(8,30);
    cout << "Entrez la borne inférieur de cette table de multiplication:" << endl;
    int tableBorneInf = saisir(0,8);
    cout << "Entrez le pas de cette table de multiplication:" << endl;
    int pas = saisir(0,5);

    cout << "Table de multiplication de: " << n << endl;
    for (int i = tableBorneSup; i >= tableBorneInf; i-=pas)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
