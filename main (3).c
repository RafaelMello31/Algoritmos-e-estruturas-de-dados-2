/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int leIdade () {
    
    int i;
    printf ("Digite uma idade:");
    scanf ("%d", &i);
    
    while (i<0 || i>110) {
         printf ("Idade invalida, digite novamente");
         scanf ("%d", &i);
    }

    return i;
}

int absoluto (float x) {
    if (x<0) x= (-1)*x;
    return x;
}

int main() {
    
    int i, id1, id2, dif;
    
    id1 = leIdade();
    id2 = leIdade();
    dif = id1-id2;
    
   printf("Diferença: %d",absoluto(dif));
   return 0;
   
   }


