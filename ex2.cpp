#include <iostream>
using namespace std; 

int main() {
    cout << "Entrez un entier positif: ";
    int n;
    cin >> n;
    cout << "Table de multiplication de: " << n << endl;
    for (int i = 10; i >= 0; i--)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    
    return 0;

}
