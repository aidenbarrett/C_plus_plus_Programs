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
-------------------------------------------------------------------- */


class AidenClass{
    private:             // Access Modifer (Private).
        string name;
};

int main()
{
    AidenClass AidenObject;
    AidenObject.name = "Hello World!";

    cout << "\n" << AidenObject.name << endl;

    return 0;
}
