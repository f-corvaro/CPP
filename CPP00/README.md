<h1 align="center"><a href="https://github.com/f-corvaro/CPP">
	<img src="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp.png" alt="CPP">
</a></h1>

<p align="center">
	<b><i>"Master the essentials of C++ programming and project development."</i></b><br>
</p>
<p align="center" style="text-decoration: none;">
	<a href="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp00.pdf"><img alt="subject" src="https://img.shields.io/badge/subject-CPP00-yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="Code language count" src="https://img.shields.io/github/languages/count/f-corvaro/CPP?color=yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub top language" src="https://img.shields.io/github/languages/top/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/f-corvaro/CPP?color=yellow" /></a>
</p>

<h2 align="center">CPP00</h2>

<h3 align="center">Index</h3>
  <p align="center">
    <a href="#introduction">Introduction</a><br>
    <a href="#overview">Overview</a><br>
    <a href="#folder-structure">Folder Structure</a><br>
    <a href="#project-requirements---mandatory-part">Project Requirements - Mandatory Part</a><br>
    <a href="#theoretical-background">Theoretical Background</a><br>
    <a href="#cpp-vs-c">C++ vs C</a><br>
    <a href="#namespaces">Namespaces</a><br>
    <a href="#standard-io-streams">Standard I/O Streams</a><br>
    <a href="#cout-and-cin">`cout` and `cin`</a><br>
    <a href="#stdendl">`std::endl`</a><br>
    <a href="#classes-and-instances">Classes and Instances</a><br>
    <a href="#this">`this`</a><br>
    <a href="#initialization-list">Initialization list</a><br>
    <a href="#const">`const`</a><br>
    <a href="#visibility">Visibility</a><br>
    <a href="#class-vs-struct">Class vs Struct</a><br>
    <a href="#accessors">Accessors</a><br>
    <a href="#comparisons">Comparisons</a><br>
    <a href="#non-member-attributes-and-non-member-functions">Non-Member Attributes and Non-Member Functions</a><br>
    <a href="#pointers-to-members">Pointers to Members</a><br>
    <a href="#header-files-h-and-hpp">Header Files: `.h` and `.hpp`</a><br>
    <a href="#dowhile-statement">`do/while` Statement</a><br>
    <a href="#ternary-operator">Ternary Operator</a><br>
    <a href="#for-loop-syntax">`for` Loop Syntax</a><br>
    <a href="#evaluation-process">Evaluation Process</a><br>
    <a href="#developed-skills">Developed Skills</a><br>
    <a href="#references">References</a><br>
    <a href="#support-and-contributions">Support and Contributions</a><br>
    <a href="#author">Author</a><br>
  </p>
<br>

## Introduction

<p align="justify">

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, often referred to as "C with Classes." The goal of these modules is to introduce you to Object-Oriented Programming (OOP). This will be the starting point of your C++ journey. While many languages are recommended for learning OOP, this project focuses on C++ due to its complexity and rich feature set. To keep things simple, your code will comply with the C++98 standard. Whether you are a beginner or looking to refresh your skills, this project will provide you with the foundational knowledge and practical experience needed to excel in C++ programming.

</p>
<br>

### Overview 

<p align="justify">

Throughout this project, you will explore a wide range of topics, including basic syntax, data types, control structures, functions, and object-oriented programming. You will also learn about namespaces, classes, member functions, I/O streams, initialization lists, static and const keywords, and other fundamental concepts.

</p>
<br>

## Folder Structure

<p align="justify">

The project is organized into the following folders:

```
.

```

<p>

## Important Guidelines

<p align="justify">

### Compiling

- Compile your code with `c++` and the flags `-Wall -Wextra -Werror`.
- Your code should still compile if you add the flag `-std=c++98`.
  
### Formatting and Naming Conventions
- The exercise directories will be named as follows: `ex00`, `ex01`, ..., `exn`.
- Name your files, classes, functions, member functions, and attributes as specified in the guidelines.
- Write class names in **UpperCamelCase format**. Files containing class code should be named according to the class name. For example:
  - ClassName.hpp/ClassName.h
  - ClassName.cpp
  - ClassName.tpp
  - If you have a header file containing the definition of a class "BrickWall" representing a brick wall, its name should be `BrickWall.hpp`. 
- Unless specified otherwise, every output message must end with a newline character and be displayed to the standard output.
- No specific coding style is enforced in the C++ modules. You can follow your preferred style, but ensure your code is clean and readable for peer evaluators.

