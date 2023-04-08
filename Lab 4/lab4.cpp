#include <iostream>
using namespace std;

class Quadrilateral{
private:
    int x;
    int y;
public:
    void set_values(int a, int b){
        x=a;
        y=b;
    }
    int area(){
        return x*y;
    }

    };

int main(){
    Quadrilateral square, rectangle;
    square.set_values(10,10);
    rectangle.set_values(5,10);

    cout <<"\t\t\t\t\tThe area of square is " << square.area() << endl;
    cout <<"\t\t\t\t\tThe area of rectangle is " << rectangle.area() <<endl;

return 0;
}
