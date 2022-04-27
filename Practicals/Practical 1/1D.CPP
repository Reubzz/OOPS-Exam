#include <iostream.h>
#include <conio.h>
class Student
{
     int roll_no;
     char name[30];
     float percentage;

public:
     void getdata();
     void show();
};
void Student::getdata()
{
     cout << "Enter Roll No: ";
     cin >> roll_no;
     cout << endl << "Enter name: ";
     cin >> name;
     cout << endl << "Enter Percentage: ";
     cin >> percentage;
}
void Student::show()
{
     cout << endl << "Roll No: " << roll_no;
     cout << endl << "Name: " << name;
     cout << endl << "Percentage: " << percentage;
}
void main()
{
     clrscr();
     Student studObj;
     studObj.getdata();
     studObj.show();
     getch();
}