### Allowed/Forbidden

- You are not coding in C anymore; it's time for C++! Therefore:
  - You are allowed to use almost everything from the standard library. Use the C++-specific versions of the C functions you are familiar with.
  - External libraries, including C++11 (and derived forms) and Boost libraries, are forbidden. The following functions are also forbidden: `*printf()`, `*alloc()`, and `free()`. Using them will result in a grade of 0.
  - Unless explicitly stated otherwise, the `using namespace <ns_name>` and `friend` keywords are forbidden. Violating this rule will result in a grade of -42. **CORRECT USAGE** 
    ```cpp
        std::cout << "Hello, World!" << std::endl; // Correct: using std:: prefix
        using namespace std; // Incorrect: using namespace directive
        cout << "Hello, World!" << endl; // Incorrect: no std:: prefix
    ```
  - The STL is allowed only in Modules 08 and 09. This means no Containers (vector/list/map/etc.) and no Algorithms (anything requiring the `<algorithm>` header) until then. Violating this rule will result in a grade of -42.

### Design Requirements
- Avoid memory leaks when allocating memory using the `new` keyword.
- From Module 02 to Module 09, your classes must follow the `Orthodox Canonical Form` unless explicitly stated otherwise.
    The **Orthodox Canonical Form (OCF)** is a set of four special member functions that every class should implement to ensure proper resource management and copying behavior. These functions are:

    1. **Default Constructor**: A constructor that can be called with no arguments.
    2. **Destructor**: A function that is called when an object is destroyed to release resources.
    3. **Copy Constructor**: A constructor that creates a new object as a copy of an existing object.
    4. **Copy Assignment Operator**: An operator that assigns the values from one object to another existing object.

    #### Example of Orthodox Canonical Form

    ```cpp
    class MyClass 
    {
    public:
        MyClass(); // Default Constructor
        ~MyClass(); // Destructor
        MyClass(const MyClass& other); // Copy Constructor
        MyClass& operator=(const MyClass& other); // Copy Assignment Operator
    private:
        int* data;
    };
    ```
- Implementing functions in a header file (except for function templates) will result in a grade of 0 for the exercise.
- Each header should be usable independently from others. Include all necessary dependencies and use include guards to prevent double inclusion. Failure to do so will result in a grade of 0.

### Additional Notes
- You can add additional files if needed to split your code. As these assignments are not verified by a program, feel free to do so as long as you submit the mandatory files.
- Sometimes, the guidelines of an exercise may seem short, but the examples can show requirements not explicitly written in the instructions.
- Read each module completely before starting! Really, do it.
  
<p>
<br>

## Project Requirements - Mandatory Part

<p align="justify">


To successfully complete the project, you need to submit at least `ex00` and `ex01`. To achieve a perfect score of 100, you must also submit `ex02`.

</p>


## Theoretical Background

<p align="justify">

This section provides detailed explanations of the key concepts and principles covered in the CPP00 project. It serves as a valuable reference to help you understand the material and complete the exercises. 

</p>
<br>

### C++ vs C

<p align="justify">

C++ retains the efficiency and flexibility of C while adding support for classes, inheritance, polymorphism, and other features that facilitate the development of complex software systems.

#### Key Differences Between C++ and C

1. **Object-Oriented Programming (OOP)**: C++ supports OOP, which allows developers to create classes and objects, encapsulate data, and define methods. This makes it easier to model real-world entities and manage large codebases. C, on the other hand, is a procedural language that does not support OOP natively.

2. **Standard Template Library (STL)**: C++ includes the STL, a powerful library of generic classes and functions for data structures and algorithms, such as vectors, lists, maps, and algorithms like sort and search. C does not have a standard library for such data structures and algorithms.

3. **Function Overloading and Default Arguments**: C++ allows function overloading, where multiple functions can have the same name but different parameters. It also supports default arguments, allowing functions to be called with fewer arguments than specified. C does not support these features.

4. **References**: C++ introduces references, which are aliases for existing variables. References provide a safer and more convenient way to pass variables to functions compared to pointers. C does not have references.

5. **Memory Management**: While both C and C++ support dynamic memory allocation, C++ provides the `new` and `delete` operators for allocating and deallocating memory, respectively. C uses the `malloc` and `free` functions for memory management.

6. **Type Safety and Strong Typing**: C++ enforces stricter type checking and provides stronger type safety compared to C. This helps catch errors at compile time and improves code reliability.

