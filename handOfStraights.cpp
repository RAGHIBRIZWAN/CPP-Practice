#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 6, 2, 3, 4, 7, 8};
    int groupSize = 3;
    bool ans;

    if (nums.size() % groupSize != 0)
    {
        cout << "Not possible";
        return 0;
    }

    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i] < nums[i+1])
        {
            continue;
        }
        else{
            return false;
        }
    }
    
    
    sort(nums.begin(),nums.end());
    
    ans = true;
    cout << "True";

    return 0;
}