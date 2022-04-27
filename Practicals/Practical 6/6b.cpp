#include <iostream.h>
#include <conio.h>
class base
{
public:
    virtual void display()
    {
        cout << "\nDisplay of base class called";
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "\nDisplay of derived class called";
    }
};
void main()
{
    clrscr();
    base *b;
    derived d;
    b = &d;
    b->display();
    getch();
}
