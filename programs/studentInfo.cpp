#include <iostream>
#include <conio.h>

using namespace std;

class student
{
    char name[20];
    int age;
    float percentage;
    void getData()
    {
        cout << endl << "Enter name: ";
        cin >> name;
        cout << endl << "Enter age: ";
        cin >> age;
        cout << endl << "Enter percentage: ";
        cin >> percentage;
    }

public:
    void displayData()
    {
        getData();
        cout << endl << "\tSTUDENT INFORMATION\n";
        cout << "\t-------------------";
        cout << endl << " Name: " << name;
        cout << endl << " Age: " << age;
        cout << endl << " Percentage: " << percentage;
    }
};
int main()
{
    student s;
    s.displayData();
    getch();
}