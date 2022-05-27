#include <iostream>
using namespace std;

class CreditCard {

public:
int Number;
int Balance;

CreditCard(int m, int n) {
Number = m;
Balance = n;
}
};

void Transfer(CreditCard C1, CreditCard C2, int v) {
if (C1.Balance < v) {
cout << "Недостаточный баланс! \n" ;
}
else if (C1.Number == C2.Number) {
cout << "Ошибка! Номера карт совпадают \n" ;
}
else {
int money1 = C1.Balance - v;
int money2 = C2.Balance + v;
cout << "Успешно. Остатки на картах: (1) " << money1 << ", (2) " << money2 << '\n';
}
}

int main()
{
CreditCard Alpha(2345, 180);
CreditCard Bravo(1732, 50);
CreditCard Gamma(1732, 15);

Transfer(Bravo, Alpha, 60); // Недостаточный баланс!
Transfer(Bravo, Gamma, 10); // Ошибка! Номера карт совпадают
Transfer(Bravo, Alpha, 30); // Успешно. Остатки на картах: (1) 20, (2) 210

return 0;
}