7. **Inline Functions**: C++ supports inline functions, which can be defined inside the class definition (not allowed for 42 guidelines). Inline functions are expanded at the point of call, reducing function call overhead. C does not support inline functions natively.

8. **Exception Handling**: C++ provides built-in support for exception handling using `try`, `catch`, and `throw` keywords. This allows developers to write robust code that can handle runtime errors gracefully. C does not have built-in exception handling.

While C++ builds upon the foundation of C, it introduces many features that enhance code organization, reusability, and maintainability. Understanding these differences is crucial for leveraging the full potential of C++ in software development.

</p>
<br>

### Namespaces

<p align="justify">

Namespaces in C++ are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries. The syntax for defining a namespace is as follows:

```cpp
namespace MyNamespace 
{
    // code declarations
}
```

To call a function or variable within a namespace, you use the **scope resolution operator** `::`. For example, if you have a function `foo` inside `MyNamespace`, you call it using `MyNamespace::foo()`. Without namespaces, you might encounter conflicts if two libraries have functions or variables with the same name. Using namespaces helps avoid these conflicts and makes your code more modular and easier to maintain.

The `std::` namespace is the standard namespace in C++ which includes features of the standard library, such as `std::cout`, `std::vector`, and `std::string`. By using `std::`, you explicitly specify that you are using a feature from the standard library, which improves code readability and avoids naming conflicts.

Namespaces can also be nested, allowing for even more organized and hierarchical code structures. For example:

```cpp
namespace OuterNamespace 
{
    namespace InnerNamespace 
    {
        void innerFunction() 
        {
            std::cout << "Hello from InnerNamespace!" << std::endl;
        }
    }
}
```

In this case, you would call `innerFunction` using `OuterNamespace::InnerNamespace::innerFunction()`.

Additionally, you can use the `using` directive to simplify access to members of a `namespace`: (not allowed for 42 guidelines)

```cpp
#include <iostream>
using namespace std; 
// this line sets the namespace to std
// this means that we don't have to write std:: before 
// using any of the functions / variables in the iostream header

int main(void)
{
    cout << "Hello World!" << endl;
    return (0);
}
```

However, be cautious with the `using` directive as it can lead to name conflicts if overused, especially in larger projects.

</p>
<br>

### Standard I/O Streams

<p align="justify">

In C++, the `>>` and `<<` operators are used for input and output operations, respectively. These operators are also known as the stream extraction and stream insertion operators.

- **Stream Insertion Operator (`<<`)**: This operator is used to output data to a stream, such as `std::cout` for console output. For example:
    ```cpp
    std::cout << "Hello, World!" << std::endl;
    ```
    In this example, the `<<` operator is used to send the string `"Hello, World!"` and the newline character `std::endl` to the standard output stream.

- **Stream Extraction Operator (`>>`)**: This operator is used to input data from a stream, such as `std::cin` for console input. For example:
    ```cpp
    int number;
    std::cin >> number;
    ```
    In this example, the `>>` operator is used to extract an integer value from the standard input stream and store it in the variable `number`.

These operators are essential for performing basic input and output operations in C++ and are commonly used in conjunction with the standard input and output streams provided by the C++ Standard Library.

In addition to `std::cout` and `std::cin`, C++ provides other standard streams such as `std::cerr` for error messages and `std::clog` for logging messages. For example:
```cpp
std::cerr << "An error occurred!" << std::endl;
std::clog << "This is a log message." << std::endl;
```

You can also use file streams for reading from and writing to files. The `<fstream>` header provides `std::ifstream` for input file streams and `std::ofstream` for output file streams. For example:

    ```cpp
    #include <fstream>

    std::ofstream outFile("example.txt");
    outFile << "Writing to a file." << std::endl;
    outFile.close();

    std::ifstream inFile("example.txt");
    std::string content;
    inFile >> content;
    std::cout << content << std::endl;
    inFile.close();
    ```

</p>

### `cout` and `cin`

<p align="justify">

`cout` and `cin` are objects of the `iostream` library used for standard output and input operations, respectively.

- **`cout`**: The `cout` object, which stands for "character output," is used to output data to the standard output stream, typically the console. It is an instance of the `ostream` class. For example:
    ```cpp
    std::cout << "Hello, World!" << std::endl;
    ```
    In this example, `std::cout` is used to print the string `"Hello, World!"` to the console. You can also chain multiple `<<` operators to output multiple items:
    ```cpp
    std::cout << "The answer is " << 42 << std::endl;
    ```

