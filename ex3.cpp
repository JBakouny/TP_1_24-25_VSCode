#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void saisirPoint(const string & nom, int &x, int &y) {
    cout << "Coordonnées de " << nom << ":" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
}

double distance(int xa, int ya, int xb, int yb) {
    return sqrt(pow((xb-xa), 2) + pow((yb-ya), 2));
}

int main() {
    int xa, ya, xb, yb;
    saisirPoint("A", xa, ya);
    saisirPoint("B", xb, yb);
    cout << "AB = " << distance(xa, ya, xb, yb) << endl;
}
