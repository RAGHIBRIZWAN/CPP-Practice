#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> ans;
    int first = -1, last = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            first = i;
            break;
        }
    }
  
    for (int j = nums.size() - 1; j >= 0; j--)
    {
        if (nums[j] == target)
        {
            last = j;
            break;
        }
    }

    if (first == -1)
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    else
    {
        ans.push_back(first);
        ans.push_back(last);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i < ans.size() - 1)
            cout << ",";
    }
    cout << endl;

    return 0;
}
