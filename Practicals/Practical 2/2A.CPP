#include <iostream>
#include <conio.h>

using namespace std;
class complex
{
     float n, m;

public:
     void getData()
     {
	  cout << "\n\tEnter real number: ";
	  cin >> n;
	  cout << "\n\tEnter imaginary number: ";
	  cin >> m;
     }
     void showData()
     {
	  cout << n << " + j" << m;
     }
     friend complex sum(complex, complex);
};
complex sum(complex c1, complex c2)
{
     complex c3;
     c3.n = c1.n + c2.n;
     c3.m = c1.m + c2.m;
     return c3;
}
int main()
{
     complex obj1, obj2, obj3;
     cout << "\n\tEnter Data for 1st Complex Number \n";
     cout << "\t---------------------------------";
     obj1.getData();
     cout << "\n\tEnter Data for 2nd Complex Number \n";
     cout << "\t---------------------------------";
     obj2.getData();
     obj3 = sum(obj1, obj2);
     cout << "\n\tComplex Number1: ";
     obj1.showData();
     cout << "\n\tComplex Number2: ";
     obj2.showData();
     cout << "\n\tComplex Number3: ";
     obj3.showData();
     getch();
     return 0;
}
