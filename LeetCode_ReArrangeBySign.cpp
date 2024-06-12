#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    int temp = 0;
    vector<int> pos, neg, ans;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            pos.push_back(nums[i]);
        }
        else if (nums[i] < 0)
        {
            neg.push_back(nums[i]);
        }
    }

    for (int i = 0; i < nums.size()/2; i++)
    {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }
    
    

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}