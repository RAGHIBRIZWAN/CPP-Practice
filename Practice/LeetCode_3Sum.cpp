#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> nums = {-2,0,1,1,2};
    vector<vector<int>> ans;
    int a = nums.size() - 1;
    for (int i = 0; i < a - 1; i++)
    {
        int j = i + 1;
        int k = j + 1;
        while (j < a && k < nums.size())
        {
            if (nums[i] + nums[j] + nums[k] == 0 && i != j && j != k && i != k)
            {
                ans.push_back({nums[i], nums[j], nums[k]});
            }
            k++;
            if (k == a+1)
            {
                j++;
                k = j + 1;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        sort(ans[i].begin(), ans[i].end());
    }

    sort(ans.begin(), ans.end());

    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
