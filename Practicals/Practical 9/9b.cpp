#include <iostream.h>
#include <conio.h>
#include <fstream.h>
void main()
{
    clrscr();
    ofstream fwrite("Alphabets.txt");
    fwrite << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    fwrite.close();
    ifstream fread("Alphabets.txt");
    ofstream fwrite1("Vowels.txt");
    ofstream fwrite2("Consonants.txt");
    char c;
    while (fread)
    {
        fread.get(c);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            fwrite1 << c;
        else
            fwrite2 << c;
    }
    fread.close();
    fwrite1.close();
    fwrite2.close();
    fread.open("Alphabets.txt");
    ifstream fread1("Vowels.txt");
    ifstream fread2("Consonants.txt");
    cout << "\n\nContents of Alphabets File\n";
    cout << "--------------------------\n";
    while (fread)
    {
        fread.get(c);
        cout << c;
    }
    fread.close();
    cout << "\n\nContents of Vowels File\n";
    cout << "-----------------------\n";
    while (fread1)
    {
        fread1.get(c);
        cout << c;
    }
    fread1.close();
    cout << "\n\nContents of Consonants File\n";
    cout << "---------------------------\n";
    while (fread2)
    {
        fread2.get(c);
        cout << c;
    }
    fread2.close();
    getch();
}
