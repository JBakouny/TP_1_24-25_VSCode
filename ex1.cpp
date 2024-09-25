#include<iostream>
using namespace std;

void afficher(double a, double b, double x, double y) {
    cout << "a = " << a << ", b = " << b << ", x = " << x << ", y = " << y << endl;
}

void echanger(double & a, double & b, double & x, double & y) {
    double tmp = a;
    a = x;
    x = tmp;

    tmp = b;
    b = y;
    y = tmp;
}

int main() {

    double a = 1.7;
    double b = 3.7;

    double x = 7.7;
    double y = 3.3;

    afficher(a, b, x, y);

    cout << "Appel de la fonction echanger(a, b, x, y) ..." << endl;
    echanger(a, b, x, y);

    afficher(a, b, x, y);
}
