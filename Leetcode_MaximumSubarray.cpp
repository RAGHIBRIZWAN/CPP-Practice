#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {-2, 1};
    vector<int> sub;
    int sum = 0;
    sort(nums.begin(), nums.end());

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] >= 0)
        {
            sub.push_back(nums[i]);
            // sum = sum + sub[i];
            if (nums[i] == nums[i - 1])
            {
                nums.erase(nums.begin() + i);
                // sum = sum - sub[i];
                i--;
                // continue;
            }
        }
        else
        {
            break;
        }
    }

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] < 0)
        {
            sub.push_back(nums[i]);
            // sum = sum + sub[i];
            // if (sum < 0)
            // {
            // sum = sum - sub[i];
            // }

            break;
        }
    }

    for (int i = 0; i < sub.size(); i++)
    {
        sum += sub[i];
        if (sum < 0)
        {
            sum -= sub[i];
        }
    }

    cout << sum;
}