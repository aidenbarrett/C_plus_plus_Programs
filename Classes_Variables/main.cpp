/* --------------------------------------------------------------------
    EXAMPLE OF BAD DESIGN CHOICE - CLASS VARIABLES SHOULD NOT BE PUBLIC
   --------------------------------------------------------------------

class AidenClass{
    public:             // Access Modifer (Public). Can be accessed in main().
        string name;    // name is a variable of type String.
};

int main()
{
    AidenClass AidenObject;
    AidenObject.name = "Hello World!";

    cout << "\n" << AidenObject.name << endl;

    return 0;
}
 ------------------------------------------------------------------------------------
 SOLUTION: BUILD A PUBLIC FUNCTION INSIDE OF CLASS THAT HAS ACCESS TO THE VARIABLES
 -----------------------------------------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

class AidenClass{
    public:
        void setName(string nameSwap){
            aiden = nameSwap;
        }
        string getName(){
            return aiden;
        }

    private:
        string aiden;
};

int main()
{
    AidenClass AidenObject;
    AidenObject.setName("\nHello World! Aiden here.\n");
    cout << AidenObject.getName() << endl;

    return 0;
}
