#include <iostream>
#include <conio.h>

using namespace std;

class add {
    public:
    int a, b;
    void getData(){
        cout << "Enter 1st Number : ";
        cin >> a;
        cout << "Enter 2nd Number : ";
        cin >> b;
    }
    void addition(){
        getData();
        cout << "Addition of "<<a<<" and "<<b<<" is " << a+b;
    }
};
int main(){
    add a;
    a.addition();
    getch();
    return 0;
}