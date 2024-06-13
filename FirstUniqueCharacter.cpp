#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "aabb" ;
        bool check;
        int ans = -1;

        for (int i = 0; i < s.length(); i++)
        {
            check = true;
            for (int j = 0; j < s.length(); j++)
            {
                if (i != j && s[i] == s[j])
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
