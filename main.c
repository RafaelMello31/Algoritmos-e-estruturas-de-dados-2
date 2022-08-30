/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
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


int main() {
    
    int i, id1, id2, dif;
    
    id1 = leIdade();
    id2 = leIdade();
    dif = id1-id2;
    
    if (id1>id2) {
    printf ("Diferença entre as idades é de: %d", dif);
    }
    else {
        dif = dif * -1;
        printf ("Diferença entre as idades é de: %d", dif);
    }
    
    return 0;
   
   }
