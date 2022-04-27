#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
template <class A>
void str_cat(A &a, A &b)
{
    a = a + " ";
    a = a + b;
};
int main()
{
    string name("Reuben");
    string Surname("George");
    cout << endl
         << "First Name: " << name;
    cout << endl
         << "Surname: " << Surname;
    str_cat(name, Surname);
    cout << endl
         << "Full Name: " << name;
    getch();
    return 0;
}