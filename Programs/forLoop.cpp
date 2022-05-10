#include <iostream>
#include <conio.h>

using namespace std;

class abc {
    public:
    void print(){
        for(int i = 0; i < 5; i++){
            cout << "This message will be printed 5 times.";
        }
    }
};
int main(){
    abc a;
    a.print();
    getch();
    return 0;
}