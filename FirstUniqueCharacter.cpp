#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "loveleetcode";
    bool check;
    int ans = 0;

    for (int i = 0; i < s.length()-1; i++)
    {
        check = true;
        for (int j = 1; j < s.length()-1; j++)
        {
            if (i != j && s[i] == s[j])
            {
                check = false;
                break;
            }
            else
            {
                continue;
            }
        }
        if (check)
        {
            ans = i;
            break;
        }
    }
    cout << ans;
}