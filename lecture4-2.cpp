#include <iostream>
using namespace std;
int main ()
{
  char i[28];
  char *n;
  cin >> i;
  n=i;
  while (*n){
    (*n)++;
    n++;
  }
  cout << i;
  return 0;
}
  
