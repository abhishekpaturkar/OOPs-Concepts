# OOPs Repository

Welcome to the Object-Oriented Programming (OOP) Mastery Hub! This repository is your comprehensive guide to mastering OOP concepts, featuring in-depth sections on core principles, practical implementations, and advanced techniques. Dive into our carefully curated content to elevate your programming skills and apply OOP effectively in real-world scenarios.

## Connect with Me

- **LinkedIn**: [LinkedIn Profile](https://www.linkedin.com/in/abhishek-paturkar-810359245/)
- **Twitter**: [TwitterHandle](https://x.com/abhi_paturkar)
- **Email**: [Email](mailto:paturkarabhishek03@gmail.com)

## Index

1. [Basics of OOP](#basics-of-oop)
2. [Encapsulation](#encapsulation)
3. [Constructor](#constructor)
4. [Destructor](#destructor)
5. [Inheritance](#inheritance)
6. [Polymorphism](#polymorphism)
7. [Abstraction]($abstraction)

## Basics of OOP

- **Classes**: Blueprints for creating instances.
- **Objects**: Instances of classes.
- **Encapsulation**: Bundling data and methods within a unit.
- **Inheritance**: Class inheriting from another class.
- **Polymorphism**: Objects taking multiple forms.
- **Abstraction**: Simplifying complex systems.

## Encapsulation

Encapsulation is a core principle of OOP that bundles data and methods within a single unit or object. Key benefits include:

- **Data Hiding**: Internal object details are hidden from external access.
- **Controlled Access**: Getter and setter methods provide controlled data access.
- **Flexibility**: Internal implementation can change without affecting external code.
- **Modularity**: Improves code organization by keeping related elements together.
- **Security**: Restricts direct data access, enhancing object state protection.

## Constructor

Constructor is a special member function that initializes an object when it is created.

- **Default Constructor**: A constructor with no parameters.
- **Parameterized Constructor**: A constructor with parameters.
- **Copy Constructor**: A constructor that copies an existing object.
- **Constructor Overloading**: A constructor that can take multiple parameters.
- **Shallow Copy**: A constructor that creates a new object by copying an existing object's data.
- **Deep Copy**: A constructor that creates a new object by copying an existing object's data and also the dynamic memory the object point to.

## Destructor

A destructor is a special member function that is called automatically when an object is destroyed or goes out of scope, used for cleanup operations.

- **Syntax**: `~ClassName() {}`
- **Dynamic Memory Deletion**: Use the `delete` keyword inside destructor function to deallocate memory allocated with `new`, and `delete[]` for arrays.

## Inheritance

Inheritance is a core principle of OOP that allows a class to inherit the properties and methods of another class. Key benefits include:

- **Types**

  1. Single Inheritance: A class can inherit from only one class.
  2. Multiple Inheritance: A class can inherit from multiple classes.
  3. Multilevel Inheritance: A class inherits from a derived class, creating a parent-child-grandchild relationship.
  4. Hierarchical Inheritance: Multiple classes inherit from a single base class.
  5. Hybrid Inheritance: Combination of two or more types of inheritance.

- **Benefits**
  1. **Code Reuse**: Inheritance allows code to be reused by creating a base class and derived classes.
  2. **Code Reduction**: Reduced code by eliminating redundant code.
  3. **Code Maintenance**: Reduced code by eliminating redundant code.
  4. **Code Extensibility**: Reduced code by eliminating redundant code.

## Polymorphism

Polymorphism is the ability of objects of different classes to respond to the same method call in different ways, allowing for flexible and extensible code.

- **Compile Time**: Achieved through function overloading and operator overloading, resolved at compile time.

  1. **Constructor Overloading**: Classical example of complie-time polymorphism
  2. **Function Overloading**: Multiple functions with the same name but different parameters.
  3. **Operator Overloading**: Redefining operators for custom types to provide intuitive behavior.

- **Run Time**: Achieved through virtual functions and inheritance, allowing objects to be treated as instances of their base class and the appropriate method to be called based on the actual object type at runtime.
  1. **Function Overriding**: Redefining a base class method in a derived class with the same signature.
  2. **Virtual Function**: A function declared in a base class that can be overridden in derived classes, enabling runtime polymorphism. Declare with keyword `virtual` with function in base class.

## Abstraction

Abstraction is the process of hiding complex implementation details and showing only the essential features of an object or system.

- **Using Access Modifiers**: Control the visibility and accessibility of class members.

  1. **Public**: Members are accessible from outside the class.
  2. **Private**: Members are accessible only within the class.
  3. **Protected**: Members are accessible within the class and its derived classes.

- **Abstract Class**: A class that cannot be instantiated and is designed to be inherited by other classes, provides only template to other classes. A class which contains a `Pure Virtual Function` is a Abstract Class.
