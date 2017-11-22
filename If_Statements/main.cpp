#include <iostream>

using namespace std;

int main()
{
    int a = 12;
    int b = 10;

    if(1 > 0){  // Relational operator
        cout << "Greater than" << endl;
    }

    if(1 < 10){
        cout << "Less than" << endl;
    }

    if(1 >= 1){
        cout << "Greater than or equal to" << endl;
    }

    if(10 <= 10){
        cout << "Less than or equal to" << endl;
    }

    if(3==3){  // Quality operator
        cout << "Equals" << endl;
    }

    if(10!=8){
        cout << "Not equals" << endl;
    }

    if(a >= b){
        cout << "A is greater!" << endl;
    }

    return 0;
}
