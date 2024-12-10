<h1 align="center"><a href="https://github.com/f-corvaro/CPP">
	<img src="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp.png" alt="CPP">
  </a></h1>
  
<p align="center">
	<b><i>"Master the essentials of C++ programming and project development."</i></b><br>
</p>
<p align="center" style="text-decoration: none;">
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="Code language count" src="https://img.shields.io/github/languages/count/f-corvaro/CPP?color=yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub top language" src="https://img.shields.io/github/languages/top/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/f-corvaro/CPP?color=yellow" /></a>
</p>

<h3 align="center">Index</h3>
<p align="center">
    <a href="#introduction">Introduction</a><br>
    <a href="#important-guidelines">Important Guidelines</a><br>
    <a href="#compiling">Compiling</a><br>
    <a href="#formatting-and-naming-conventions">Formatting and Naming Conventions</a><br>
    <a href="#allowedforbidden">Allowed/Forbidden</a><br>
    <a href="#design-requirements">Design Requirements</a><br>
    <a href="#additional-notes">Additional Notes</a><br>
    <a href="#overview">Overview</a><br>
    <a href="#developed-skills">Developed Skills</a><br>
    <a href="#support-and-contributions">Support and Contributions</a><br>
    <a href="#author">Author</a><br>
</p>
<br>

## Introduction

<p align="justify">

In this repository, you will find a collection of projects that cover various aspects of C++ programming. Each project is designed to help you master different concepts and techniques in C++ development. Whether you are a beginner or an experienced programmer, these projects will provide you with valuable hands-on experience and enhance your skills.

Feel free to explore the projects and dive into the world of C++ programming. Happy coding!

</p>
<br>

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

## Overview

<p align="justify">

During the development of these projects, you will study the following main concepts:

### 0. [CPP00](https://github.com/f-corvaro/CPP/tree/main/CPP00) (C++ - single project): Basics, Classes, Objects

  - Introduction to C++
  - Basic Syntax and Data Types
  - Control Structures
  - Functions
  - Namespaces
  - Classes and Objects
  - Member Functions
  - I/O Streams
  - Initialization Lists
  - Static and Const Keywords

[![fcorvaro's 42 CPP00 Score](https://github.com/f-corvaro/42.common_core/blob/main/.extra/100.png)](https://profile.intra.42.fr/users/fcorvaro)

```Evaluation Length = 15/30 Mins``` | ```2 Peers```

### 1. [CPP01](https://github.com/f-corvaro/CPP/tree/main/CPP01) (C++ - single project): Memory Allocation, References, Pointers

  - Memory Allocation
  - Heap and Stack Allocation
  - Copy Constructor
  - Copy Assignment Operator
  - Destructor
  - Function Overloading
  - Operator Overloading

[![fcorvaro's 42 CPP01 Score](https://github.com/f-corvaro/42.common_core/blob/main/.extra/100.png)](https://profile.intra.42.fr/users/fcorvaro)

```Evaluation Length = 15/30 Mins``` | ```2 Peers```

### 2. [CPP02](https://github.com/f-corvaro/CPP/tree/main/CPP02) (C++ - single project): Ad-hoc Polymorphism, Operator Overloading

  - Ad-hoc Polymorphism
  - Operator Overloading
  - Inheritance
  - Virtual Functions
  - Abstract Classes

[![fcorvaro's 42 CPP02 Score](https://github.com/f-corvaro/42.common_core/blob/main/.extra/100.png)](https://profile.intra.42.fr/users/fcorvaro)


```Evaluation Length = 15/30 Mins``` | ```2 Peers```

### 3. [CPP03](https://github.com/f-corvaro/CPP/tree/main/CPP03) (C++ - single project): Inheritance

  - Inheritance
  - Polymorphism
  - Encapsulation
  - Abstraction
  - Construction and Destruction Order

[![fcorvaro's 42 CPP03 Score](https://github.com/f-corvaro/42.common_core/blob/main/.extra/100.png)](https://profile.intra.42.fr/users/fcorvaro)

```Evaluation Length = 15/30 Mins``` | ```2 Peers```

### 4. [CPP04](https://github.com/f-corvaro/CPP/tree/main/CPP04) (C++ - single project): Subtype Polymorphism, Abstract Classes, Interfaces

  - Subtype Polymorphism
  - Interfaces
  - Abstract Classes
  - Multiple Inheritance
  - Diamond Problem

[![fcorvaro's 42 CPP04 Score](https://github.com/f-corvaro/42.common_core/blob/main/.extra/100.png)](https://profile.intra.42.fr/users/fcorvaro)

```Evaluation Length = 15/30 Mins``` | ```2 Peers``` 

### 5. [CPP05](https://github.com/f-corvaro/CPP/tree/main/CPP05) (C++ - single project): Repetition, Exceptions

  - Exception Handling
  - Standard Exceptions
  - Custom Exceptions
  - RAII (Resource Acquisition Is Initialization)

**Status:** Coming Soon

```Evaluation Length = 15/30 Mins``` | ```2 Peers```

### 6. [CPP06](https://github.com/f-corvaro/CPP/tree/main/CPP06) (C++ - single project): C++ Casts

  - Type Casting
  - Static Cast
  - Dynamic Cast
  - Const Cast
  - Reinterpret Cast

**Status:** Coming Soon

```Evaluation Length = 15/30 Mins``` | ```2 Peers```

### 7. [CPP07](https://github.com/f-corvaro/CPP/tree/main/CPP07) (C++ - single project): Templates

  - Function Templates
  - Class Templates
  - Template Specialization
  - Variadic Templates

**Status:** Coming Soon

```Evaluation Length = 15/30 Mins``` | ```2 Peers```

### 8. [CPP08](https://github.com/f-corvaro/CPP/tree/main/CPP08) (C++ - single project): Templated Containers, Iterators, Algorithms

  - STL (Standard Template Library)
  - Containers
  - Iterators
  - Algorithms
  - Functors

**Status:** Coming Soon

```Evaluation Length = 15/30 Mins``` | ```2 Peers```

### 9. [CPP09](https://github.com/f-corvaro/CPP/tree/main/CPP09) (C++ - single project): C++98, C++03

  - Smart Pointers
  - Unique Pointer
  - Shared Pointer
  - Weak Pointer
  - Custom Deleters

**Status:** Coming Soon

```Evaluation Length = 15/30 Mins``` | ```2 Peers```

</p>

## Developed Skills

<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,cpp,vscode,vim" />
  </a>
</p><br>

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