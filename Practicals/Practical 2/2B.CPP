#include <iostream.h>
#include <conio.h>
class distance2;
class distance1
{
     int feet;
     int inch;

public:
     void getData()
     {
	  cout << "\n\tEnter feet: ";
	  cin >> feet;
	  cout << "\n\tEnter inches: ";
	  cin >> inch;
     }
     void showData()
     {
	  cout << feet << "'-" << inch << "\"";
     }
     friend void sum(distance1, distance2);
};
class distance2
{
     int feet, inch;

public:
     void getData()
     {
	  cout << "\n\tEnter feet: ";
	  cin >> feet;
	  cout << "\n\tEnter inches: ";
	  cin >> inch;
     }
     void showData()
     {
	  cout << feet << "'-" << inch << "\"";
     }
     friend void sum(distance1, distance2);
};
void sum(distance1 d1, distance2 d2)
{
     int f = d1.feet + d2.feet;
     int i = d1.inch + d2.inch;
     if (i >= 12)
     {
	  i = i - 12;
	  f++;
     }
     cout << f << "'-" << i << "\"";
}
void main()
{
     clrscr();
     distance1 obj1;
     distance2 obj2;
     cout << "\n\tEnter Data for 1st Distance \n";
     cout << "\t---------------------------";
     obj1.getData();
     cout << "\n\tEnter Data for 2nd Distance \n";
     cout << "\t---------------------------";
     obj2.getData();
     cout << "\n\tDistance1: ";
     obj1.showData();
     cout << "\n\tDistance2: ";
     obj2.showData();
     cout << "\n\tDistance3: ";
     sum(obj1, obj2);
     getch();
}