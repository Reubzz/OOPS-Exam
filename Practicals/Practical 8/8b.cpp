#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string s;
    cout << "Enter the name of your course: ";
    cin >> s;
    try
    {
        if (s == "B.Sc - IT" || s == "BMS" || s == "B.Com")
            cout << endl
                 << "Your have chosen Course: " << s;
        else
            throw(s);
    }
    catch (string ss)
    {
        cout << endl << "Oh!!!!!!!!! you have chosen the course that we don't provide: " << ss;
    }
    getch();
    return 0;
}
