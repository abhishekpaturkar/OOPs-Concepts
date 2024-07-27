// Friend Concept in Object-Oriented Programming (OOP)

/*
1. Friend Function:
   - A friend function is a function that is not a member of a class but has access to its private and protected members.
   - It is declared inside the class with the 'friend' keyword.
   - It can be a standalone function or a member of another class.
   - Friend functions are not considered class members and don't have 'this' pointer.

Example:
*/

class MyClass
{
private:
    int privateData;

public:
    MyClass() : privateData(0) {}

    friend void friendFunction(MyClass &obj);
};

void friendFunction(MyClass &obj)
{
    // Can access private members of MyClass
    obj.privateData = 10;
}

/*
2. Friend Class:
   - A friend class is a class that has access to private and protected members of another class.
   - The entire friend class and its members can access private and protected members of the class that declared it as a friend.
   - Friendship is not mutual unless explicitly specified.
   - Friendship is not inherited.

Example:
*/

class FriendClass;

class MyClass2
{
private:
    int privateData;

public:
    MyClass2() : privateData(0) {}

    friend class FriendClass;
};

class FriendClass
{
public:
    void accessPrivateData(MyClass2 &obj)
    {
        // Can access private members of MyClass2
        obj.privateData = 20;
    }
};

// Main function to demonstrate friend concept
int main()
{
    MyClass obj1;
    friendFunction(obj1);

    MyClass2 obj2;
    FriendClass friendObj;
    friendObj.accessPrivateData(obj2);

    return 0;
}
