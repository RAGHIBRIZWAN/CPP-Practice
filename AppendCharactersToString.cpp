#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "zbc", t = "abc";
    int count = 0;
    int size = t.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (count < size && s[i] == t[count])
        {
            count++;
        }
    }

    int ans = size - count;
    cout << ans;
}