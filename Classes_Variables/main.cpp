#include <iostream>
#include <string>

using namespace std;

class AidenClass{
    public:             // Access Modifer (Public).
        string name;    // name is a variable of type String.
};

int main()
{
    AidenClass AidenObject;
    AidenObject.name = "Hello World!";

    cout << "\n" << AidenObject.name << endl;

    return 0;
}