- **`cin`**: The `cin` object, which stands for "character input," is used to read data from the standard input stream, typically the keyboard. It is an instance of the `istream` class. For example:
    ```cpp
    int number;
    std::cin >> number;
    ```
    In this example, `std::cin` is used to read an integer value from the keyboard and store it in the variable `number`. You can also chain multiple `>>` operators to read multiple inputs:
    ```cpp
    int a, b;
    std::cin >> a >> b;
    ```

Both `cout` and `cin` can be used with manipulators from the `<iomanip>` library to format the output and input. For example:
```cpp
#include <iomanip>
std::cout << std::setw(10) << std::setfill('*') << 42 << std::endl;
```

</p>

### `std::endl`

<p align="justify">

The `std::endl` manipulator is used to insert a newline character into the output stream and flush the stream. For example:
```cpp
std::cout << "Hello, World!" << std::endl;
```

In this example, `std::endl` is used to move the cursor to the next line after printing `"Hello, World!"` and to flush the output buffer, ensuring that all output is displayed immediately.

`std::endl` is platform-independent and ensures that the correct end-of-line character is used for each system. This makes your code more portable across different operating systems, such as Windows, macOS, and Linux.

While `std::endl` is useful for ensuring immediate output, it is important to note that flushing the stream can have performance implications. In performance-critical applications, you might prefer using the newline character `'\n'` without flushing the stream:

```cpp
std::cout << "Hello, World!\n";
```

</p>
<br>

### Classes and Instances

<p align="justify">

Classes in C++ are a fundamental concept of object-oriented programming (OOP) that allow you to create custom data types by bundling data and functions that operate on that data into a single unit. A class defines a blueprint for objects, specifying the attributes (data members) and behaviors (member functions or methods) that the objects created from the class can have.

These bundled elements are known as member attributes (or data members) and member functions (or methods).

- **Member Attributes**: These are variables that hold the data associated with an object of the class. They define the properties or state of the object. Member attributes are declared within the class definition. For example:
    ```cpp
    class MyClass 
    {
    public:
        int myNumber; // Member attribute
    };
    ```
    In this example, `myNumber` is a member attribute of the class `MyClass`.

- **Member Functions**: These are functions that operate on the data members of the class. They define the behaviors or actions that an object of the class can perform. Member functions are also declared within the class definition. For example:
    ```cpp
    class MyClass 
    {
    public:
        int myNumber; // Member attribute

        void myFunction() { // Member function
            std::cout << "Hello, World!" << std::endl;
        }
    };
    ```
    In this example, `myFunction` is a member function of the class `MyClass`.

You can create objects (instances) of a class and access its member attributes and member functions using the dot operator. For example:
```cpp
int main() {
  MyClass obj1; // Create an instance of MyClass
  MyClass obj2; // Create another instance of MyClass

  obj1.myNumber = 42; // Access and modify the member attribute for obj1
  obj2.myNumber = 24; // Access and modify the member attribute for obj2

  obj1.myFunction(); // Call the member function for obj1
  obj2.myFunction(); // Call the member function for obj2

  return 0;
}
```

Classes can also have **constructors and destructors**:

 - Constructors: Special member functions that are called when an object is instantiated. They are used to initialize objects.

 ```cpp
 class MyClass 
 {
 public:
     int myNumber;
 
     // Constructor
     MyClass(int num) : myNumber(num) {
         std::cout << "Object created with number: " << myNumber << std::endl;
     }
 };
 ```

 - Destructors: Special member functions that are called when an object is destroyed. They are used to perform cleanup operations.
  
```cpp
  class MyClass 
  {
    public:
    int myNumber;
 
    // Destructor
    ~MyClass() {
      std::cout << "Object with number " << myNumber << " is destroyed" << std::endl;
    }
  };
 ```

Classes can also have access specifiers (public, private, and protected) to control the visibility of their members. By default, members are private if no access specifier is provided.

</p>
<br>

### `this`

<p align="justify">

In C++, `this` is a special pointer available within non-static member functions of a class. It points to the object for which the member function is called. The `this` pointer is implicitly passed to all non-static member functions and can be used to access the object's members and methods.

For example:
```cpp
class MyClass 
{
public:
    int myNumber;

    void setNumber(int number) {
        this->myNumber = number; // Use of `this` to access the member attribute
    }

    void printNumber() {
        std::cout << "The number is: " << this->myNumber << std::endl;
    }
};
```

