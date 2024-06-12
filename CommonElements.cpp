#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num1 = {4, 9, 5};
    vector<int> num2 = {9, 4, 9, 8, 4};
    vector<int> result;
    int size;

    for (int i = 0; i < num1.size(); i++)
    {
        for (int j = 0; j < num2.size(); j++)
        {
            if (num1[i] == num2[j])
            {
                bool exists = false;
                for (int k = 0; k < result.size(); k++)
                {
                    if (result[k] == num1[i])
                    {
                        exists = true;
                        break;
                    }
                }
                if (!exists)
                {
                    result.push_back(num1[i]);
                }
                break;
            }
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}