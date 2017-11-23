#include <iostream>

using namespace std;

int addNumbers(int, int, int, int); // function prototype
int subtractNumbers(int, int, int, int); // function prototype

int main()
{
    cout << "\n" << addNumbers(20,120,130,10) << endl;
    cout << "\n" << subtractNumbers(560,60,400, 72) << endl;
    return 0;
}

int addNumbers(int w, int x, int y, int z){ // inserts variables and returns with answer
    int addition = w + x + y + z;
    return addition;
}

int subtractNumbers(int a, int b, int c, int d){
    int subtraction = a - b - c - d;
    return subtraction;
}

