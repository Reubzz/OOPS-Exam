// Design an employee class for reading and displaying the employee information, the getInfo() and displayInfo() methods will be used repectively. Where getInfo() will be private method

#include <iostream>
#include <conio.h>
using namespace std;

class Employee {
    public:
    char name[20];
    int age;
    float basic_sal;
    void getInfo(){
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter your Age: ";
        cin >> age;
        cout << "Enter your Basic Salary: ";
        cin >> basic_sal;
    }
    void displayInfo(){
        getInfo();
        cout << "\tEmployee Information" << endl;
        cout << "\t--------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Basic Salary: " << basic_sal << endl;
        cout << "Gross Salary: " << basic_sal + (0.4 * basic_sal) + (0.6 * basic_sal) << endl;
    }
};
int main(){
    Employee e;
    e.displayInfo();
    int a = 25;
    int* pa;
    pa = &a;
    cout << "a is : " << a << endl;
    cout << "a is : " << *pa << endl;
    cout << "a mem add is : " << &a << endl;
    cout << "a mem add is : " << pa << endl;
    getch();
    return 0;
}

