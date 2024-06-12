#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0, a = 0, sum;
    cin >> n;

    while (n != 1 && n!= 4)
    {
        sum = 0;
        while (n > 0)
        {
            a = n % 10;
            n /= 10;
            sum = sum + (a * a);
        }
        n = sum;
    }

    if (n==1)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
}