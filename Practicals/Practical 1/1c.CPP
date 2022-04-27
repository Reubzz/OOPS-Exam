#include <iostream.h>
#include <conio.h>
class Demo
{
     int n, nn;
     void readNo()
     {
          cout << "\nEnter a number: ";
          cin >> n;
     }

public:
     int factorial()
     {
          readNo();
          int f = 1;
          while (n > 0)
          {
               f = f * n;
               n--;
          }
          return f;
     }
     int reverseNo()
     {
          readNo();
          int d, num = 0;
          nn = n;
          while (n > 0)
          {
               d = n % 10;
               num = num * 10 + d;
               n = n / 10;
          }
          return num;
     }
     int isPalindrome()
     {
          int revnum = reverseNo();
          if (nn == revnum)
               return 1;
          else
               return 0;
     }
     int isArmstrong()
     {
          readNo();
          int nn = n, sum = 0, d;
          while (n > 0)
          {
               d = n % 10;
               sum = sum + (d * d * d);
               n = n / 10;
          }
          if (nn == sum)
               return 1;
          else
               return 0;
     }
};
void main()
{
     clrscr();
     Demo d;
     int res;
     cout << endl << "To find out Factorial of Input Number\n";
     cout << "-------------------------------------";
     res = d.factorial();
     cout << endl << "Factorial= " << res;
     cout << endl << "\nTo find out the reverse of Input Number\n";
     cout << "---------------------------------------";
     res = d.reverseNo();
     cout << endl << "Reverse = " << res;
     cout << endl << "\nTo check whether input number is palindrome\n";
     cout << "-------------------------------------------";
     if (d.isPalindrome())
          cout << "\nNumber is palindrome";
     else
          cout << "\nNumber is not palindrome";
     cout << endl << "\nTo check whether input number is Armstrong\n";
     cout << "------------------------------------------";
     if (d.isArmstrong())
          cout << "\nNumber is armstrong";
     else
          cout << "\nNumber is not armstrong";
     getch();
}