#include <iostream.h>
#include <conio.h>
class time
{
    int hrs, min, sec;

public:
    void get()
    {
	cout << "\n\tEnter time (in hrs:minutes:seconds form): ";
	cin >> hrs >> min >> sec;
    }
    void show()
    {
	cout << "\n\t"
	     << hrs << ":" << min << ":" << sec;
    }
    time operator+(time t2)
    {
	time t3;
	t3.sec = sec + t2.sec;
	t3.min = min + t2.min + (t3.sec / 60);
	t3.sec = t3.sec % 60;
	t3.hrs = hrs + t2.hrs + (t3.min / 60);
	t3.min = t3.min % 60;
	return t3;
    }
};
void main()
{
    clrscr();
    time t1, t2, t3;
    t1.get();
    t2.get();
    t1.show();
    t2.show();
    t3 = t1 + t2;
    t3.show();
    getch();
}