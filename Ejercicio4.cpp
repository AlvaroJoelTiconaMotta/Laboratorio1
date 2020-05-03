#include<iostream>
#include<stdlib.h>
using namespace std;
int digitos(int);
bool esPalindromo(int,int);
int main(){
    int mayor=0,n1,n2;
    for(int i=100;i<1000;i++)
        for (int j=100;j<1000;j++)
            if(esPalindromo(i*j,digitos(i*j)))
                if(i*j>mayor){
                    n1=i;n2=j;
                    mayor=i*j;
                }
    cout<<"El mayor numero palindromo de un producto de dos numeros de tres cifras es: "<<mayor<<" = "<<n1<<" x "<<n2;
}
int digitos(int numero){
    int cont=1;
    while(numero/10!=0){
        cont++;
        numero/=10;
    }
    return cont;
}
bool esPalindromo(int numero,int digitos){
    int *cifras=new int[digitos];
    for (int i=digitos-1;i>=0;i--){
        cifras[i]=numero%10;
        numero/=10;
    }
    for(int j=0;j<digitos;j++)
        if (cifras[j]!=cifras[digitos-j-1])
            return false;
    return true;
}