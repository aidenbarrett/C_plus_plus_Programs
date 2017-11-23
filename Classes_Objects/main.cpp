#include <iostream>

using namespace std;

// public and private classes are known as access specifiers.

// Declaring a class
class AidensClass{ // all stuff required for class goes here.
    public:
        void helloWorld(){
            cout << "Hello World!" << endl;
        }
};

// if main() will use function, then make class public, else, make class private if not used in main()
int main()
{
    // decalring an object. Objects are how you access stuff from class.
    // for C++ to know what function you want to use, it needs an object.
    // the object tells it what class you are working with.

    AidensClass aidensObject; // class  &  object
    // write the object name first, to access anything inside the class, link with a dot seperater.
    aidensObject.helloWorld();

    return 0;
}
