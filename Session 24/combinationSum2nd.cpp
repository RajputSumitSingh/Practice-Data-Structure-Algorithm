// Leetcode : 40. Combination Sum II
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void solve(vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &output, int index)
{
  // base case
  if (target == 0)
  {
    ans.push_back(output);
    return;
  }
  if (target < 0 || index > arr.size())
  {
    return;
  }

  for (int i = index; i < arr.size(); i++)
  {
    // special condition for filter the duplicate without using map.
    // special condition for without using set.
    if (i > index && arr[i] == arr[i - 1])
      continue;

    if (arr[i] > target)
    {
      break;
    }

    output.push_back(arr[i]);
    solve(arr, target - arr[i], ans, output, i + 1);
    output.pop_back();
  }
}

int main()
{
  vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
  int target = 8;
  vector<vector<int>> ans;
  vector<int> output;
  int index = 0;

//for sorting the current array.
   sort(arr.begin(), arr.end());

  solve(arr, target, ans, output, index);

  cout << "[ ";
  for (int i = 0; i < ans.size(); i++)
  {
    cout << "[ ";
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << ", ";
    }
    cout << "]";
  }
  cout << "]";

  return 0;
}