#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,1,3,5,6,4};
    int ans = 0,output = 0;
    ans = *max_element(nums.begin(),nums.end());
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == ans)
        {
            output = i;
        }
        
    }
    cout<<output;
}