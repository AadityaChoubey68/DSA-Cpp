#include <iostream>
using namespace std;

void subsequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    subsequence(arr, index + 1, n, ans, temp);
    temp.push_back(arr[index]);
    subsequence(arr, index + 1, n, ans, temp);
}

void SumSubsequence(int arr[], int index, int n, vector<int> &ans, int sum = 0)
{
    if (index == n)
    {
        ans.push_back(sum);
        return;
    }
    SumSubsequence(arr, index + 1, n, ans, sum);
    sum += arr[index];
    SumSubsequence(arr, index + 1, n, ans, sum);
}

void subset(string &s, int index, int n, vector<string> &ans, string &temp)
{
    if (index == s.size())
    {
        ans.push_back(temp);
        return;
    }
    subset(s, index + 1, n, ans, temp);
    temp.push_back(s[index]);
    subset(s, index + 1, n, ans, temp);
    temp.pop_back();
}

void combination(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &temp)
{
    if (target == 0)
    {
        ans.push_back(temp);
    }
    if (target > 0)
    {
        return;
    }
    for (int i = 0; i < candidates.size(); i++)
    {
        temp.push_back(candidates[i]);
        combination(candidates, target - candidates[i], ans, temp);
        temp.pop_back();
    }
}

int main()
{
    int arr[] = {3, 6, 5, 4};
    int target = 11;
    vector<int> arrr = {3, 6, 5, 4};
    vector<vector<int>> ans;
    vector<int> sumAns;
    vector<int> temp;
    combination(arrr, target, ans, temp);
    // subsequence(arr, 0, 4, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    // cout << "Now sum";
    // SumSubsequence(arr, 0, 4, sumAns);
    // for (int j = 0; j < sumAns.size(); j++)
    // {
    //     cout << sumAns[j] << " ";
    // }

    // string s = "abc";
    // vector<string> ans; // final answer
    // string temp;
    // subset(s, 0, s.size(), ans, temp);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << endl;
    // }
}