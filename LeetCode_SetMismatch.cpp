#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,2,4};
    vector<int> ans;
    sort(nums.begin(),nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == i+1)
        {
            if (nums[i] == nums[i+1])
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[i]+1);
                break;
            }
            
        }
        else if(nums[i] != i+1){
            ans.push_back(nums[i]);
            ans.push_back(nums[i]-1);
            break;
        }
        
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}