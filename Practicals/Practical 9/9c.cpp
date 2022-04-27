#include <iostream.h>
#include <conio.h>
#include <fstream.h>
class student
{
    char name[30];
    int age;
    float percent;

public:
    void getdata()
    {
        cout << endl
             << "Enter name: ";
        cin >> name;
        cout << endl
             << "Enter age: ";
        cin >> age;
        cout << endl
             << "Enter percentage: ";
        cin >> percent;
    }
    void showdata()
    {
        cout << endl
             << name;
        cout << "\t\t" << age;
        cout << "\t\t" << percent;
    }
};
void main()
{
    clrscr();
    student st;
    fstream freadwrite("Student.txt", ios::ate | ios::in | ios::out);
    freadwrite.seekg(0, ios::beg);
    cout << endl
         << "Current contents of file";
    while (freadwrite.read((char *)&st, sizeof(st)))
        st.showdata();
    freadwrite.clear();
    cout << endl
         << "Enter details for one more student";
    st.getdata();
    char c;
    cin.get(c);
    freadwrite.write((char *)&st, sizeof(st));
    freadwrite.seekg(0);
    cout << endl
         << "After addition of one more student";
    cout << endl
         << "Name \t\t Age \t\t Percentage";
    while (freadwrite.read((char *)&st, sizeof(st)))
    {
        st.showdata();
    }
    int n = freadwrite.tellg() / sizeof(st);
    cout << endl
         << "Total no. of student record: " << n;
    cout << endl
         << "Enter student number to be updated: ";
    int num;
    cin >> num;
    cin.get(c);
    int l = (num - 1) * sizeof(st);
    if (freadwrite.eof())
        freadwrite.clear();
    freadwrite.seekp(l);
    cout << endl
         << "Enter new values for the student";
    st.getdata();
    cin.get(c);
    freadwrite.write((char *)&st, sizeof(st)) << flush;
    freadwrite.seekg(0);
    cout << endl
         << "After updation contents are";
    cout << endl
         << "Name \t\t Age \t\t Percentage";
    while (freadwrite.read((char *)&st, sizeof(st)))
    {
        st.showdata();
    }
    freadwrite.close();
    getch();
}