In this example, the setNumber and printNumber member functions use the this pointer to access the myNumber attribute of the object. The this pointer is particularly useful when you need to distinguish between member variables and parameters with the same name.

The this pointer is also used in method chaining, where member functions return the this pointer to allow multiple function calls on the same object in a single statement.

</p>
<br>

### Initialization list

<p align="justify">

In C++, an initialization list is a more efficient way to initialize member variables of a class. It is used in the constructor of a class to directly initialize the members before the constructor body executes. This is particularly useful for initializing constant members, reference members, and base class members in derived classes. The syntax for an initialization list is as follows:

```cpp
class MyClass {
public:
    const int myConst;
    int myNumber;

    // Constructor with initialization list
    MyClass(int num1, int num2) : myConst(num1), myNumber(num2) {
        // Constructor body (if needed)
    }
};
```

In this example, `myConst` and `myNumber` are initialized using an initialization list. This approach ensures that myConst is initialized correctly, as constant members must be initialized at the time of their creation.

Initialization lists can also improve performance by avoiding unnecessary default construction and assignment. For example, when initializing complex objects or objects of classes with no default constructor, using an initialization list is essential.

```cpp
class Complex {
public:
    int real, imag;

    Complex(int r, int i) : real(r), imag(i) {}
};

class MyClass {
public:
    Complex comp;

    // Constructor with initialization list
    MyClass(int r, int i) : comp(r, i) {}
};
```

In this example, the Complex object comp is initialized directly using the initialization list, ensuring efficient and correct initialization.

</p>
<br>

### `const`

<p align="justify">

In C++, the `const` keyword is used to define constants, which are variables whose value cannot be changed after initialization. It can be applied to variables, pointers, member functions, and function parameters to enforce immutability and enhance code safety and readability.

- **Constant Variables**: When `const` is used with a variable, it makes the variable read-only.
    ```cpp
    const int myConst = 10;
    // myConst = 20; // Error: cannot modify a const variable
    ```

- **Constant Pointers**: `const` can be used with pointers to make the pointer itself, the data it points to, or both, constant.
    ```cpp
    int value = 10;
    const int* ptr = &value; // Pointer to constant data
    // *ptr = 20; // Error: cannot modify the data through the pointer

    int* const constPtr = &value; // Constant pointer
    *constPtr = 20; // Allowed: can modify the data
    // constPtr = &anotherValue; // Error: cannot change the pointer itself
    ```

- **Constant Member Functions**: When `const` is used with member functions, it indicates that the function does not modify any member variables of the class.
    ```cpp
    class MyClass {
    public:
        int myNumber;

        void printNumber() const {
            // myNumber = 10; // Error: cannot modify member variable
            std::cout << myNumber << std::endl;
        }
    };
    ```

- **Constant Function Parameters**: `const` can be used with function parameters to prevent the function from modifying the arguments passed to it.
    ```cpp
    void printValue(const int value) {
        // value = 20; // Error: cannot modify a const parameter
        std::cout << value << std::endl;
    }
    ```

Using `const` helps to prevent accidental modifications and makes the code more predictable and easier to understand.

</p>
<br>

### Visibility

<p align="justify">

In C++, visibility refers to the accessibility of class members (attributes and methods) from different parts of a program. Visibility is controlled using access specifiers: `public`, `private`, and `protected`.

- **Public**: Members declared as `public` are accessible from anywhere in the program. This means that any code that has access to an object of the class can access its public members.
    ```cpp
    class MyClass {
    public:
        int myNumber; // Public member
    };

    MyClass obj;
    obj.myNumber = 10; // Accessible
    ```

- **Private**: Members declared as `private` are accessible only within the class itself. They cannot be accessed directly from outside the class. This is useful for encapsulating data and hiding implementation details.
    ```cpp
    class MyClass 
    {
    private:
        int myNumber; // Private member

    public:
        void setNumber(int num) {
            myNumber = num; // Accessible within the class
        }

        int getNumber() const {
            return myNumber; // Accessible within the class
        }
    };

    MyClass obj;
    // obj.myNumber = 10; // Error: not accessible
    obj.setNumber(10); // Accessible through public method
    ```

