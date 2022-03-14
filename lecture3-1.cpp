#include <iostream>
using namespace std;

int main()
{ 
    int A, B, s;
    
    cout << "Введите число A";
    cin >> A;
     cout << "Введите число B";
     while (1){
     cin >> B;
     if (B<=A){
         cout << "Введите число B больше A";
         continue;
     }
     
         for (int i = A; i!=B; i++){
             s=i*3;
             cout <<s<< "\n";
         }
         break;
     }
    
    return 0;
}
