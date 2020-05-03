#include <iostream>
using namespace std;
int main(){
    long t1=1,t2=2,aux,suma=2;
    do{
        aux=t1;
        t1=t2;
        t2=aux+t1;
        if (t2%2==0)
            suma+=t2;
    }while(t2<4000000);
    cout<<suma;
}