- **Protected**: Members declared as `protected` are accessible within the class itself and by derived classes. This is useful for inheritance, allowing derived classes to access and modify the base class's protected members.
    ```cpp
    class Base 
    {
    protected:
        int myNumber; // Protected member
    };

    class Derived : public Base {
    public:
        void setNumber(int num) {
            myNumber = num; // Accessible within derived class
        }
    };

    Derived obj;
    // obj.myNumber = 10; // Error: not accessible
    obj.setNumber(10); // Accessible through public method of derived class
    ```

Using access specifiers helps to enforce encapsulation, a key principle of object-oriented programming, by controlling how and where class members can be accessed and modified.

</p>
<br>

### Class vs Struct

<p align="justify">

In C++, both `class` and `struct` are used to define custom data types that can contain member variables and member functions. However, there are some key differences between the two:

- **Default Access Specifier**: The primary difference between `class` and `struct` is the default access specifier. In a `class`, members are `private` by default, meaning they are not accessible from outside the class unless explicitly specified. In a `struct`, members are `public` by default, meaning they are accessible from outside the struct unless explicitly specified.
    ```cpp
    class MyClass
    {
    private:
        int myNumber; // Private by default

    public:
        void setNumber(int num) 
            myNumber = num;
    };

    struct MyStruct 
    {
        int myNumber; // Public by default
    };
    ```

- **Usage**: Traditionally, `struct` is used for passive objects that primarily hold data, while `class` is used for active objects that encapsulate both data and behavior. However, in C++, both `class` and `struct` can have member functions, constructors, destructors, and access specifiers, making them functionally equivalent in many ways.

- **Inheritance**: Both `class` and `struct` support inheritance, but the default access level for base classes differs. In a `class`, base classes are inherited privately by default, while in a `struct`, base classes are inherited publicly by default.
    ```cpp
    class BaseClass {
    public:
        int baseNumber;
    };

    class DerivedClass : BaseClass { // Private inheritance by default
    };

    struct DerivedStruct : BaseClass { // Public inheritance by default
    };
    ```

Despite these differences, the choice between `class` and `struct` often comes down to coding style and convention. In modern C++, `class` is typically used for most user-defined types, while `struct` is reserved for simple data structures.

</p>
<br>

### Accessors

<p align="justify">

Accessors, also known as getter and setter methods, are member functions used to access and modify the private or protected attributes of a class. They provide a controlled way to read and write the values of these attributes, ensuring encapsulation and data integrity.

- **Getter Methods**: Getter methods, or accessors, are used to retrieve the value of a private or protected attribute. They typically return the value of the attribute and do not modify it.
    ```cpp
    class MyClass 
    {
    private:
        int myNumber;

    public:
        int getNumber() const {
            return myNumber;
        }
    };
    ```

- **Setter Methods**: Setter methods, or mutators, are used to modify the value of a private or protected attribute. They typically take a parameter that is used to set the value of the attribute.
    ```cpp
    class MyClass {
    private:
        int myNumber;

    public:
        void setNumber(int num) {
            myNumber = num;
        }
    };
    ```

Using accessors helps to enforce encapsulation by providing a controlled interface for accessing and modifying the attributes of a class. This allows for validation, logging, or other processing to be performed when an attribute is accessed or modified, enhancing the robustness and maintainability of the code.

</p>

### Comparisons

<p align="justify">

In C++, comparisons are used to determine the relationship between two objects or values. This is typically done using comparison operators such as `==`, `!=`, `<`, `>`, `<=`, and `>=`. These operators can be overloaded in classes to provide custom comparison logic for objects.

- **Equality Operator (`==`)**: Checks if two objects or values are equal.
    ```cpp
    class MyClass {
    public:
        int myNumber;

        bool operator==(const MyClass& other) const {
            return myNumber == other.myNumber;
        }
    };
    ```

- **Inequality Operator (`!=`)**: Checks if two objects or values are not equal.
    ```cpp
    class MyClass {
    public:
        int myNumber;

        bool operator!=(const MyClass& other) const {
            return myNumber != other.myNumber;
        }
    };
    ```

- **Relational Operators (`<`, `>`, `<=`, `>=`)**: These operators are used to compare the relative order of two objects or values.
    ```cpp
    class MyClass {
    public:
        int myNumber;

        bool operator<(const MyClass& other) const {
            return myNumber < other.myNumber;
        }

        bool operator>(const MyClass& other) const {
            return myNumber > other.myNumber;
        }

        bool operator<=(const MyClass& other) const {
            return myNumber <= other.myNumber;
        }

        bool operator>=(const MyClass& other) const {
            return myNumber >= other.myNumber;
        }
    };
    ```

