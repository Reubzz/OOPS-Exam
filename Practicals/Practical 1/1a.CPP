#include <iostream>
#include <conio.h>
class employee
{
    char name[20];
    int age;
    float basic_sal;
    void getInfo()
    {
        cout << endl << "Enter name: ";
        cin >> name;
        cout << endl << "Enter age: ";
        cin >> age;
        cout << endl << "Enter basic salary: ";
        cin >> basic_sal;
    }

public:
    void displayInfo()
    {
        getInfo();
        cout << endl << "\tEMPLOYEE INFORMATION\n";
        cout << "\t--------------------";
        cout << endl << " Name: " << name;
        cout << endl << " Age: " << age;
        cout << endl << " Basic Salary: " << basic_sal;
        cout << endl << " Gross Salary: " << basic_sal + (0.6 * basic_sal) + (0.4 * basic_sal);
    }
};
void main()
{
    clrscr();
    employee e;
    e.displayInfo();
    getch();
}
