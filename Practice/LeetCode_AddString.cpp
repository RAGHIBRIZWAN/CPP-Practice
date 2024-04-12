#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string a = "11",b = "123";
    int ans = 0;
    int num1 = stoi(a);
    int num2 = stoi(b);

    ans = num1 + num2;

    string c = to_string(ans);

    cout<<c;
}
