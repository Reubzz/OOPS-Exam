// Write a Program to check whether the entered number is a Leap Year or not. Using C++ Classes.

#include <iostream>
#include <conio.h>

using namespace std;

class year
{
    int a;

    public:
    void getYear(){
        cout << "Enter a year : ";
        cin >> a;
    }
    void show(){
        if (a % 4 == 0){
            cout << "It is a Leap Year";
        } else {
            cout << "It is not a Leap Year";
        }
    }
};

int main(){
    year y1;
    y1.getYear();
    y1.show();
    getch();
    return 0;
}