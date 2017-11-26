#include <iostream>
#include <string>

using namespace std;

class AidenClass{
    public:           // Contructor. Used to give variables an initial value.
        AidenClass(string x){ // When you want to take a value and assign to variable, add a parameter to contructor.
            setName(x);       //
        }
        void setName(string name_swap){
            name = name_swap;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};

int main()
{
    AidenClass AidenObject("\nHello World!\n"); // Once object is created, it calls the contructor with parameter Hello World!

    cout << AidenObject.getName();

    return 0;
}
