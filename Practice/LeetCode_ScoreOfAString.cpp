#include <iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int main()
{
    string s = "hello";
    vector<int> output;
    int ans = 0,add = 0;

    for (int i = 0; i < s.size()-1; i++)
    {
        add = abs(s[i] - s[i + 1]);
        cout<<add<<endl;
        output.push_back(add);
    }

    for (int i = 0; i < output.size(); i++)
    {
        ans += output[i];
    }

    cout<<ans;
    
}
