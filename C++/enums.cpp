#include <iostream>
using namespace std;

int main()
{
    enum color {red, green = 5, blue} c;
    c = red;
    color d = blue;
    
    cout << c + d << endl;
    return 0;
}
