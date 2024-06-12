#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,1,1,1,0,1,1,1,1,1};
    int count = 0;
    vector<int> ans;
    int final = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        if(nums[i] != 1){
            ans.push_back(count);
            count = 0;
        }
    }
    ans.push_back(count);
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] > final)
        {
            final = ans[i];
        }
        
    }
    cout<<final;
}