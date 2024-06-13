#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main()
{
    int a = 0,n = 13,b = 0,count = 0;

    a = factorial(n);
    cout<<a<<endl;

    while (a > 0)
    {
        b = a % 10;
        if(b == 0){
            count++;
        }
        else{
            break;
        }
        a /= 10;
    }
    cout<<count;
    
    //MAGIC CODE

        for (int i = 5; n / i > 0; i *= 5) {
            count += n / i;
        }
        cout<<count;
}