#include <iostream>
using namespace std;

int SquaredSum(int a, int b);

int main(){
SquaredSum(12, 6);
SquaredSum(12, -6);
return 0;
}

int SquaredSum(int a,int b){
cout << (a+b)*(a+b) << "\n";

return 0;
}
