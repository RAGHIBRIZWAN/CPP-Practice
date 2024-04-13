#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums= {1,2,3,4};
    int k = 34;
    string num1;
    for (int i = 0; i < nums.size(); i++)
    {
        num1 += to_string(nums[i]);
    }

    int num2 = stoi(num1);

    num2 += k;

    string num3 = to_string(num2);

    nums.clear();

    for (int i = 0; i < num3.length(); i++)
    {
        nums.push_back(num3[i] - '0');
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
     
}
