#include<iostream>
#include<math.h>
using namespace std;
bool ConsultaPrimo(int);
int main(){
    long numero = 600851475143, mayor = 0; 
    for(int x=2; x<=sqrt(numero); x++)
        if(ConsultaPrimo(x))
            if(numero % x == 0)            
                if(x > mayor) 
                    mayor = x;
    cout<<"El factor mayor es: "<<mayor;
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