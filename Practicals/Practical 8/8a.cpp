#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float percent;
    cout << "Enter your percentage: ";
    cin >> percent;
    try
    {
        if (percent < 0 || percent > 100)
            throw(percent);
        else
            cout << endl
                 << "Your percentage: " << percent;
    }
    catch (int p)
    {
        cout << endl
             << "Invalid percentage: " << p;
    }
    getch();
    return 0;
}