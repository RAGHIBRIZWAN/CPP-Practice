#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {5, 2, 6, 1};
    vector<int> ans;
    int count = 0, i = 0, j = i+1;

    while (i < nums.size())
    {
        if (nums[i] > nums[j])
        {
            count++;
        }
        if (j < nums.size())
        {
            j++;
        }
        if (j == nums.size())
        {
            ans.push_back(count);
            i++;
            j = i+1;
            count = 0;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}