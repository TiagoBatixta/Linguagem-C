#include <stdio.h>
#include <string.h>

//Código para gerar o digite verificador de conta

int dv(int n) {
    int a = 1, digi, c = 0, b=0, d;

    while(d != 0){
        b = n/a;
        d = b%10;
        a = a*10;
        c = c+d;
        //printf("Valor: %d, Resto %d\n",b,d);
    }
    digi = c%10;
    //printf("Soma: %d\n",c);
    //printf("|Conta %07d-%d|\n", n,digi);
   return digi;
}

int main(void){
    int n1 = 7314, n2 = 972563;
    printf("|Conta %07d-%d|\n", n1, dv(n1));
    printf("|Conta %07d-%d|\n", n2, dv(n2));
return 0;
}
