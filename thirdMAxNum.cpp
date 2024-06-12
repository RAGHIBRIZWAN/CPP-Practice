#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2};
    sort(nums.begin(), nums.end(), greater<int>());

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            nums.erase(nums.begin() + i);
            i--;
        }
    }

    if (nums.size() == 2)
    {
        return nums[0];
    }

    if (nums.size() == 1)
    {
        return nums[0];
    }

    return nums[2];
}