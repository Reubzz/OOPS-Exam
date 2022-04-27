#include <iostream.h>
#include <conio.h>
class base
{
    int n;

public:
    void get()
    {
        cout << "\nEnter value for n:";
        cin >> n;
    }
    void show()
    {
        cout << "\n\t\tN=" << n;
    }
};
class derived : public base
{
    int b;

public:
    void get()
    {
        base::get();
        cout << "\nEnter value for b: ";
        cin >> b;
    }
};
void main()
{
    clrscr();
    derived d1;
    d1.get();
    d1.show();
    getch();
}