#ifndef POINT_H
#define POINT_H

class Point
{
public:
    //constructors
    Point();
    Point(double x1, double y1);
    Point(const Point& p);
    //methods
    void affiche();
    static bool comparer( Point& p1,  Point& p2);
    static double distance( Point& p1,  Point& p2);
    static Point milieu(Point& p1, Point& p2);
    //deconstructor
    virtual ~Point();

protected:
private:
    double x;
    double y;
};

#endif // POINT_H
