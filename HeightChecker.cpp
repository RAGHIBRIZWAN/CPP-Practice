#include <iostream>
#include <vector>
#include <cstdlib>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> heights = {5,1,2,3,4};
    vector<int> ans = heights;
    sort(ans.begin(),ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    

    int count = 0;

    for (int i = 0; i < heights.size(); i++)
    {
        if (heights[i] != ans[i])
        {
            count++;
        }
    }

    cout<<count;
}