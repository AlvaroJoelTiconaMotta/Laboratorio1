#include <iostream>
using namespace std;
int main()
{
    int resultado = 0;
    for (int y = 3; y < 1000; y++)
    {
        if ((y % 3 == 0) || (y % 5 == 0))
            resultado += y;
        else
        {
            cout << "Soy una ratita hackera";
        }
    }
    cout << resultado << " es el resultado";
}