#include <iostream>
using namespace std;

void print (int i);
void print (float n);
void print (char a);
void print (int v, int j);

int main()
{
  print (5);
  print (7);
  print ('a');
  print (9,8);
  
    return 0;
}
void print (int i)
{
    cout << i;
}
void print (float n)
{
    cout << n;
}
void print (char a)
{
    cout << a;
}
void print (int v, int j)
{
    cout << v;
    cout << j;
}
