#include <iostream>
using namespace std;

class CPolygon{
protected:
    int width, height;
public:
    void set_values (int a, int b)
    { width=a; height=b;}
};

class CRectangle: public CPolygon {
public:
    int area ()
    { return (width * height); }
};

class CTriangle: public CPolygon {
public:
    int area ()
    { return (width * height / 2); }
};

int main(){
    CRectangle rectangle;
    CTriangle triangle;
    rectangle.set_values(10,5);
    triangle.set_values(10,5);
    cout << "Area of rectangle = " << rectangle.area() << endl;
    cout << "Area of tringle = " << triangle.area() << endl;

}
