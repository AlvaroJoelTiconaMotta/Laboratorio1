#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int  n3;
	double aux;
	for (int n1=1;n1<1000;n1++)
		for (int n2=1+n1;n2<1000;n2++){
			aux=pow(n1,2)+pow(n2,2);
			aux=sqrt(aux);
			if (fmod(aux,1)==0){
				n3=aux;
				if (n3 > n2 && n2 > n1)
					if (n1 + n2 + n3 == 1000){
						cout<<"El numero 1 es: "<<n1<<endl;
						cout<<"El numero 2 es: "<<n2<<endl;
						cout<<"El numero 3 es: "<<n3<<endl;
						cout<<"El producto de los tres numeros es: "<<n1*n2*n3;
						return 0;
					}
			}
		}			
	return 0;
}