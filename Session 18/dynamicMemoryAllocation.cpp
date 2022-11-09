#include<iostream>
using namespace std;
 
int main()
{
//  int n;
//  cout << "Enter the size : ";
//  cin >> n;

//  int *arr = new int[n];

//  delete[] arr;// if we not delete the dynamic allocate heap memory then memory lieak.
 
 

 //2d array with dynamic alocation
 int m,n;
 cin >> m>>n;

 int **arr = new int*[m];
 for (int i = 0; i < m; i++)
 {
   arr[i] = new int[n];
 }

 //input the values
  for (int i = 0; i < m; i++)
 {
   for (int j = 0; j < n; j++)
   {
     cin >> arr[i][j];
   }
   
 }

 cout << endl;
 //print the output
 for (int i = 0; i < m; i++)
 {
   for (int j = 0; j < n; j++)
   {
     cout << arr[i][j]<<" ";
   }
   cout << endl;
   
 }
 
 
 return 0;
}