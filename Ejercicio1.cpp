#include <iostream>
using namespace std;
int main()
{
    int sumas = 0;
    for (int x = 3; x < 1000; x++)
    {
        if ((x % 3 == 0) || (x % 5 == 0))
            sumas += x;
    }
    cout << sumas;
}