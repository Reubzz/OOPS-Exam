#include <iostream.h>
#include <conio.h>
class person
{
    char name[30];
    int age;

public:
    void getdata()
    {
        cout << "\nEnter name and age: ";
        cin >> name >> age;
    }
    void showdata()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};
class student : public person
{
    int marks;

public:
    void get()
    {
        getdata();
        cout << "\nEnter marks: ";
        cin >> marks;
    }
    void show()
    {
        showdata();
        cout << "\nMarks: " << marks;
    }
};
class employee : public person
{
    char design[30];

public:
    void get()
    {
        getdata();
        cout << "\nEnter designation: ";
        cin >> design;
    }
    void show()
    {
        showdata();
        cout << "\nDesignation: " << design;
    }
};
void main()
{
    clrscr();
    student s;
    employee e;
    cout << "\nEnter student's data";
    s.get();
    cout << "\nEnter employee's data";
    e.get();
    cout << "\n\nstudent's Data";
    s.show();
    cout << "\n\nEmployee's Data";
    e.show();
    getch();
}
