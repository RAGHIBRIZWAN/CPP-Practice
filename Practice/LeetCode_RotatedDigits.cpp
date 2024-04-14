#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        bool carry = false;
        while (num > 0)
        {
            int digit = num % 10;
            num /= 10;
            if (digit == 2 || digit == 5 || digit == 6 || digit == 9)
            {
                carry = true;
            }
            else if (digit == 3 || digit == 4 || digit == 7)
            {
                carry = false;
                break;
            }
        }
        if (carry)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
