#include <iostream>

using namespace std;

int main()
{
    int x = (6 + 1) * 7;
    int y = (8 / 1) + 1;
    int z = (76 % 7) + 4;

    int sum = (x - y) + z;

    cout << "The sum is " << sum << endl;
    cout << "Answer should be 50." << endl;

    return 0;
}
