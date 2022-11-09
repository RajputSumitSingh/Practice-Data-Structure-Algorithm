#include <iostream>
using namespace std;

int main()
{
  int arr1[] = {3, 5, 7, 9};
  int arr2[] = {2, 4, 6};

  int size1 = 3;
  int size2 = 2;
  int ans[size1 + size2 + 2];
  int i = 0;
  int j = 0;
  int k = 0;

  while (i <= size1 && j <= size2) {
    if (arr1[i] <= arr2[j]){
      ans[k] = arr1[i];
      i++;
      k++;
    }else{
      ans[k] = arr2[j];
      j++;
      k++;
    }
  }

  while (i <= size1)
  {
    ans[k] = arr1[i];
    i++;
    k++;
  }
  while (j <= size2)
  {
    ans[k] = arr2[j];
    j++;
    k++;
  }

  for (int i = 0; i < 7; i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}