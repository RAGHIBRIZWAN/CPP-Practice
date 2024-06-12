#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,3,4,5,5,7};
    int size = nums.size();
    vector<int>ans;

    sort(nums.begin(),nums.end());

    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i] == nums[i+1])
        {
            nums.erase(nums.begin() + i);
            i--;
        }   
    }
    for (int i = 0; i < nums.size()-1; i++)
    {
        if ((nums[i+1] - nums[i]) != 1)
        {
            nums.insert(nums.begin()+i+1,nums[i]+1);
            ans.push_back(nums[i]+1);
        }
    }
    
    if(nums[0] == 1 && size == 2){
        nums.push_back(nums[0]+1);
        ans.push_back(nums[0]+1);
    }
    if(nums[0] == 2 && size == 2){
        nums.push_back(nums[0]-1);
        ans.push_back(nums[0]-1);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<endl;  
    }
}