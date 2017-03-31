#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()

{
    int x=0;
    int h=0;
    int m=0;
    int s=0;
    int dh=0;
    int dm=0;
    int ds=0;
 printf("digite a hora");
    scanf("%dh", &dh);
 printf("digite o minuto");
    scanf("%dm", &dm);
 printf("digite o segundo");
    scanf("%ds", &ds);
loop:
    Sleep(1000);
    if (s==60) {s=0; m++;}
    if (m==60) {h++; m=0;}
    if (h==24) {h=0;}
    printf("\r       hora:  %2dh   %2dm  %2ds                       ", h, m, s);
    s++;
        if (h==dh && m==dm && s==(ds + 1))
            x++;
             if (x>0 && x <=10) {
            printf("\n      acorda!!!" );
            x++;
        }
    goto loop;
    return 0;
}
