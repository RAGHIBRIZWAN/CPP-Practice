#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,2};
    int k = 3;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && abs(i - j) <= k)
            {  
                cout<<"true";
               return 0;
            }  
        }
    }
        cout<<"False";
    
}
