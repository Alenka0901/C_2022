#include <iostream>
using namespace std;

int Sort(int *a, int n){
int g;
    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (a[j] < a [j + 1]) {
        g = a[j];
        a[j] = a[j + 1];
        a[j + 1] = g;
        }
}
}

return 0;
}

int main(){
int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    Sort (a, 10);
    for (int i=0; i<10; i++){
    cout << a[i] << " ";
}
return 0;
}
