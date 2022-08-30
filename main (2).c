#include <stdio.h>

int main()
{
    int a, b, soma=0, i=1;
    
    printf("Entre com o primeiro valor: \n");
    scanf("%d", &a);
    printf("Entre com o segundo valor: \n");
	scanf("%d", &b);
    
    if(a<b) {
        while (a<=b) {
            soma=soma+a;
            a=a+i;
                     }
            }
          
    else if (b<a) {
        while (b<=a) {
            soma=soma+b;
            b=b+i;
                     }  
              }
    else { 
    soma = a+b;
    }
    
	printf("Valor da soma: %d", soma);

    return 0;
}