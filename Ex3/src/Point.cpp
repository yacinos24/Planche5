#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;
//constructors
Point::Point() : x(0), y(0) {}
Point::Point(double x1, double y1) : x(x1), y(y1) {}
Point::Point( const Point& p) : x(p.x), y(p.y) {}

//methods
void Point::affiche() {
    cout << "(" << x << "," << y << ")" << endl;
}

bool Point::comparer( Point& p1,  Point& p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}

double Point::distance( Point& p1,  Point& p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

Point Point::milieu( Point& p1, Point& p2) {
    return Point((p1.x + p2.x) / 2, (p1.y + p2.y) / 2);
}

Point::~Point() {
    // dtor
}
