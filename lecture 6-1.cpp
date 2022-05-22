#include <iostream>
using namespace std;

void reverse (char *a);

int main()
{
    char text[] = "test string" ;
    char m[] = "It is a very good day";
    reverse (text);
    reverse (m);
    return 0;
}
void reverse (char *a)
{
    if(*a)
      reverse (a+1);
    else 
    return;
    cout << *a;
}
