#include<iostream>
#include<cmath>
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

double distance(int xa, int ya, int xb, int yb) {
    return sqrt(pow((xb-xa), 2) + pow((yb-ya), 2));
}


TEST(Ex3, TestDistance) {
  EXPECT_EQ(distance(5, 1, 1, 1), 4);
}


TEST(Ex3, TestDistanceCornerCase) {
  EXPECT_EQ(distance(1, 1, 1, 1), 0);
}