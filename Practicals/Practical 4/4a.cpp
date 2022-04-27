#include <iostream.h>
#include <conio.h>
class abc
{
    int a, b, c;

public:
    void get()
    {
        cout << "\nEnter three numbers: ";
        cin >> a >> b >> c;
    }
    void show()
    {
        cout << "\n\nA= " << a << "\tB= " << b << "\tC= " << c;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
};
void main()
{
    clrscr();
    abc a1;
    a1.get();
    cout << "\n\n Original contents";
    a1.show();
    -a1;
    cout << "\n\n After Negation";
    a1.show();
    getch();
}
