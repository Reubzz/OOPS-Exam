#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
int roll_no;
char name[30];
float percent;
static int c;
public:
void get()
{
cout<<"\nEnter Name:";
gets(name);
cout<<"\nEnter percentage:";
cin>>percent;
roll_no=++c;
}
void show()
{
cout<<"\nRoll No:"<<roll_no;
cout<<"\nName:"<<name;
cout<<"\nPercentage:"<<percent;
cout<<"\n\n\tTotal number of students admitted:"<<c;
}
};
int student::c;
void main()
{
clrscr();
student s1,s2;
s1.get();
s2.get();
cout<<"\n Object 1 Data";
cout<<"\n***************";
s1.show();
cout<<"\nObject 2 Data";
cout<<"\n**************";
s2.show();
getch();
}
