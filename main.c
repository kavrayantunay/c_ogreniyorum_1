/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int bugun, dogumtarihi;
    printf("Bugünün tarihini giriniz:");
    scanf("%d", &bugun);
    printf("Doğum tarihinizi giriniz:");
    scanf("%d", &dogumtarihi);
    printf("yaşınız: %d", bugun-dogumtarihi);
    
}
