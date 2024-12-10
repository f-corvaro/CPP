<h1 align="center"><a href="https://github.com/f-corvaro/CPP">
	<img src="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp.png" alt="CPP">
</a></h1>

<p align="center">
	<b><i>"Master the essentials of C++ programming and project development."</i></b><br>
</p>
<p align="center" style="text-decoration: none;">
	<a href="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp01.pdf"><img alt="subject" src="https://img.shields.io/badge/subject-CPP01-yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="Code language count" src="https://img.shields.io/github/languages/count/f-corvaro/CPP?color=yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub top language" src="https://img.shields.io/github/languages/top/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/f-corvaro/CPP?color=yellow" /></a>
</p>

<h2 align="center">CPP01</h2>

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
    <a href="#memory-allocation">Memory Allocation</a><br>
    <a href="#heap-and-stack-allocation">Heap and Stack Allocation</a><br>
    <a href="#copy-constructor">Copy Constructor</a><br>
    <a href="#copy-assignment-operator">Copy Assignment Operator</a><br>
    <a href="#destructor">Destructor</a><br>
    <a href="#operator-overloading">Operator Overloading</a><br>
    <a href="#references">References</a><br>
    <a href="#switch-statements">Switch Statements</a><br>
    <a href="#filestream">Filestream</a><br>
    <a href="#evaluation-process">Evaluation Process</a><br>
    <a href="#handling-edge-cases">Handling Edge Cases</a><br>
    <a href="#developed-skills">Developed Skills</a><br>
    <a href="#references-1">References</a><br>
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

Throughout this project, you will explore a wide range of topics, including memory allocation, pointers to members, references, and switch statements.

</p>
<br>

## Folder Structure

<p align="justify">

The project is organized into the following folders:

```
.
├── CPP01
│   ├── cpp01
│   │   ├── ex00
│   │   │   ├── include
│   │   │   │   └── Zombie.hpp
│   │   │   ├── srcs
│   │   │   │   ├── main.cpp
│   │   │   │   ├── newZombie.cpp
│   │   │   │   ├── randomChump.cpp
│   │   │   │   └── Zombie.cpp
│   │   │   └── Makefile
│   │   ├── ex01
│   │   │   ├── include
│   │   │   │   └── Zombie.hpp
│   │   │   ├── srcs
│   │   │   │   ├── main.cpp
│   │   │   │   ├── Zombie.cpp
│   │   │   │   └── zombieHorde.cpp
│   │   │   └── Makefile
│   │   ├── ex02
│   │   │   ├── srcs
│   │   │   │   └── main.cpp
│   │   │   └── Makefile
│   │   ├── ex03
│   │   │   ├── include
│   │   │   │   ├── HumanA.hpp
│   │   │   │   ├── HumanB.hpp
│   │   │   │   └── Weapon.hpp
│   │   │   ├── srcs
│   │   │   │   ├── HumanA.cpp
│   │   │   │   ├── HumanB.cpp
│   │   │   │   ├── main.cpp
│   │   │   │   └── Weapon.cpp
│   │   │   └── Makefile
│   │   ├── ex04
│   │   │   ├── include
│   │   │   │   └── replace.hpp
│   │   │   ├── srcs
│   │   │   │   ├── main.cpp
│   │   │   │   └── replace.cpp
│   │   │   ├── test_files
│   │   │   │   ├── input.txt
│   │   │   │   ├── large.txt
│   │   │   │   └── special.txt
│   │   │   └── Makefile
│   │   ├── ex05
│   │   │   ├── include
│   │   │   │   └── Harl.hpp
│   │   │   ├── srcs
│   │   │   │   ├── Harl.cpp
│   │   │   │   └── main.cpp
│   │   │   └── Makefile
│   │   └── ex06
│   │       ├── include
│   │       │   └── Harl.hpp
│   │       ├── srcs
│   │       │   ├── Harl.cpp
│   │       │   └── main.cpp
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

To successfully complete the project, you need to submit up to `ex05`. To achieve a perfect score of 100, you must also submit `ex06`.

</p>

## Theoretical Background

<p align="justify">

### Memory Allocation

<p align="justify">

In C++98, dynamic memory allocation is managed using the `new` and `delete` operators. The `new` operator allocates memory on the heap for a single object or an array of objects and returns a pointer to the beginning of the allocated memory. For example, `int* ptr = new int;` allocates memory for a single integer, while `int* arr = new int[10];` allocates memory for an array of 10 integers. It is crucial to release the allocated memory once it is no longer needed to avoid memory leaks. This is done using the `delete` operator for single objects (`delete ptr;`) and the `delete[]` operator for arrays (`delete[] arr;`). 

Proper use of `new` and `delete` ensures efficient memory management and prevents resource leaks in C++98 applications. It is important to note that failing to use `delete` after `new` leads to memory leaks, where allocated memory is not returned to the system. Additionally, using `delete` on memory that was not allocated with `new` or using `delete[]` on memory allocated with `new` (and vice versa) results in undefined behavior. 

To avoid common pitfalls, always initialize pointers to `NULL` in C++98 and check for `NULL` before deleting. This practice helps prevent double deletion and dangling pointers, which can lead to program crashes and unpredictable behavior. For example:
```cpp
int* ptr = new int;
if (ptr != NULL) 
{
    delete ptr;
    ptr = NULL;
}
```

</p>

#### Heap and Stack Allocation

<p align="justify">

In C++98, memory can be allocated on the stack or the heap. Stack allocation is used for local variables and is managed automatically by the compiler. Memory allocated on the stack is released when the variable goes out of scope. Stack allocation is fast and efficient but limited in size. It features faster allocation and deallocation compared to heap allocation and is limited by stack size, which can lead to stack overflow for large objects or deep recursion. Heap allocation, on the other hand, is used for dynamic memory allocation and is managed manually using the `new` and `delete` operators. Memory allocated on the heap persists until it is explicitly released using `delete`. Heap allocation provides more flexibility and can handle larger amounts of memory, but it requires careful management to avoid memory leaks and fragmentation. It is suitable for large objects and dynamic data structures, although it features slower allocation and deallocation compared to stack allocation. The lifetime of the allocated memory is controlled by the programmer, and memory must be manually freed to avoid memory leaks.

</p>
<br>

#### Copy Constructor

<p align="justify">

A copy constructor in C++ is a special constructor used to create a new object as a copy of an existing object. It is called when an object is passed by value, returned from a function, or explicitly copied. The copy constructor takes a reference to an object of the same class as its parameter. If no copy constructor is defined, the compiler provides a default one that performs a shallow copy. However, for classes that manage dynamic memory or resources, it is often necessary to define a custom copy constructor to perform a deep copy and ensure proper resource management.

Example of a copy constructor:

```cpp
class MyClass {
public:
    int* data;

