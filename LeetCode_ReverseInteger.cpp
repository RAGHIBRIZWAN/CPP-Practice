#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // int num = 153;
    // string b = to_string(num);
    // int i = 0;
    // int j = b.size()-1;

    // while (i < j)
    // {
    //     if (b[i] == '-')
    //     {
    //         i++;
    //     }
        
    //     int temp = b[i];
    //     b[i] = b[j];
    //     b[j] = temp;

    //     i++;
    //     j--;
    // }


    // int c = stoi(b);
    
    // cout<<c;

    long long num1 = 123456789101112;
    int a;
    string b;
    string num2;
    int ans;
    while(num1>0){
        a = num1%10;
        num1 /= 10;
        num2 += to_string(a);
        ans = stoi(num2);
    }
    cout<<ans<<endl;
}