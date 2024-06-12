#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;

int main(){
    string num1 = "401716832807512840963",num2 = "167141802233061013023557397451289113296441069";
    unsigned long long int ans = 0,a,b;
    istringstream(num1) >> a;
    istringstream(num2) >> b;

    ans = a + b;

    string c = to_string(ans);

    cout<<c;
}