    // Copy constructor
    MyClass(const MyClass& other) {
        data = new int(*other.data);
    }
};
```

</p>
<br>

#### Copy Assignment Operator

<p align="justify">

The copy assignment operator in C++ is used to assign the contents of one object to another existing object of the same class. It is called when an assignment operation is performed. The copy assignment operator takes a reference to an object of the same class as its parameter and returns a reference to the current object. If no copy assignment operator is defined, the compiler provides a default one that performs a shallow copy. However, for classes that manage dynamic memory or resources, it is often necessary to define a custom copy assignment operator to perform a deep copy and ensure proper resource management.

Example of a copy assignment operator:

```cpp
class MyClass {
public:
    int* data;

    // Copy assignment operator
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }
};
```

</p>
<br>

#### Destructor

<p align="justify">

A destructor in C++ is a special member function that is called when an object goes out of scope or is explicitly deleted. The destructor is used to release resources allocated by the object, such as dynamic memory, file handles, or network connections. It has the same name as the class, preceded by a tilde (~), and takes no parameters. If no destructor is defined, the compiler provides a default one that performs a shallow cleanup. However, for classes that manage dynamic memory or resources, it is often necessary to define a custom destructor to ensure proper resource cleanup and prevent resource leaks.

Example of a destructor:

```cpp
class MyClass {
public:
    int* data;

    // Destructor
    ~MyClass() {
        delete data;
    }
};
```

</p>
<br>

#### Operator Overloading

<p align="justify">

Operator overloading in C++ allows custom implementation of operators for user-defined types. This enables objects of custom classes to be manipulated using standard operators, making the code more intuitive and readable. Operators such as +, -, *, /, ==, and << can be overloaded to perform specific operations for custom types. Operator overloading is achieved by defining a special member function or a non-member function with the keyword operator followed by the operator symbol.

Example of operator overloading:

```cpp
class Complex {
public:
    double real, imag;

    Complex(double r, double i) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the << operator for output
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};
```

</p>
<br>

### References

<p align="justify">

In C++98, references are used as an alias for another variable, providing an alternative name for the same memory location. They are created using the `&` symbol and must be initialized when declared. References are particularly useful for function parameters, allowing functions to modify the original variables without copying large objects. This can lead to more efficient code. Unlike pointers, references cannot be null and do not require dereferencing syntax, making them safer and easier to use. 

Here is an example of using references in a function:

```cpp
void increment(int &value) 
{
    value++;
}

int main() {
    int a = 5;
    increment(a);
    // a is now 6
    return 0;
}
```

</p>
<br>

### Switch Statements

<p align="justify">

In C++, a switch statement is a control statement that allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each case. When a match is found, the code associated with that case is executed. The switch statement is often used as an alternative to a series of if-else statements, providing a more readable and efficient way to handle multiple conditions. Each case in a switch statement ends with a break statement to prevent the execution from falling through to the next case. If no case matches, the default case is executed, if it is provided.

</p>

### Filestream

<p align="justify">

In C++, filestreams are used to perform input and output operations on files. The standard library provides the `fstream`, `ifstream`, and `ofstream` classes for file handling. `ifstream` is used for reading from files, `ofstream` is used for writing to files, and `fstream` can be used for both reading and writing. Filestreams are opened using the `open` method and closed using the `close` method. They support various operations such as reading, writing, and seeking within the file. Proper handling of filestreams is essential to ensure data integrity and prevent resource leaks.

</p>
<br>

## Evaluation Process

## Handling Edge Cases

<p align="justify">

For the `ex04` (replace exercise), it is important to handle various edge cases to ensure the robustness and reliability of your program. Here are some key edge cases to consider:

  1. **Incorrect Number of Arguments**
  2. **Empty Filename**
  3. **Empty Search String (s1)**
  4. **File Open Errors**:
     - If the input file cannot be opened (e.g., it does not exist or there are permission issues).
     - If the output file cannot be created (e.g., due to permission issues).
  5. **Empty File**
  6. **No Occurrences of s1**
  7. **s1 Equals s2**
  8. **Large Files**:
     `yes "Hello, World!" | head -n 1000 > large.txt`
  9. **Special Characters**
  10. **File Permissions**

  By considering these edge cases, you can ensure that your program is robust and handles unexpected inputs and errors.

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