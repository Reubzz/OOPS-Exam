# OOPs Semester End Exam

### Index: 

  | **Table of Contents** |
  | :---: |
  | [Questions and Answers](#question-and-answers) |
  | [Sample Programs](#programs) |

## Question and Answers:

* **What is OOPs**

  Object Oriented Programming (OOP) is a Software Programming Model Constructed Around Objects. This Model creates Data members into objects through declaration of Classes which inturn allows for simplified Programming. 

* **Advantages and Disadvantages of OOPs**

  | Advantages | Disadvantages |
  | :--------: | :-----------: |
  | We can reuse the code multiple times using classes. | Size is larger than other programs. |
  | Inherit the class to subclass for data redundancy. | It required a lot of effort to create. | 
  | It is easy to maintain and modify | It is slower than other programs |
  | It maintains the security of data | It is not suitable for some sorts of problems | 
  | Low-cost development | It takes time to get used to it |

* **What are the features of OOPs**

  Concepts of OOP: 
  - Objects
  - Classes
  - Data Abstraction & Encapsulation
  - Inheritence
  - Polymorphism

* **What is difference between C and C++**

  | C | C++ |
  | :--: | :--: |
  | C is a procedure-oriented programming language | C++ is a object-oriented programming language |
  | C does not support data hiding | Data is hidden by encapsulation to ensure that data structures and operators are used as intended. | 
  | C is a subset of C++ | C++ is a superset of C | 
  | Function and operator overloading are not supported in C | Function and operator overloading is supported in C++ | 
  | Namespace features are not present in C | Namespace is used by C++ which avoids name collisions | 
  | Functions can not be defined inside structures | Functions can be defined under structures | 
  | `calloc()` and `malloc()` functions are used for memory allocation and `free()` function is used for memory deallocation. | `New` operator is used for memory allocation and `delete` operator is used for memory de-allocations | 

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

  Data Abstraction is Hiding of Data. C++ classes use the method of Data Abstraction to hide the logic/code inside functions used inside the class and not show it to the end user. For eg. If we make a class with 2 functions and later call these two functions through objects in the `void main()` we do not see the codes inside the function and only see the function name. This is Data abstraction.

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

* **What is Polymorphism**

  Polymorphism means having many forms of one. In Polymorphism a Function may show different output dependng on the parameters you provide to the function. The act of defining functions with same name but with different parameters to show different outputs is known as Function Overloading. C++ Supports Function Overloading. And the whole act of Function Overloading as a whole means Polymorphism. 

* **What is virtual function**
  
  Virtual Function is a member function in the base class that you redefine in a derived class. A virtual function is declared using the `virtual` keyword. When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.

* **Explain C++ Templates with a snippet of code.**

  The template is a powerfull tool in C++. The idea is to pass data type as a parameter so that we don't need to write the same code for different data types. 
  
  There are two types of Tmeplates: 
     - Function Templates
     - Class Templates
  
  <br>

  Function Templates: 

    For eg. If we need to write a `sort()` code for differnt data types (like `char`, `int`, `float`, etc). Rather than writing and maintaining multiple codes of the same logic but for different type. We use Templates to ease this work. In Templates we can supply `char` `int` `float` as a `parameter` and the Compiler will change the data type as per the parameter during Compile Time.

  Code Snippet: 
  ```c++
    template <typename T>
    T myFunction(T x, T y){
        return (x > y)? x : y;
    }
    int main(){
        // Complier changes the template code 
        // Changes: T to int & inserts it below.
        cout << myFunction<int>(3, 7) << endl;

        // Compiler Changes the Template Code again here
        // Changes: T to char & inserts it below
        cout << myFunction<char>("H", "EE") << endl;

        // Changes: T to float & inserts below.
        cout << myFunction<float>(3.14, 5.25) << endl;
        return 0;
    }
  ```
  as in the above example we cann see the `template <typename T>` which is a template with typename as `T` we can use this `T` as a Data type. In the main file when we call the function supply `<>` parameter to it. Whatever data type is mentioned inside the `<>` replaces `T` in the template function and the resulting code is inserted by the compiler. For eg. If `myFunction<char>` is used, wherever `T` is used in template function will be replaced with `char` datatype. 

  Class Templates:<br>
    Like Function Templates, class templates are useful when a class defines something that is independant of the data type. Can be usefull for classes like Arraylist, Queues, etc. 

* **Explain why do we use namespace in C++**
  
  Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

* **What are Data Types? State basic data types available in C++**

  In C++, data types are declarations for variables. The Data Type determines the type and size of data associated with variables.
  Data Types available in C++ are -> `int`, `float`, `double`, `char`, `bool`, `void`, etc

* **What are Loops?**

  Loops in Programming come into use when we need to repeatedly execute a block of code/statements. For eg. Suppose we want to print `"Hello World"` 100 times. Instead of typing the print statement 100 times we can use a loop. We can use either `for` `do-while` or `while` loop for this. 

  There are 2 types of Looping methods in C++ they are: 
    - Entry Controlled Loops (for and while loop)
    - Exit Controlled Loops (do-while loop)
  
* **Using a Code snippet, explain how would you use a loop effectively**

  For this example we will use the `for loop` 
  Syntax: 
  ```c++
    for( initialization ; condition ; update )
    {
        // Code
    }
  ```
  here, 
  - `initialization` -> initialized the variable used to control the loop. 
  - `condition` -> If `true` the code is executed. If `false` the loop is terminated. 
  - `update` -> Increments or Decrements the initialized variable for the next iteration. 
  
  <br>

  Eg. Printing Numbers from 1 to 10
  ```c++
    #include <iostream>

    using namespace std;

    int main(){
        for(int i = 1; i <= 10; i++){
            cout << i << " ";
        }
        return 0;
    }
  ```
  Output:
  ``` 
  1 2 3 4 5 6 7 8 9 10 
  ```

* **Structure vs Class**

  | Class | Structure |
  | :--: | :--: |
  | Members of a class are private by default | Members of a structure are public by default |
  | Memmory Allocation happens on the heap. | Memory allocationhappens on a stack | 
  | Its a reference type data type. | It's a value type data type. |
  | It's declared using the class keyword. | It's declared using the struct keyword. |

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

  [Add 2 Numbers](programs/add.cpp)

  [For Loop example with Class](programs/forLoop.cpp)

  [While Loop example with Class](programs/whileLoop.cpp)
  
  [Do-While Loop example with Class](programs/doWhileLoop.cpp)
