#include <stdio.h>

int main()
{ 
    int s =0;
    int a=1;
    while (a<1000){
        if (a%7 == 0){
           s=s+a; 
        } 
         a=a+4;
    }
    printf(" %d", s);

    return 0;
}
