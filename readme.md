# OOPs Internal Exam

## Question and Answers:

* **What is OOPs**

  Object Oriented Programming (OOP) is a Software Programming Model Constructed Around Objects. This Model creates Data members into objects through declaration of Classes which inturn allows for simplified Programming. 

* **Difference between Procedure Oriented Programing (POP) and Object Oriented Programing (OOP)**

    POP  |  OOP  
   :---: | :---: 
   Pop Main program is divided into small parts depending on functions.  | OOPs Main Program is divided into small objects depending on the function.
   There is no Data Abstraction | Data Abstraction is Possible with Classes
   In POP top-to-down Process is followed | In OOP bottom-to-up Process is followed
   In POP there is no access specifer | In OOPs there are access specifers to restrict certain functions. (Public, Private, Protected)
   In POP Operators cannot be overloaded | In OOPs Operators can be overloaded
   Examples of POP languages: C, Pascal, Fortan | Examples of OOPs languages: C++, Java.

      
* **What is a Class?**

  Class is a collection of Member Data and Member Functions which can be Public, Private or Protected. It is a template from which objects are created. It uses the Method of Data Abstraction to hide the Logic/Codes inside the Member Functions. 

* **Does Class have memory?**
  
  Classes do not hold memory when defined, But objects that is an Instance of the Class is allocated memory when Initiated in main function.

* **What is Data Abstraction?**

  Data Abstraction is Hiding of Data. C++ classes use the method of Data Abstraction to hide the logic/code inside functions used inside the class and not show it to the end user. For eg. If we make a class with 2 functions and later call these two functions through objects in the void main() we do not see the codes inside the function and only see the function name. This is Data abstraction.

* **What is Data Encapsulation?**

  Data Encapsulation is wrapping up a function into another function to remove Complexity in code. Encapsulation makes the program easier for end users. 
  For eg. If we have to make a program to Add to numbers. We make a class which has two functions, `getNum()` and `addNum()` now instead of allowing the end user to call both `getNum()` and `addNum()` in void `main()` we rather encapsulate `getNum()` into `addNum()` function. Hence making the end User only call `addNum()` function in his main file and making his code easier. 

* **What is Constructor?**
  
  Constructor is a function which is invoked (called) at the time when Object is created. It can have Arguments or no Arguments. Constructor Function will have the same name as the Class Name itself. It will run once only when the object instance is created. 

* **What is Destructor?**

  Destructors work the same way like constructors except Destructors are invoked last just before the objects are destroyed. A Destructor cannot have any parameters, arguments or a return type. It must have the same name as the Class name like Constructors with the only difference that Destructors are prefixed with a Tilde Sign `~`. Usually Destructors are used to avoid Memory Leak. 

* **What is Friend Class**

  A friend class can access both private and protected members of the class in which it has been declared as friend. 
  For eg. if `public class B` is declared as a friend inside the `pirvate Class A`. B is a friend of class A. Hence `Class B` can access the private members of `class A`.

## Programs:

* Write a Program to check whether the given number is a Leap Year or not using C++ Classes.
  [Click Here to Access File](programs/year.cpp)
  ```c++
    #include <iostream>
    #include <conio.h>

    using namespace std;

    class year{
        int a; // Defining a Variable
        public: // Making it a Public Function
        void getYear(){
            cout << "Enter a year : "; // Asking for user input
            cin >> a; // pushing user input to a variable
        }
        void show(){
            // using modulus - Dividing the variable a by 4 to see if remainer 0
            if (a % 4 == 0){ 
                cout << "It is a Leap Year"; // if remainder is 0 
            } else {
                cout << "It is not a Leap Year"; // if remained is not 0 
            }
        }
    };

    int main(){
        year y1; // making a object of class Year
        y1.getYear(); // calling a member function of class 
        y1.show(); // calling a member function of class 
        getch(); 
        return 0;
    }
  ```

* Write a Program to Reverse a String.
  [Click Here to Access File](programs/revString.cpp)
  ```c++
  #include <iostream>
  #include <conio.h>
  
  using namespace std;
  
  class String {
      string string; // making a variable with string data type.
      public: // Making the class functions public
      void getData(){
          cout << "Enter a String : "; // Asking for user input
          cin >> string; // pushing user input to a variable
      }
      void reverse(){
          cout << "Reverse is : "; 
          for( int i = string.length() - 1; i >= 0; i--){ 
              // Decreasing Value of i with every loop to make index in negative hence typing out the string in reverse.
              cout << string[i]; 
          }
      }
  };
  int main(){
      String s; // Making a object of class String
      s.getData(); // calling function of object
      s.reverse(); // calling function of object
      getch();
      return 0;
  }
  ```

* Some Additional Programs

  [Employee Information](programs/employeeInfo.cpp)

  [Student Information](programs/studentInfo.cpp)