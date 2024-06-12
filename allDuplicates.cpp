#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ans;
    sort(nums.begin(),nums.end());

    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i] == nums[i+1])
        {
            ans.push_back(nums[i]);
        }
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
     
}