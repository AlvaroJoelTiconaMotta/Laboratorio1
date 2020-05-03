#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long cuadrado1=0,cuadrado2=0;
	for (int i=1; i<=100; i++){
		cuadrado2+=i;
	    cuadrado1+=pow(i,2);
	}
	cuadrado2= pow(cuadrado2,2);	
	cout<<"La diferencia entre "<<cuadrado2<<" y "<<cuadrado1<<" es: "<<cuadrado2-cuadrado1;
	return 0;
}