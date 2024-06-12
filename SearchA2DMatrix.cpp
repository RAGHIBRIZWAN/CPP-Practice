#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}