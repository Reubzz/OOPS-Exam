#include <iostream.h>
#include <conio.h>
class employee
{
    int emp_code, age;
    char name[30], qualification[30];

public:
    void get()
    {
        cout << "\nEnter employee id: ";
        cin >> emp_code;
        cout << "\nEnter employee name: ";
        cin >> name;
        cout << "\nEnter employee age: ";
        cin >> age;
        cout << "\nEnter employee qualification: ";
        cin >> qualification;
    }
    void show()
    {
        cout << "\n\nEmployee id: " << emp_code;
        cout << "\tName: " << name;
        cout << "\nAge: " << age << "\t\tQualification: " << qualification;
    }
};
class contract_employee : public employee
{
    int contract_id;

public:
    void get()
    {
        cout << "\nEnter contract_id: ";
        cin >> contract_id;
    }
    void show()
    {
        cout << "\nContract ID: " << contract_id;
    }
};
void main()
{
    clrscr();
    contract_employee ce;
    ce.get();
    ce.show();
    getch();
}
