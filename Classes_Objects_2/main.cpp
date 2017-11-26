#include <iostream>

using namespace std;

class AidenClass{
    public:
        void AidenFunction(){
            cout << "\nHello ";
        }
        void AidenFunction2(){
            cout << "World!" << endl;
        }
};

int main()
{
    AidenClass AidenObject;
    AidenObject.AidenFunction();
    AidenObject.AidenFunction2();

    return 0;
}
