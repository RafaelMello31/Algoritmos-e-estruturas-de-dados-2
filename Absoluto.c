/**********************************************************

Exercício 2 29/08 - valor de X

Rafael Mello

*********************************************************/
#include <stdio.h>


float absoluto (float x) {
    if (x<0) x= (-1)*x;
    return x;
}

int main() {
    
    float x = 10; 
    
    printf ("O valor de X = %f", abs(x));
    
    return 0;

}


