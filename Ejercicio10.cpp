#include<iostream>
#include<math.h>
using namespace std;
bool ConsultaPrimo(int);
int main(){
    long suma=1,primo=0;
	while (primo<2000000)
		if (ConsultaPrimo(++primo))
            suma+=primo;
	cout<<"La suma de los primos menores a 2 millones es: "<<suma;
	return 0;
}
bool ConsultaPrimo(int i){
    if (i%2==0)
        return false;
    else{
        for(int y=3; y<=sqrt(i); y+=2)
            if(i % y == 0)
                return false;
        return true;
    }
}