#include <iostream>
using namespace std;
int main()
{
    int resultados = 0;
    for (int x = 3; x < 1000; x++)
    {
        if ((x % 3 == 0) || (x % 5 == 0))
            resultados += x;
        else
        {
            cout << "Soy una rata";
        }
    }
    cout << resultados;
}