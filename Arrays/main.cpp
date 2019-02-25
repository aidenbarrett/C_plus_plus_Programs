#include <iostream>

int main()
{
    // want to create an input and output stream of data.
    uint8_t frame_in[]  = {24, 1, 18, 2, 3, 5, 2};
    uint8_t frame_out[] = {24, 1, 18, 1, 3, 5, 1};

    bool status = true;

    std::cout << "Elements in frame_in:  " << sizeof(frame_in)/sizeof(frame_in[0]) << std::endl;
    std::cout << "Elements in frame_out: " << sizeof(frame_out)/sizeof(frame_out[0]) << std::endl;

    for (int i = 0; i < sizeof(frame_in)/sizeof(frame_in[0]); ++i)
    {
        if(frame_in[i] != frame_out[i])
        {
            status = false;
        }
    }
    if (status) // if equal/true...
    {
        std::cout << "Frames are equal" << std::endl;
    }
    else
    {
        std::cout << "Frames are not equal" << std::endl;
    }
}