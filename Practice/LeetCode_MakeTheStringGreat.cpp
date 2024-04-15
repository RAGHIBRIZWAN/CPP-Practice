#include <iostream>
using namespace std;

int main()
{
    string s = "hvH";

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++) 
        {
            if (abs(s[i] - s[j]) == 32 || abs(s[j] - s[i]) == 32)
            {
                s.erase(s.begin() + j);
                s.erase(s.begin() + i);
                i-=2;
                if (i < 0) i = -1;
                break; 
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}
