#include <stdio.h>

int main()
{
    int f;
    FILE *output;
    output = fopen ("output","r");
    for (int i=0; i<=5; i++){
        fscanf (output, "%d\n", &f);
        printf ("%d\n", f);
    }
    fclose(output);
    return 0;
}
