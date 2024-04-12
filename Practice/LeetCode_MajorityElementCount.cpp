#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,1,2,2,2,3,3,3,3,2,2,1,1,1,1};
    vector<int> check;
    int count = 0;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i+1])
        {
            count++;
        }
        else if(nums[i] != nums[i+1]){
            count++;
            check.push_back(count);
            count = 0;
        }
        
    }
    sort(check.begin(),check.end());
    cout<<check[check.size()-1]<<endl;    
}
