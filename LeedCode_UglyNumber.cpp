#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 6;
    bool ans = false;

    if(n <= 0){
        ans = false;
        cout<<"Not Ugly";
        return 0;
    }
    if (n == 1)
    {
        ans = true;
        cout<<"Ugly";
        return 0;
    }

    else
    {
        for (int i = 2; i <= 5; i++)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            if (n == 1)
            {
                ans = true;
            }
        }
    }
    if (ans)
    {
        cout << "Ugly";
    }
    else
    {
        cout << "Not Ugly";
    }
}
