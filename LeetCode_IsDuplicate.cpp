#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // vector<int> nums = {1,2,3,3};

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < nums.size(); j++)
    //     {
    //         if (nums[i] == nums[j] && i!= j)
    //         {
    //             cout<<"true";
    //             return 0;
    //         }
            
    //     }
        
    // }
    // cout<<"False";

    vector<int> nums = {1,2,3,2};
    sort(nums.begin(),nums.end());

    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i] == nums[i+1])
        {
            cout<<"true";
            return 0;
        }
        
    }
    cout<<"false";
}