#include <iostream>
using namespace std;
int main()
{
    int arreglo[20], act = 1, cont;
    long acu = 24;
    arreglo[0] = 1;
    for (int i = 2; i <= 20; i++)
    {
        cont = 0;
        for (int j = 0; j < act; j++)
            if (i % arreglo[j] == 0)
                cont++;
        if (cont == 1)
        {
            arreglo[act] = i;
            act++;
        }
    }
    for (int k = 0; k <= act; k++)
        acu *= arreglo[k];
    ¡ cout << "El numero mas pequeño divisble del 1 al 20 es: " << acu;
    return 0;
}