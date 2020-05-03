#include<iostream>
#include<math.h>
using namespace std;
bool ConsultaPrimo(long i);
int main(){
	int nprimo=10001,act=0;
	long primo=0;
	while (act!=nprimo)
		if (ConsultaPrimo(++primo)) 
            act++;
	cout<<"El primo numero 10001 es el: " <<primo;
	return 0;
}
bool ConsultaPrimo(long i){
    if (i%2==0)
        return false;
    else{
        for(int y=3; y<=sqrt(i); y+=2)
            if(i % y == 0)
                return false;
        return true;
    }
}