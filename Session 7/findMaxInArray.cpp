#include<iostream>
#include<limits.h>//for setting the limits in the code
using namespace std;
 
int main()
{
  int arr[] = {23,45,68,90,11,88,122,45,8};
  int ans = INT_MAX;

  for (int i = 0; i < sizeof(arr)/4; i++)
  {
    ans = min(arr[i],ans);
  }
  
  cout << "Minimum value is : "<< ans<<endl;
 
 
 
 return 0;
}