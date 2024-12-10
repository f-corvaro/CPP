<h1 align="center"><a href="https://github.com/f-corvaro/CPP">
	<img src="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp.png" alt="CPP">
</a></h1>

<p align="center">
	<b><i>"Master the essentials of C++ programming and project development."</i></b><br>
</p>
<p align="center" style="text-decoration: none;">
	<a href="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp02.pdf"><img alt="subject" src="https://img.shields.io/badge/subject-CPP02-yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="Code language count" src="https://img.shields.io/github/languages/count/f-corvaro/CPP?color=yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub top language" src="https://img.shields.io/github/languages/top/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/f-corvaro/CPP?color=yellow" /></a>
</p>

<h2 align="center">CPP02</h2>

<h3 align="center">Index</h3>
<p align="center">
    <a href="#introduction">Introduction</a><br>
    <a href="#overview">Overview</a><br>
    <a href="#folder-structure">Folder Structure</a><br>
    <a href="#important-guidelines">Important Guidelines</a><br>
    <a href="#compiling">Compiling</a><br>
    <a href="#formatting-and-naming-conventions">Formatting and Naming Conventions</a><br>
    <a href="#allowedforbidden">Allowed/Forbidden</a><br>
    <a href="#design-requirements">Design Requirements</a><br>
    <a href="#additional-notes">Additional Notes</a><br>
    <a href="#project-requirements---mandatory-part">Project Requirements - Mandatory Part</a><br>
    <a href="#theoretical-background">Theoretical Background</a><br>
    <a href="#inheritance">Inheritance</a><br>
    <a href="#virtual-functions">Virtual Functions</a><br>
    <a href="#abstract-classes">Abstract Classes</a><br>
    <a href="#ad-hoc-polymorphism">Ad-hoc Polymorphism</a><br>
    <a href="#orthodox-canonical-class-form">Orthodox Canonical Class Form</a><br>
    <a href="#fixed-point-numbers">Fixed-point Numbers</a><br>
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

Throughout this project, you will explore a wide range of topics, including ad-hoc polymorphism, operator overloading, and the orthodox canonical class form.

</p>
<br>

## Folder Structure

<p align="justify">

The project is organized into the following folders:

```
.
├── CPP02
│   ├── cpp02
│   │   ├── ex00
│   │   │   ├── include
│   │   │   │   └── Fixed.hpp
│   │   │   ├── srcs
│   │   │   │   ├── Fixed.cpp
│   │   │   │   └── main.cpp
│   │   │   └── Makefile
│   │   ├── ex01
│   │   │   ├── include
│   │   │   │   └── Fixed.hpp
│   │   │   ├── srcs
│   │   │   │   ├── Fixed.cpp
│   │   │   │   └── main.cpp
│   │   │   └── Makefile
│   │   ├── ex02
│   │   │   ├── include
│   │   │   │   └── Fixed.hpp
│   │   │   ├── srcs
│   │   │   │   ├── Fixed.cpp
│   │   │   │   └── main.cpp
│   │   │   └── Makefile
│   │   └── ex03
│   │       ├── include
│   │       │   ├── Fixed.hpp
│   │       │   └── Point.hpp
│   │       ├── srcs
│   │       │   ├── bsp.cpp
│   │       │   ├── Fixed.cpp
│   │       │   ├── main.cpp
│   │       │   └── Point.cpp
│   │       └── Makefile
│   └── README.md
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

To successfully complete the project, you need to submit up to `ex02`. To achieve a perfect score of 100, you must also submit `ex03`.

</p>

## Theoretical Background

<p align="justify">

### Inheritance

<p align="justify">

Inheritance is a fundamental concept in object-oriented programming that allows a class (derived class) to inherit properties and behaviors (methods) from another class (base class). This promotes code reuse and establishes a natural hierarchy between classes. In C++98, inheritance is implemented using the `:` symbol followed by the access specifier (`public`, `protected`, or `private`) and the base class name. The derived class inherits all accessible members of the base class, and it can also add new members or override existing ones. Inheritance enables polymorphism, where a base class pointer or reference can point to objects of derived classes, allowing for dynamic method binding and more flexible code design.

Example of inheritance:
```cpp
class Base 
{
  public:
      void display()
          std::cout << "Base class display" << std::endl;
};

