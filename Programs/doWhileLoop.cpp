#include <iostream>
#include <conio.h>

using namespace std;

class abc {
    public:
    void print(){
        int i = 0;
        do {
            cout << "This message will be Printed 6 times.\n";
            i++;
        } while (i < 6);
    }
};
int main(){
    abc a;
    a.print();
    getch();
    return 0;
}