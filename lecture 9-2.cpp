#include <iostream>
using namespace std;

class CreditCard{
    public:
    int balance;
    int number;
CreditCard(int m, int n){
number = m;
balance = n;
}
CreditCard operator + (CreditCard &C1){
this -> balance = C1.balance + this -> balance;
C1.balance = 0;
return *this;
}
};

  int main() {
CreditCard C1(7896, 200);
CreditCard C2(1252, 50);
C1 = C1 + C2;
cout << C1.balance << " : " << C2.balance << '\n';

C2 = C2 + C1;
cout << C1.balance << " : " << C2.balance << '\n';
return 0;
}
