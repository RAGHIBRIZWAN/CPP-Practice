#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1,1,1,2,2,3};
    vector<int> answer;
    int k = 2;
    int ans = nums[0],count = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if(nums[i] == ans){
            count++;
        }
        else if(nums[i] != ans){
            ans = nums[i];
            answer.push_back(count);
            count = 1;
        }
    }
    answer.push_back(count);

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i+1])
        {
            nums.erase(nums.begin()+i);
            --i;
        }
        
    }
    

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = i + 1; j < answer.size(); j++)
        {
            if (answer[i] < answer[j])
            {
                swap(answer[i], answer[j]);
                swap(nums[i], nums[j]);
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << endl;
    }

}
