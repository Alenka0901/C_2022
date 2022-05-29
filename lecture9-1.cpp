#include <iostream>
using namespace std;

class masiv{
    public:
    string txt;
    masiv (string a){
    txt = a;
    cout << txt << '\n';
}
masiv operator ++(){
    for(int o = 0; o<100; o++){
    txt[o] = txt[o] + 1;
}
cout << txt << '\n';
return *this;
}

masiv operator --(){
    for (int o = 0; o<100; o++){
    txt[o] = txt[o] - 1;
}
cout << txt << '\n';
return *this;
}
};

    int main(){
    masiv text ("abc123");
    ++text;
    --text;

return 0;
}
