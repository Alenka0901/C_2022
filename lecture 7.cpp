#include <iostream>
using namespace std;

class Bucket{
    public:
    int volume;
    int used;
    
        Bucket (int n, int m){
      volume=n;
      used=m;
    }
 int fill (int v){
     if (volume <= v+used){
         int m = used;
         used = volume;
         return v-(volume-m);
     }
     else
     {
         used=v;
     }
     return 0;
 }
 void flush(){
     used =0;
 }
};
int main (){
 Bucket test_01(12, 3);
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n";

    int rest = test_01.fill(14);
    cout << "2) " << test_01.used << ", " << rest << "\n";
    
    test_01.flush();
    rest = test_01.fill(8);
    cout << "3) " << test_01.used << ", " << rest << "\n";   
}
