#include <iostream>
#include <vector>
using namespace std;

void solve(int *arr, int size, vector<vector<int>> &ans, vector<int> output, int index)
{

  // base case
  if (index >= size)
  {
    ans.push_back(output);
    return;
  }

  // exculding
  solve(arr, size, ans, output, index + 1);

  // including
  int element = arr[index];
  output.push_back(element);
  solve(arr, size, ans, output, index + 1);
}

int main()
{
  int arr[] = {1, 2, 3};
  vector<vector<int>> ans;
  vector<int> output;
  int size = 3;
  int index = 0;

  solve(arr, size, ans, output, index);

  cout << "{";
  for (int i = 0; i < ans.size(); i++)
  {
    cout << "{";
    for (int j = 0; j < ans[i].size(); j++)
    {
      cout << ans[i][j] << ",";
    }
    cout << "}";
  }
  cout << "}";

  return 0;
}