#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> num1 = {1,3};
    vector<int> num2 = {2,4};
    vector<int> merge;
    double num;
    int med;

    for (int i = 0; i < num1.size(); i++)
    {
        merge.push_back(num1[i]);
    }
    for (int i = 0; i < num2.size(); i++)
    {
        merge.push_back(num2[i]);
    }

    sort(merge.begin(),merge.end());

    med = merge.size() / 2;

    if (merge.size() % 2 != 0)
    {
        num = merge[med];
    }
    else if(merge.size() % 2 == 0){
        num = (merge[med] + merge[med - 1])/2.00;
    }

    cout<<num;
}