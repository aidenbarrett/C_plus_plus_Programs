#include <iostream>

using namespace std;

int addNumbers(int, int);

int main()
{
    cout << addNumbers(20,120);
    return 0;
}

int addNumbers(int x, int y){
    int answer = x + y;
    return answer;
}
