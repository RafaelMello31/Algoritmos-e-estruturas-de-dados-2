/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
