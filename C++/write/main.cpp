#include <iostream>
int count;
extern void write_extern();

int main(void)
{
    count = 5;
    write_extern();
    return 0;
}
