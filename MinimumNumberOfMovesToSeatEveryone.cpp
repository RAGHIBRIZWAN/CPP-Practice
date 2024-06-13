#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> seats = {3,1,5};
    vector<int> students = {2,7,4};
    int n = 0,count = 0,sum = 0;

    sort(seats.begin(),seats.end());
    sort(students.begin(),students.end());

    for (int i = 0; i < seats.size(); i++)
    {
        sum += abs(seats[i] - students[i]);
    }
    
    cout<<sum;
}