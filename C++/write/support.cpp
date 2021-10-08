#include <iostream>

extern int count;

void write_extern(void)
{
    while (count >= 0)
    {
        std::cout << "Count is " << count << std::endl;
        count--;
    }
}
