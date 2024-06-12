#include <iostream>
using namespace std;

int main()
{
    string a = "11", b = "1";
    string result;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i >= 0){
            carry += a[i] - '0';
            i--;
        }
        if (j >= 0){
            carry += b[j] - '0';
            j--;
        }
        result = to_string(carry % 2) + result;
        carry /= 2;
    }
    cout<<result<<endl;
}