Overloading these operators allows objects of custom classes to be compared in a natural and intuitive way, similar to built-in types. This is particularly useful for sorting, searching, and other operations that rely on comparisons.

</p>
<br>

### Non-Member Attributes and Non-Member Functions

<p align="justify">

In C++, non-member attributes and non-member functions are variables and functions that are not part of any class. They are defined outside of any class scope and can be used independently of any objects. Non-member attributes are typically global variables, while non-member functions are standalone functions that operate on their parameters rather than on class member variables.

- **Non-Member Attributes**: These are global variables that are accessible from anywhere in the program. However, the use of global variables is generally discouraged because they can lead to code that is difficult to understand and maintain. Instead, it is recommended to use local variables or class member variables.
    ```cpp
    int globalVariable = 42; // Non-member attribute

    void someFunction() {
        globalVariable = 24; // Modify the global variable
    }
    ```

- **Non-Member Functions**: These are functions that are defined outside of any class. They can be used to perform operations that do not require access to the internal state of a class. Non-member functions can be useful for implementing utility functions or operations that involve multiple classes.
    ```cpp
    int add(int a, int b) { // Non-member function
        return a + b;
    }

    int main() {
        int result = add(3, 4); // Call the non-member function
        std::cout << "The result is: " << result << std::endl;
        return 0;
    }
    ```

Non-member functions can also be used in conjunction with classes to provide additional functionality without increasing the complexity of the class itself. For example, operator overloading can be implemented as non-member functions to allow custom types to interact with built-in types in a natural way.

Using non-member attributes and functions appropriately can help to keep the code modular and maintainable, separating concerns and reducing dependencies between different parts of the program.

</p>
<br>

### Pointers to Members

<p align="justify">

In C++, pointers to members are special types of pointers that can point to non-static member variables and member functions of a class. They are used to access members of a class through an object or a pointer to an object. Pointers to members are particularly useful when you need to select a member variable or function dynamically at runtime.

- **Pointers to Member Variables**: A pointer to a member variable is declared using the syntax `ClassName::*`. It can be used to access the member variable of a specific object.
    ```cpp
    class MyClass {
    public:
        int myNumber;
    };

    int main() {
        MyClass obj;
        obj.myNumber = 42;

        int MyClass::*ptr = &MyClass::myNumber; // Pointer to member variable
        std::cout << "Value: " << obj.*ptr << std::endl; // Access member variable through pointer
        return 0;
    }
    ```

- **Pointers to Member Functions**: A pointer to a member function is declared using the syntax `ReturnType (ClassName::*)(ParameterTypes)`. It can be used to call the member function of a specific object.
    ```cpp
    class MyClass {
    public:
        void myFunction() {
            std::cout << "Hello, World!" << std::endl;
        }
    };

    int main() {
        MyClass obj;

        void (MyClass::*funcPtr)() = &MyClass::myFunction; // Pointer to member function
        (obj.*funcPtr)(); // Call member function through pointer
        return 0;
    }
    ```

Pointers to members provide a way to access and manipulate class members dynamically, adding flexibility to your code. They are particularly useful in scenarios where you need to work with different members of a class based on runtime conditions.

</p>
<br>

### Header Files: `.h` and `.hpp`

<p align="justify">

In C++, header files are used to declare the interfaces of classes, functions, and variables that can be shared across multiple source files. Header files typically have the extensions `.h` or `.hpp`. Both extensions serve the same purpose, but there are some conventions and preferences that might influence their usage.

- **`.h` Files**: The `.h` extension is traditionally used for C and C++ header files. These files contain declarations of functions, classes, and variables, as well as macro definitions and include directives. The implementation of these declarations is usually provided in corresponding `.cpp` source files.
    ```cpp
    // MyClass.h
    #ifndef MYCLASS_H
    #define MYCLASS_H

    class MyClass {
    public:
        void myFunction();
    };

    #endif // MYCLASS_H
    ```

- **`.hpp` Files**: The `.hpp` extension is often used to indicate C++ header files specifically. This can help distinguish C++ headers from C headers in projects that use both languages. Some developers prefer using `.hpp` for C++ headers to emphasize that the file contains C++ code, including features like classes, templates, and inline functions.
    ```cpp
    // MyClass.hpp
    #ifndef MYCLASS_HPP
    #define MYCLASS_HPP

    class MyClass {
    public:
        void myFunction();
    };

    #endif // MYCLASS_HPP
    ```

