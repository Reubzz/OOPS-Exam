#include <iostream.h>
#include <conio.h>
// Using abstract methods and classes.
class Figure
{
public:
    double dim1;
    double dim2;
    Figure(double a, double b)
    {
        dim1 = a;
        dim2 = b;
    }
    // pure virtual function
    virtual double area() = 0;
};
class Rectangle : public Figure
{
public:
    Rectangle(double a, double b) : Figure(a, b)
    {
    }
    // implement area for rectangle
    double area()
    {
        cout << "\nInside Area for Rectangle:";
        return dim1 * dim2;
    }
};
class Triangle : public Figure
{
public:
    Triangle(double a, double b) : Figure(a, b)
    {
    }
    // implement area for right triangle
    double area()
    {
        cout << "\nInside Area for Triangle:";
        return dim1 * dim2 / 2;
    }
};
void main()
{
    clrscr();
    Rectangle r(9, 5);
    Triangle t(10, 8);
    cout << r.area();
    cout << t.area();
    getch();
}
