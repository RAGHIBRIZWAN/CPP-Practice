#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    vector<int> nums = {-4, -2, 1, 4, 8};

    if (nums.empty())
    {
        cout << "Array is empty" << endl;
        return 0;
    }

    int ans = nums[0];

    for (int i = 1; i < nums.size(); ++i)
    {
        if (abs(nums[i]) < abs(ans) || (abs(nums[i]) == abs(ans) && nums[i] > ans))
        {
            ans = nums[i];
        }
    }

    cout << "The number closest to zero is: " << ans << endl;
    return 0;
}