class Derived : public Base 
{
  public:
      void display() 
          std::cout << "Derived class display" << std::endl;
};
```

</p>
<br>

### Virtual Functions

<p align="justify">

Virtual functions in C++98 allow derived classes to override methods of the base class, enabling dynamic polymorphism. A virtual function is declared using the virtual keyword in the base class. When a base class pointer or reference points to a derived class object, the overridden method in the derived class is called, even if the call is made through the base class pointer or reference. This behavior is achieved through a mechanism called the virtual table (vtable), which stores pointers to virtual functions. Virtual functions are essential for implementing polymorphic behavior and designing flexible and extensible class hierarchies.

Example of virtual functions:

```cpp
class Base {
public:
    virtual void display() {
        std::cout << "Base class display" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived class display" << std::endl;
    }
};
```

</p>
<br>

### Abstract Classes

<p align="justify">
Abstract classes in C++98 are classes that cannot be instantiated and are designed to be inherited by other classes. They serve as a blueprint for derived classes and often contain pure virtual functions, which are declared by assigning 0 to the virtual function. A class containing at least one pure virtual function is considered abstract. Abstract classes are used to define interfaces and enforce a contract for derived classes to implement specific methods. They provide a way to achieve polymorphism and design flexible and extensible software architectures.

Example of an abstract class:

```cpp
class AbstractBase {
public:
    virtual void display() = 0; // Pure virtual function
};

class Derived : public AbstractBase {
public:
    void display() override {
        std::cout << "Derived class display" << std::endl;
    }
};
```

</p>
<br>

### Ad-hoc Polymorphism

<p align="justify">

Ad-hoc polymorphism, also known as function overloading or operator overloading, is a feature in C++98 that allows functions or operators to operate on different types of data. This form of polymorphism enables the same function name or operator to have different implementations based on the types of its arguments. Function overloading allows multiple functions with the same name but different parameter lists to coexist, enabling the compiler to select the appropriate function based on the arguments provided. Operator overloading, on the other hand, allows developers to define custom behaviors for operators when applied to user-defined types. Ad-hoc polymorphism enhances code readability and flexibility by allowing intuitive and type-specific operations, making it easier to work with different data types in a consistent manner.

</p>
<br>

### Orthodox Canonical Class Form

<p align="justify">

In C++98, the orthodox canonical class form refers to a set of four special member functions that a class should implement to ensure proper resource management and behavior. These functions are the default constructor, copy constructor, copy assignment operator, and destructor. The default constructor initializes objects of the class, ensuring that all member variables are set to a valid state. The copy constructor creates a new object as a copy of an existing object, allowing for safe copying of objects. The copy assignment operator assigns the contents of one object to another existing object, handling self-assignment and ensuring that resources are properly managed. The destructor cleans up resources when an object is destroyed, preventing memory leaks and other resource-related issues. Implementing these functions correctly ensures that objects of the class can be copied, assigned, and destroyed safely, preventing resource leaks and undefined behavior. Adhering to the orthodox canonical form is a best practice in C++98 to achieve robust and maintainable code. Additionally, following this form makes it easier to manage dynamic memory and other resources, as well as to implement advanced features such as exception safety and polymorphism.

</p>
<br>

### Fixed-point Numbers

<p align="justify">

Fixed-point numbers are a way to represent fractional numbers using a fixed number of digits after the decimal point. Unlike floating-point numbers, which can represent a wide range of values with varying precision, fixed-point numbers have a fixed precision and scale. This makes them particularly useful in applications where consistent precision is required, such as financial calculations and embedded systems. However, C++98 does not include built-in support for fixed-point numbers. Instead, developers need to implement their own fixed-point arithmetic or use third-party libraries to handle fixed-point calculations. This often involves defining custom classes or structures to represent fixed-point numbers and overloading operators to perform arithmetic operations.

</p>
<br>

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
- [CNR Area Territoriale di Ricerca di Bologna - C++ Course Index (Italian)](http://www-old.bo.cnr.it/corsi-di-informatica/corsoCstandard/Lezioni/01Indice.html): An Italian reference that provides a comprehensive index of lessons on C++ programming.
- [yuchdev/CppBooks](https://github.com/yuchdev/CppBooks): A curated list of C++ books, articles, and resources for learning and mastering C++.
- [achrafelkhnissi/CPP_Modules](https://github.com/achrafelkhnissi/CPP_Modules?tab=readme-ov-file): A repository containing solutions and explanations for the CPP modules of the 42 school curriculum.

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