Regardless of the extension used, header files should include include guards or `#pragma once` to prevent multiple inclusions, which can lead to compilation errors. The choice between `.h` and `.hpp` is often a matter of personal or project-specific preference, and both are widely accepted in the C++ community.

</p>
<br>

### `do/while` Statement

<p align="justify">

The `do/while` statement in C++ is a control flow statement that allows you to execute a block of code repeatedly based on a given condition. Unlike the `while` loop, which checks the condition before executing the loop body, the `do/while` loop checks the condition after executing the loop body. This ensures that the loop body is executed at least once, regardless of whether the condition is initially true or false.

The syntax for the `do/while` loop is as follows:
```cpp
do {
    // Code to be executed
} while (condition);
```

The `do/while` loop is useful when you need to ensure that the loop body is executed at least once, such as when prompting a user for input and validating it within the loop.

</p>
<br>

### Ternary Operator

<p align="justify">

The ternary operator in C++ is a concise way to perform conditional operations. It is also known as the conditional operator and is represented by the `?` and `:` symbols. The ternary operator takes three operands: a condition, an expression to evaluate if the condition is true, and an expression to evaluate if the condition is false. The syntax for the ternary operator is as follows:

```cpp
condition ? expression_if_true : expression_if_false;
```

</p>
<br>

### `for` Loop Syntax

<p align="justify">

The `for` loop in C++ is a control flow statement that allows you to execute a block of code repeatedly with a specific initialization, condition, and iteration expression. It is commonly used for iterating over arrays, containers, or performing a fixed number of iterations. The syntax for the `for` loop is as follows:

```cpp
for (initialization; condition; iteration) {
    // Code to be executed
}
```

</p>
<br>

## Process for ex02

<p align="justify">

To recreate the `Account.cpp` file and obtain the exact log output, you need to implement the `Account` class methods as described in the `Account.hpp`. The log file provides valuable information about the expected behavior of the class methods. The order of implementation should be:

1. **Initialize Static Members**: Initialize the static members of the Account class.
2. **Constructor**: Implement the constructor to initialize the account with an initial deposit and update the static members.
3. **Destructor**: Implement the destructor to display the account closure message.
4. **Static Methods**: Implement the static methods to return the number of accounts, total amount, total deposits, and total withdrawals.
5. **Display Methods**: Implement the methods to display account information and status.
6. **Deposit and Withdrawal Methods**: Implement the methods to handle deposits and withdrawals.
7. **Timestamp Method**: Implement the method to display the current timestamp.

</p>

## Evaluation Process

<p align="justify">

The project will be evaluated by two reviewers who will test all edge cases. This includes handling scenarios such as pressing `Ctrl+D` in `ex01`, and executing the `ADD` or `SEARCH` commands within the `SEARCH` menu. The evaluation aims to ensure that the project meets all specified requirements and handles unexpected inputs gracefully.

</p>

## Developed Skills

<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,cpp,vscode,vim" />
  </a>
</p><br>

## References

- [42 Intra - C++ Basics](https://elearning.intra.42.fr/notions/piscine-c-d00-c-basics/subnotions): This link provides access to tutorials and explanations for C++ basics on the 42 Intra platform. (The access is allowed only for the 42 students).
- [cplusplus.com](https://cplusplus.com/): A comprehensive resource for C++ documentation and tutorials.
- [42 Cursus Guide - CPP Modules](https://42-cursus.gitbook.io/guide/rank-04/cpp-00-04-doing): A guide for the CPP modules in the 42 curriculum.

## Support and Contributions

<p align="center">
If you find this repository helpful, please consider starring it to show your support. Your support is greatly appreciated!</p>

<p align="center">
<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg"><alt=""></a>
<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg"><alt=""></a>

<br>

## Author

<p align="center"><a href="https://profile.intra.42.fr/users/fcorvaro"><img style="height:auto;" src="https://avatars.githubusercontent.com/u/102758065?v=4" width="100" height="100"alt=""></a>
<p align="center">
<a href="mailto:fcorvaro@student.42roma.it"><kbd>Email</kbd><alt=""></a>
<a href="https://github.com/f-corvaro"><kbd>Github</kbd><alt=""></a>
<a href="https://www.linkedin.com/in/f-corvaro/"><kbd>Linkedin</kbd><alt=""></a>
<a href="https://42born2code.slack.com/team/U050L8XAFLK"><kbd>Slack</kbd><alt=""></a>

<hr/>