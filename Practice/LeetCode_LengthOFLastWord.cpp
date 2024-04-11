#include <iostream>
using namespace std;

int main()
{
    string s = "Fly me to the moon  ";
    int count1 = 0;
    int count2 = 0;
    for (int j = s.size() - 1; j >= 0; j--)
    {
        if (s[j] == ' ')
        {
            count2++;
        }
        else
        {
            break;
        }
    }
    for (int i = s.size() - 1- count2; i >= 0; i--)
    {

        if (s[i] != ' ')
        {
            count1++;
        }
        else
        {
            break;
        }
    }

    cout << count1;
}
