#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
    string str1 = "Reuben";
    string str2 = "George";
    cout << endl
	 << "Length of " << str1 << ": " << str1.length();
    string str3 = str1 + str2;
    cout << endl
	 << str3;
     getch();
     return 0;
}
