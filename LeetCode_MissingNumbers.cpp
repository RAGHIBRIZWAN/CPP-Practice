#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> nums = {3,0,1};
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] != i)
        {
            return i;
        }
    }

    return nums.size();
}
