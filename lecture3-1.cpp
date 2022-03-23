#include <stdio.h>

int main()
{
    int A,B;
    int f=0;
    printf("Введите число A: ");
    scanf ("%d" , &A);
    printf("Введите число B: ");
    scanf ("%d" , &B);
    FILE *output;
    output = fopen ("output","w");
    for (int i=A; i<=B; i++){
        f=i*3;
        fprintf (output, "%d\n",f);
    }
    fclose(output);
    return 0;
}
