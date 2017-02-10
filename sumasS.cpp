
#include<conio.h>
#include<stdio.h>
#include"iostream"
#include <math.h>
using namespace std;
int sumaS(int a,int b){
	int c=0;
	
		for(int i=0;i<b;i++)
		{
			c=c+a;
	    }
		    return c;
			
}
int potencia(int a,int b)
 {
 	int c=a;
 	
 	for(int i=1;i<b;i++)
 	{
	 
 	 c=sumaS(c,a);
    }
 	 return c;
 }

 int fact(int a){
 	int f=1;
 		for(int i=a;i>1;i--)
      	{
 	 		f=sumaS(f,i);
      	}
 	 return f;
 }
 int division(int a,int b){
 	  int r=0;
 	  
 	 while(a >= b) {
 	  a=a-b;
 	  r++;
     }
 	  return r;
 }
 double polinomio(int x,int n)
{
    int a=n;
    int k[n+1];
    double r=0;
    for(int i=0;i<=n;i++)
    {
    cin>>k[i];
    }
    for(int i=0;i<=n;i++)
    {
            r=r+(k[i]*(pow(x,a)));
            a--;
    }
    return r; 
}
 int main(){
 	int a,b,k;
 	printf("digite el el primer numero:\n ");
 	scanf("%d",&a);
 	printf("digite el segundo numero: \n");
 	scanf("%d",&b);
    printf("el resultado de la operacion es:%d \n",sumaS(a,b));
    printf("el resultado de la potencia  es:%d \n",potencia(a,b));
    printf("el resultado de el factorial  es: %d \n",fact(a));
    printf("el resultado de la division  es:%d \n",division(a,b));
    printf("inserte los datos del polinomio:\n");
    printf("el resultado de el polinomio   es:%d \n",polinomio(a,b));
    return 0;
 }
 
 
 
