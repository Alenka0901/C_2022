#include <iostream>
using namespace std;
void Month(int a){
    char numbers[12][18] = {"январь", "февраль", "март", "апрель", "май", "июнь", "июль", "август", "сентябрь", "октябрь","ноябрь","декабрь"};
    cout << numbers[a-1] << endl;
}
int main()
{
 int a;
    cout << "Введите номер месяца от 1 до 12: ";
    cin >> a;
    Month(a);
 return 0;
