#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> mat = {{10,20,15},{21,30,14},{7,16,32}};
    vector<int> output;
    int check1 = 0;
    bool ans = false;

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] > check1)
            {
                check1 = mat[i][j];
            }
        }        
    }

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == check1)
            {
                output.push_back(i);
                output.push_back(j);
                ans = true;
                break;
            }    
        }
        if (ans)
        {
            break;
        }
    }

    for (int i = 0; i < output.size(); i++)
    {
        cout<<output[i]<<endl;
    }
    
}
