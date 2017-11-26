#include <iostream>
#include <string>

using namespace std;

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


class AidenClass{
    public:                         // Access Modifer (Public).
        void setName(string x){     // Setter Function.
            name = x;
        }
        string getName(){       // Getter Function.
            return name;
        }

    private:             // Access Modifer (Private).
        string name;
};

int main()
{
    AidenClass AidenObject;
    AidenObject.setName("\nHello World!\n");
    cout << AidenObject.getName();
    // cout << AidenObject.name; // will flag an error as name is a private member of AidenClass

    return 0;
}
