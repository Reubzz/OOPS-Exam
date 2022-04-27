#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    char c[] = "Sanjeela Sagar";
    cout.write(c, 13).put('\n'); // put('\n')is used in place of endl
    char ch[] = "A";
    cout << "ch = ";
    cout.write(ch, 1) << endl; // writes one byte of ch.
    char s[] = "ABCDEFGHIJC";
    cout.write(s, 5) << endl; // writes 5 bytes from string s
    char name[15];
    cout << "Enter a name: ";
    cin.read(name, 15);           // reads 15 bytes from name
    cout.write(name, 15) << endl; // writes 15 bytes from Name
    getch();
}