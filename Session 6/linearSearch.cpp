#include<iostream>
using namespace std;

void linearSearch(int arr[], int value,int size){

  int flag = 1;
  for (int i = 0; i < size; i++)
  {
    if(arr[i] == value){
      cout << "The value is found" << endl;
      flag = 0;
    }
  }
  if (flag == 1)
  {
    cout << "The value is not found" << endl;
  }
  
  
}
 
int main()
{
 int n;
 cout << "Enter size of array : ";
 cin >> n;

 int *arr = new int[n];

 //taking input in array
 for (int i = 0; i < n; i++)
 {
   cin >> arr[i];
 }

 cout << "Enter the element for search : ";
 int value;
 cin >> value;
 linearSearch(arr,value,n);
 
 
 return 0;
}