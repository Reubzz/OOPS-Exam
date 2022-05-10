#include <iostream>
#include <conio.h>

using namespace std;

class abc {
    public:
    void print(){
        int i = 0;
        while (i < 3)
        {
            cout << "This Message will be Printed 3 times.\n";
            i++;
        }
    }
};
int main(){
    abc a;
    a.print();
    getch();
    return 0;
}