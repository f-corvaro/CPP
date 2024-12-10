<h1 align="center"><a href="https://github.com/f-corvaro/CPP">
	<img src="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp.png" alt="CPP">
</a></h1>

<p align="center">
	<b><i>"Master the essentials of C++ programming and project development."</i></b><br>
</p>
<p align="center" style="text-decoration: none;">
	<a href="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp03.pdf"><img alt="subject" src="https://img.shields.io/badge/subject-CPP03-yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="Code language count" src="https://img.shields.io/github/languages/count/f-corvaro/CPP?color=yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub top language" src="https://img.shields.io/github/languages/top/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/f-corvaro/CPP?color=yellow" /></a>
</p>

<h2 align="center">CPP03</h2>

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
    <a href="#construction-and-destruction-order">Construction and Destruction Order</a><br>
    <a href="#virtual-destructor">Virtual Destructor</a><br>
    <a href="#understanding-private-vs-protected-class-members">Understanding Private vs. Protected Class Members</a><br>
    <a href="#shadowing-understanding--wshadow-and--wno-shadow-compiler-flags">Shadowing: Understanding -Wshadow and -Wno-shadow Compiler Flags</a><br>
    <a href="#understanding-virtual-inheritance-in-c03">Understanding Virtual Inheritance in C++03</a><br>
    <a href="#understanding-access-modifiers-virtual-pointers-and-virtual-tables-in-c">Understanding Access Modifiers, Virtual Pointers, and Virtual Tables in C++</a><br>
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

Throughout this project, you will explore a wide range of topics, including inheritance, polymorphism, encapsulation, and abstraction.

</p>
<br>

## Folder Structure

<p align="justify">

```
.
├── CPP03
│   ├── cpp03
│   │   ├── ex00
│   │   │   ├── include
│   │   │   │   └── ClapTrap.hpp
│   │   │   ├── srcs
│   │   │   │   ├── ClapTrap.cpp
│   │   │   │   └── main.cpp
│   │   │   └── Makefile
│   │   ├── ex01
│   │   │   ├── include
│   │   │   │   ├── ClapTrap.hpp
│   │   │   │   └── ScavTrap.hpp
│   │   │   ├── srcs
│   │   │   │   ├── ClapTrap.cpp
│   │   │   │   ├── main.cpp
│   │   │   │   └── ScavTrap.cpp
│   │   │   └── Makefile
│   │   ├── ex02
│   │   │   ├── include
│   │   │   │   ├── ClapTrap.hpp
│   │   │   │   ├── FragTrap.hpp
│   │   │   │   └── ScavTrap.hpp
│   │   │   ├── srcs
│   │   │   │   ├── ClapTrap.cpp
│   │   │   │   ├── FragTrap.cpp
│   │   │   │   ├── main.cpp
│   │   │   │   └── ScavTrap.cpp
│   │   │   └── Makefile
│   │   └── ex03
│   │       ├── include
│   │       │   ├── ClapTrap.hpp
│   │       │   ├── DiamondTrap.hpp
│   │       │   ├── FragTrap.hpp
│   │       │   └── ScavTrap.hpp
│   │       ├── srcs
│   │       │   ├── ClapTrap.cpp
│   │       │   ├── DiamondTrap.cpp
│   │       │   ├── FragTrap.cpp
│   │       │   ├── main.cpp
│   │       │   └── ScavTrap.cpp
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
<br>

## Theoretical Background

<p align="justify">

#### Construction and Destruction Order:

<p align="justify">

- **Construction**: When an object of a derived class is created, the base class constructor is called first. This ensures that the base part of the object is properly initialized before the derived part.
- **Destruction**: When an object of a derived class is destroyed, the derived class destructor is called first, followed by the base class destructor. This ensures that the derived part of the object is properly cleaned up before the base part.

This order is crucial because the derived class may depend on the base class being properly initialized and cleaned up.

</p>

#### Virtual destructor

<p align="justify">

The main difference between a virtual destructor and a non-virtual destructor in C++ is related to how destructors are called in the context of inheritance and polymorphism.

**Virtual Destructor:**

- A virtual destructor ensures that the destructor of the derived class is called when an object is deleted through a pointer to the base class.
- This is crucial in polymorphic base classes, where you might delete an object of a derived class through a base class pointer.
- If the destructor is not virtual, only the base class destructor will be called, potentially leading to resource leaks or undefined behavior because the derived class destructor will not be invoked.

**Non-Virtual Destructor:**

- A non-virtual destructor does not support polymorphic deletion. When an object is deleted through a base class pointer, only the base class destructor is called.
- This can lead to incomplete destruction of the object if it is actually an instance of a derived class, as the derived class destructor will not be called.

</p>

#### Understanding Private vs. Protected Class Members

<p align="justify">

**Private** elements of a class are accessible only within the class itself. They cannot be accessed or modified outside the class, not even by derived classes. This ensures a high level of encapsulation and data hiding.

**Protected** elements, on the other hand, are accessible within the class and by derived classes. This allows derived classes to access and modify these elements while still restricting access from outside the class hierarchy.

</p>

#### Shadowing: Understanding -Wshadow and -Wno-shadow Compiler Flags

<p align="justify">

Shadowing in C++98 occurs when a local variable or type declaration in a nested scope has the same name as a variable, parameter, or type in an outer scope. This can lead to confusion and potential bugs, as the inner declaration hides or "shadows" the outer one. In complex inheritance hierarchies, such as those found in C++03 projects at 42, it is common to encounter shadowing warnings. These warnings, generated by the `-Wshadow` compiler flag, help developers identify and resolve potential issues where a derived class variable unintentionally hides a base class variable. While shadowing can sometimes be intentional and harmless, it is important to be aware of it to avoid unexpected behavior in your programs.

On the other hand, the `-Wno-shadow` compiler flag disables these warnings. This can be useful in cases where shadowing is intentional and does not pose a risk to the correctness of the program. However, it should be used with caution, as it may hide potential issues that could arise from unintentional shadowing.

</p>

#### Understanding Virtual Inheritance in C++03

<p align="justify">

Virtual inheritance in C++03 is used to solve the diamond problem that arises in multiple inheritance scenarios. When a class inherits from two classes that both inherit from a common base class, it can end up with two copies of the base class. This can lead to ambiguity and redundancy. By using the `virtual` keyword in the inheritance declaration, you ensure that only one instance of the base class is shared among all derived classes. For example, in the context of the C++03 projects at 42 (e.g., ClapTrap, ScavTrap, FragTrap, and DiamondTrap), using virtual inheritance ensures that there is a single, shared instance of the `ClapTrap` base class, preventing the diamond problem and maintaining a clear and efficient class hierarchy.

</p>

#### Understanding Access Modifiers, Virtual Pointers, and Virtual Tables in C++

<p align="justify">

After a discussion with a peer during a code review, I felt compelled to write a paragraph about these concepts.

In C++, access modifiers (public, protected, and private) control the visibility and accessibility of class members. The vpointer (virtual pointer) and vtable (virtual table) are key components in the implementation of polymorphism. When a class contains virtual functions, the compiler generates a vtable for the class, which is an array of pointers to the virtual functions. Each object of the class contains a vpointer that points to the vtable of its class. This mechanism allows dynamic binding, where the appropriate function is called at runtime based on the actual object type, enabling the powerful feature of polymorphism in C++

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