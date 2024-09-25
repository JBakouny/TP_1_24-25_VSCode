#include <iostream>
using namespace std; 

int main() {
    int n;
    do {
        cout << "Entrez un entier positif: ";
        cin >> n;
    } while (n <= 0);
    cout << "Table de multiplication de: " << n << endl;
    for (int i = 10; i >= 0; i--)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    
    return 0;

}
