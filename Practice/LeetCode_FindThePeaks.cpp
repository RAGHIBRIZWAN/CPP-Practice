#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> mountain = {1,4,3,8,5};
    vector<int> ans;
    int max = 0, answer = 0;

    for (int i = 1; i < mountain.size()-1; i++)
    {
        if (mountain[i] != mountain[i+1] && mountain[i] > mountain[i+1] && mountain[i] > mountain[i-1] && mountain[i] != mountain[i-1] )
        {
            ans.push_back(i);
        }  
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
}
