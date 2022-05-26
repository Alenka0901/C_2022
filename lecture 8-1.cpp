#include <iostream>
using namespace std;

class CreditCard{
    public:
    int number;
    float balance;
    
    
    CreditCard( int m,float n){
        number = m;
        balance = n;
    }
    float PUT(float v){
        float number;
        return balance=balance+v;
    };
    float TAKE(float v){
        float number;
        return balance=balance-v;
    };
};
int main()
{
    
    CreditCard firstCC(1234, 50), *money;
    money = &firstCC;
    cout << money -> PUT(925) << "$, пополнение баланса \n";
    cout << money -> TAKE(258.96) << "$, снятие денег";

    return 0;
}
