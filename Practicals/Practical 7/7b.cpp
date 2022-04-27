#include <iostream>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;
int main()
{
    string str = "Hello, Its going to reverse";
    reverse(str.begin(), str.end());
    cout << str;
    string s1 = "Reuben";
    string s2 = "George";
    if (s1 < s2)
        cout << endl
             << s1 << " comes before " << s2;
    else
        cout << endl
             << s2 << " comes before " << s1;
    getch();
    return 0;
}
