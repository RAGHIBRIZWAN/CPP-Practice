#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1,5,9},{10,11,13},{12,13,15}};
    int k = 8;
    vector<int> output;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            output.push_back(matrix[i][j]);
        }
    }
    
    for (int i = 0; i < output.size(); i++)
    {
        cout<<output[i]<<",";
    }
    
    sort(output.begin(),output.end());

    cout<<endl;
    cout<<output[k-1];
    
}