<h1 align="center"><a href="https://github.com/f-corvaro/CPP">
	<img src="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp.png" alt="CPP">
</a></h1>

<p align="center">
	<b><i>"Master the essentials of C++ programming and project development."</i></b><br>
</p>
<p align="center" style="text-decoration: none;">
	<a href="https://github.com/f-corvaro/CPP/blob/main/.extra/cpp04.pdf"><img alt="subject" src="https://img.shields.io/badge/subject-CPP04-yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="Code language count" src="https://img.shields.io/github/languages/count/f-corvaro/CPP?color=yellow" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub top language" src="https://img.shields.io/github/languages/top/f-corvaro/CPP?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/CPP"><img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/f-corvaro/CPP?color=yellow" /></a>
</p>

<h2 align="center">CPP04</h2>

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
    <a href="#subtype-polymorphism">Subtype Polymorphism</a><br>
    <a href="#abstract-classes">Abstract Classes</a><br>
    <a href="#interfaces">Interfaces</a><br>
    <a href="#multiple-inheritance">Multiple Inheritance</a><br>
    <a href="#diamond-problem">Diamond Problem</a><br>
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
├── CPP04
│   ├── cpp04
│   │   ├── ex00
│   │   │   ├── include
│   │   │   │   ├── Animal.hpp
│   │   │   │   ├── Cat.hpp
│   │   │   │   ├── Dog.hpp
│   │   │   │   ├── WrongAnimal.hpp
│   │   │   │   └── WrongCat.hpp
│   │   │   ├── srcs
│   │   │   │   ├── Animal.cpp
│   │   │   │   ├── Cat.cpp
│   │   │   │   ├── Dog.cpp
│   │   │   │   ├── main.cpp
│   │   │   │   ├── WrongAnimal.cpp
│   │   │   │   └── WrongCat.cpp
│   │   │   └── Makefile
│   │   ├── ex01
│   │   │   ├── include
│   │   │   │   ├── Animal.hpp
│   │   │   │   ├── Brain.hpp
│   │   │   │   ├── Cat.hpp
│   │   │   │   ├── Dog.hpp
│   │   │   │   ├── WrongAnimal.hpp
│   │   │   │   └── WrongCat.hpp
│   │   │   ├── srcs
│   │   │   │   ├── Animal.cpp
│   │   │   │   ├── Brain.cpp
│   │   │   │   ├── Cat.cpp
│   │   │   │   ├── Dog.cpp
│   │   │   │   ├── main.cpp
│   │   │   │   ├── WrongAnimal.cpp
│   │   │   │   └── WrongCat.cpp
│   │   │   └── Makefile
│   │   ├── ex02
│   │   │   ├── include
│   │   │   │   ├── Animal.hpp
│   │   │   │   ├── Brain.hpp
│   │   │   │   ├── Cat.hpp
│   │   │   │   ├── Dog.hpp
│   │   │   │   ├── WrongAnimal.hpp
│   │   │   │   └── WrongCat.hpp
│   │   │   ├── srcs
│   │   │   │   ├── Animal.cpp
│   │   │   │   ├── Brain.cpp
│   │   │   │   ├── Cat.cpp
│   │   │   │   ├── Dog.cpp
│   │   │   │   ├── main.cpp
│   │   │   │   ├── WrongAnimal.cpp
│   │   │   │   └── WrongCat.cpp
│   │   │   └── Makefile
│   │   └── ex03
│   │       ├── include
│   │       │   ├── AMateria.hpp
│   │       │   ├── Character.hpp
│   │       │   ├── Cure.hpp
│   │       │   ├── Ice.hpp
│   │       │   ├── ICharacter.hpp
│   │       │   ├── IMateriaSource.hpp
│   │       │   └── MateriaSource.hpp
│   │       ├── srcs
│   │       │   ├── AMateria.cpp
│   │       │   ├── Character.cpp
│   │       │   ├── Cure.cpp
│   │       │   ├── Ice.cpp
│   │       │   ├── main.cpp
│   │       │   └── MaterialSource.cpp
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

### Subtype Polymorphism

<p align="justify">

Subtype polymorphism, also known as runtime polymorphism, is a feature in C++98 that allows a pointer or reference to a base class to refer to objects of derived classes. This enables the use of a single interface to represent different underlying forms (data types). Subtype polymorphism is achieved through the use of virtual functions in the base class, which can be overridden by derived classes. When a virtual function is called on a base class pointer or reference, the appropriate function implementation in the derived class is executed. This allows for dynamic method binding and enables more flexible and extensible code.

Example of subtype polymorphism:
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

void show(Base& obj) {
    obj.display();
}

int main() {
    Base b;
    Derived d;
    show(b); // Calls Base::display
    show(d); // Calls Derived::display
    return 0;
}
```

</p>
<br>

### Abstract Classes

<p align="justify">
In C++98, abstract classes are classes that cannot be instantiated and are designed to be inherited by other classes. An abstract class is declared by including at least one pure virtual function, which is a virtual function with no implementation and is specified by assigning 0 to it. Pure virtual functions define an interface that derived classes must implement. Abstract classes serve as a blueprint for other classes, ensuring that certain functions are implemented in derived classes. While C++98 does not have a separate keyword for interfaces like some other languages, abstract classes with only pure virtual functions can effectively serve as interfaces, providing a way to define a contract for derived classes to follow.

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

### Interfaces

<p align="justify">
In C++98, interfaces are typically implemented using abstract classes that contain only pure virtual functions. These abstract classes define a set of functions that derived classes must implement, providing a way to enforce a contract for derived classes to follow. Interfaces are used to define common behaviors that can be shared across different classes, enabling polymorphism and promoting code reuse. By using interfaces, you can design flexible and extensible software architectures that allow different classes to interact through a common set of functions.

Example of an interface:

```cpp
class IShape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Circle : public IShape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14159 * radius * radius;
    }
    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};
```

</p>
<br>

### Multiple Inheritance

<p align="justify">
Multiple inheritance is a feature in C++98 that allows a class to inherit from more than one base class. This enables a derived class to combine the behaviors and properties of multiple base classes. While multiple inheritance can be useful for creating complex class hierarchies, it also introduces potential issues such as ambiguity and increased complexity. Careful design and consideration are required when using multiple inheritance to ensure that the resulting class hierarchy is maintainable and free of conflicts.

Example of multiple inheritance:

```cpp
class Base1 {
public:
    void display() {
        std::cout << "Base1 display" << std::endl;
    }
};

class Base2 {
public:
    void display() {
        std::cout << "Base2 display" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() {
        Base1::display(); // Resolve ambiguity
        Base2::display(); // Resolve ambiguity
    }
};
```

</p>
<br>

### Diamond Problem

<p align="justify">
The diamond problem is a specific issue that arises in multiple inheritance when a class inherits from two classes that both inherit from a common base class. This can lead to ambiguity and redundancy, as the derived class may end up with multiple copies of the base class. The diamond problem is named after the diamond-shaped inheritance diagram that results from this scenario. In C++98, the diamond problem can be resolved using virtual inheritance, which ensures that only one instance of the base class is shared among all derived classes.

Example of resolving the diamond problem with virtual inheritance:

```cpp
class Base {
public:
    void display() {
        std::cout << "Base class display" << std::endl;
    }
};

class Derived1 : virtual public Base {};
class Derived2 : virtual public Base {};

class Diamond : public Derived1, public Derived2 {};

int main() {
    Diamond d;
    d.display(); // No ambiguity, single instance of Base
    return 0;
}
```

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