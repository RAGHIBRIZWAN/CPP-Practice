#include <iostream>
using namespace std;

int main()
{
    string s = "a", t = "aa";
    char c = 0;

    if (t.size() < s.size())
    {
        return 0;
    }

    for (int i = 0; i < t.size(); i++)
    {
        bool match = false;
        for (int j = 0; j < s.size(); j++)
        {
            if (t[i] == s[j])
            {
                match = true;
                s.erase(s.begin() + j);
                break;
            }
        }
        if (!match)
        {
            c = t[i];
            break;
        }
    }

    if (s.empty())
    {
        c = t.back();
    }

    cout << c;
}
