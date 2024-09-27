#include<iostream>
#include<string>
using namespace std;

void saisirPoint(const string & nom, int &x, int &y) {
    cout << "Coordonnées de " << nom << ":" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
}

double vabs(double x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

double racine(double x) {
    double res = 1;
    while(vabs((res * res - x)/x) > 1e-3) {
        res = (res + (x / res))/2;
    }
    return res;
}

double distance(int xa, int ya, int xb, int yb) {
    return racine((xb-xa) * (xb-xa) + (yb-ya) * (yb-ya));
}

int main() {
    int xa, ya, xb, yb;
    saisirPoint("A", xa, ya);
    saisirPoint("B", xb, yb);
    cout << "AB = " << distance(xa, ya, xb, yb) << endl;
}
