#include <iostream.h>
#include <conio.h>
template <class A>
void swap(A &a, A &b)
{
    A t = a;
    a = b;
    b = t;
};
void main()
{
    clrscr();
    int n, m;
    float f1, f2;
    char c, d;
    cout << endl
         << "Enter two integers: ";
    cin >> n >> m;
    cout << endl
         << "Enter two floats: ";
    cin >> f1 >> f2;
    cout << endl
         << "Enter two characters: ";
    cin >> c >> d;
    cout << endl
         << "Integers before swapping\n";
    cout << "------------------------";
    cout << endl
         << "N= " << n << "\tM= " << m;
    swap(n, m);
    cout << endl
         << "\nIntegers after swapping\n";
    cout << "-----------------------";
    cout << endl
         << "N= " << n << "\tM= " << m;
    cout << endl
         << "\nFloats before swapping\n";
    cout << "------------------------";
    cout << endl
         << "F1= " << f1 << "\tF2= " << f2;
    swap(f1, f2);
    cout << endl
         << "\nFloats after swapping\n";
    cout << "------------------------";
    cout << endl
         << "F1= " << f1 << "\tF2= " << f2;
    cout << endl
         << "\nCharacters before swapping\n";
    cout << "--------------------------";
    cout << endl
         << "C= " << c << "\tD= " << d;
    swap(c, d);
    cout << endl
         << "\nCharacters after swapping\n";
    cout << "-------------------------";
    cout << endl
         << "C= " << c << "\tD= " << d;
    getch();
}