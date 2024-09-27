#include<iostream>
#include<string>
#include <gtest/gtest.h>
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


TEST(Ex3, TestDistance) {
    double actual = distance(5, 1, 1, 1);
    double expected = 4;
    EXPECT_LT(vabs((actual - expected)/expected), 1e-3);
}


TEST(Ex3, TestDistanceCornerCase) {
    EXPECT_LT(distance(1, 1, 1, 1), 0.1);
}