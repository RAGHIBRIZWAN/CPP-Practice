#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> dictionary = {"cat", "bat", "rat"};
    string sentence = "the cattle was rattled by the battery";
    string dic;
    int count = 0;

    for (int i = 0; i < dictionary.size(); i++)
    {
        dic = dictionary[i];
        for (int j = 0; j < dic.size(); j++)
        {
            for (int k = 0; k < sentence.size(); k++)
            {
                if (dic[j] == sentence[k])
                {
                    ++count;
                    break;
                }
                if (count == dic.size() && sentence[k] != ' ')
                {
                    sentence.erase(sentence.begin() + k);
                    --k;
                }
                if (count == dic.size() && sentence[k] == ' ')
                {
                    break;
                }
            }
        }
    }

    for (int i = 0; i < sentence.size(); i++)
    {
        cout << sentence[i];
    }
}