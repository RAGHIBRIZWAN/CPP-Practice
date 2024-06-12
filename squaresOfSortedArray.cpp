#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {-4,-1,0,3,10};
    long long pick = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = nums[i]*nums[i];
    }

    sort(nums.begin(),nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<",";
    }
    
    
}