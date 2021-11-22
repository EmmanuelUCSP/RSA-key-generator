#include<iostream>
#include<math.h>
 
using namespace std;
 
//gcd
int gcd(int a, int h)
{
    int temp;
    while(1)
    {
        temp = a%h;
        if(temp==0) return h;
        a = h;
        h = temp;
    }
}


//RSA
void RSA(double p, double q, double msg)
{
    //2 numeros primos aleatorios
    double n=p*q;
    double count;
    double fi_n = (p-1)*(q-1);
 
    //calve publica // encriptar en "e"
    double e=2;
 
    //for checking co-prime which satisfies e>1
    while(e<fi_n){
        count = gcd(e,fi_n);
        if(count==1) break;
        else e++;
    }
 
    //clave privada // decrifrar en "d"
    double d;
    double k = 2; // k puede ser cualquier valor arbitrario
 
    d = (1 + (k*fi_n))/e; //( d*e = 1 + k * fi_n )

    double c = pow(msg,e);    
    double m = pow(c,d);
    c=fmod(c,n);              
    m=fmod(m,n); 
 
    cout<<"Mensaje: "<<msg<<endl;
    cout<<"p = "<<p<<"   q = "<<q<<"   n = "<<n<<"\n"<<endl;

    cout<<"φ(n) = "<<fi_n<<"   e = "<<e<<"   d = "<<d<<"\n"<<endl;
    
    cout<<"Mensaje Original = "<<m<<endl;
    cout<<"Mensaje Encriptado = "<<c<<"\n"<<endl;
}
 
 //funcion principal
int main()
{
    double p = 3;
    double q = 11;
    double msg = 12;

    RSA(p, q, msg);
 
    return 0;
}