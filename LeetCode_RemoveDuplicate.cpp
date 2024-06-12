#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                nums.erase(nums.begin() + j);
                j--;
            }
        } 
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<endl;
    }
    cout<<"K: "<<nums.size();
    
}