/*
    Copy constructors are member functions that initializes objects
    using another object of the same class. A copy constructor's
    prototype is

        ClassName (const ClassName &old_obj);
*/
#include <iostream>

class Point
{
private:

    int x, y;

public:
    Point(const int xx, int yy) { x = xx; y = yy; }

    // Copy constructor
    Point(const Point& p2)
    {
        std::cout << "Copied." << std::endl;
        x = p2.x;
        y = p2.y;
    }

    int getX() { return x; }
    int getY() { return y; }
};


int main()
{
    // Normal constructor called with temporary objects.
    Point p1(10, 15);

    // Copy constructor called, object p1 is copied into p2.
    // Prints "copied."
    Point p2(p1);

    std::cout << "p1.x =\t" << p1.getX() << "\tp1.y =\t" << p1.getY() << std::endl;
    std::cout << "p2.x =\t" << p2.getX() << "\tp2.y =\t" << p2.getY() << "\n\n";

    // Manipulate original.
    int y = p1.getX() + 1;
    std::cout << "p1.x =\t" << y << "\tp1.y =\t" << p1.getY() << std::endl;

    // Manipulate copy.
    int x = p2.getX() + 1;
    std::cout << "p2.x =\t" << x << "\tp2.y =\t" << p2.getY() << "\n\n";


    return 0;
}
