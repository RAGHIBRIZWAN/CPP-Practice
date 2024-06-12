#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};
    vector<int> output;
    vector<int> remaining;

    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = 0; j < arr1.size(); j++)
        {
            if (arr2[i] == arr1[j])
            {
                output.push_back(arr1[j]);
            }
        }
    } 

    for (int i = 0; i < arr1.size(); i++) {
        if (find(output.begin(), output.end(), arr1[i]) == output.end()) {
            remaining.push_back(arr1[i]);
        }
    }

    sort(remaining.begin(), remaining.end());

    for (int i = 0; i < remaining.size(); i++)
    {
        output.push_back(remaining[i]);
    }
    
     

    for (int i = 0; i < output.size(); i++)
    {
        cout<<output[i]<<",";
    }
    
    
}