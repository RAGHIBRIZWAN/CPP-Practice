#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {5, 25, 75};
    int target = 100;
    vector<int> output;
    bool check = false;
    int i = 0, j = 1;

    while (i < numbers.size() - 1)
    {
        if (i != j && numbers[i] + numbers[j] == target)
        {
            output.push_back(i + 1);
            output.push_back(j + 1);
            check = true;
            break;
        }
        else if (j == numbers.size() - 1)
        {
            i++;
            j = i + 1;
        }
        else
        {
            j++;
        }
    }

    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << ",";
    }

    return 0;
}
