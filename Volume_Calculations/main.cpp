/*
----------------------------------------
Program to calculate volume by using default arguments and parameters
Programmer: Aiden Barrett

***Default value ony needs to go into function prototype.***

----------------------------------------
*/
#include <iostream>

using namespace std;

int volume(int  length = 1, int width = 1, int height = 1); // function prototype with default parameters

int main()
{                                   // overwrites default value of length and width.
    cout << "\nVolume calculated: " << volume(4,5) << endl;

    return 0;
}

int volume(int length, int width, int height){
    return length*width*height;
}
