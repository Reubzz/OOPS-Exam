#include <iostream.h>
#include <conio.h>
class matrix2;
class matrix1
{
     int a[3][3];

public:
     void getData()
     {
	  for (int i = 0; i < 3; i++)
	  {
	       for (int j = 0; j < 3; j++)
		    cin >> a[i][j];
	  }
     }
     void showData()
     {
	  for (int i = 0; i < 3; i++)
	  {
	       for (int j = 0; j < 3; j++)
		    cout << a[i][j] << " ";
	       cout << endl;
	  }
     }
     friend void sum(matrix1, matrix2);
};
class matrix2
{
     int a[3][3];

public:
     void getData()
     {
	  for (int i = 0; i < 3; i++)
	  {
	       for (int j = 0; j < 3; j++)
		    cin >> a[i][j];
	  }
     }
     void showData()
     {
	  for (int i = 0; i < 3; i++)
	  {
	       for (int j = 0; j < 3; j++)
		    cout << a[i][j] << " ";
	       cout << endl;
	  }
     }
     friend void sum(matrix1, matrix2);
};
void sum(matrix1 m1, matrix2 m2)
{
     int a[3][3];
     for (int i = 0; i < 3; i++)
     {
	  for (int j = 0; j < 3; j++)
	  {
	       a[i][j] = m1.a[i][j] + m2.a[i][j];
	       cout << a[i][j] << " ";
	  }
	  cout << endl;
     }
}
void main()
{
     clrscr();
     matrix1 obj1;
     matrix2 obj2;
     cout << "\nEnter Data for 1st Matrix \n";
     cout << "-------------------------\n";
     obj1.getData();
     cout << "\nEnter Data for 2nd Matrix \n";
     cout << "-------------------------\n";
     obj2.getData();
     cout << "\nMatrix1: \n";
     obj1.showData();
     cout << "\nMatrix2: \n";
     obj2.showData();
     cout << "\nMatrix3: \n";
     sum(obj1, obj2);
     getch();
}