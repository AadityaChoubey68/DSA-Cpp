#include <iostream>
using namespace std;

int subset(int arr[], int index, int sum, int n) // Perfect Sum
{
    if (index == n)
    {
        return sum == 0;
    }
    return subset(arr, index + 1, sum, n) + subset(arr, index + 1, sum - arr[index], n);
}

int sumSubset(int arr[], int index, int sum, int n) // Target Sum Repeat
{
    if (index == n || sum < 0)
    {
        return sum == 0;
    }
    return sumSubset(arr, index + 1, sum, n) + sumSubset(arr, index, sum - arr[index], n);
}

void N_bitBinary(vector<string> &ans, int n, string temp, int count1, int count0)
{
    if (temp.size() == n)
    {
        ans.push_back(temp);
        return;
    }
    N_bitBinary(ans, n, temp + "1", count1 + 1, count0);
    if (count1 > count0)
    {
        N_bitBinary(ans, n, temp + "0", count1, count0 + 1);
    }
}

int main()
{
    vector<string> ans;
    N_bitBinary(ans, 4, "", 0, 0);
    for (auto &s : ans)
    {
        cout << s << endl;
    }
}