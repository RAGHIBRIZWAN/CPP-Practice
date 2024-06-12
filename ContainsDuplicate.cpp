#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 3};

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i] == nums[i+1])
        {
            cout << "true";
            return 0;
        }
    }
    cout << "False";
}