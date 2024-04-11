#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,3,1,-1,3};
    int ans;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                nums.erase(nums.begin() + j);
                nums.erase(nums.begin() + i);
                j--;
                i--;
            }
        }
    }

    for(int i = 0; i < nums.size();i++){
        ans = nums[i];
    }
    
    cout<<ans;

    return 0;
}
