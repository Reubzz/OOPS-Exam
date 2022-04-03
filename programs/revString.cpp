// Write a program to reverse a string.

#include <iostream>
#include <conio.h>

using namespace std;

class String {
    string string;
    public:
    void getData(){
        cout << "Enter a String : ";
        cin >> string;
    }
    void reverse(){
        cout << "Reverse is : ";
        for( int i = string.length() - 1; i >= 0; i--){
            cout << string[i];
        }
    }
};
int main(){
    String s;
    s.getData();
    s.reverse();
    getch();
    return 0;
}