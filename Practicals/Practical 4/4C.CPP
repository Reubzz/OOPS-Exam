#include <iostream.h>
#include <conio.h>
#include <string.h>
class string
{
    char str[60];

public:
    void get()
    {
	cout << "\n\tEnter a string: ";
	cin >> str;
    }
    void show()
    {
	cout << "\n\t"
	     << str << "\n";
    }
    string operator+(string s2)
    {
	string s3;
	strcpy(s3.str, str);
	strcat(s3.str, s2.str);
	return s3;
    }
};
void main()
{
    clrscr();
    string s1, s2, s3;
    s1.get();
    s2.get();
    cout << "\nString 1";
    s1.show();
    cout << "\nString 2";
    s2.show();
    cout << "\nAfter concatenation String 3";
    s3 = s1 + s2;
    s3.show();
    getch();
}
