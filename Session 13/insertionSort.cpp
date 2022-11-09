#include<iostream>
using namespace std;
 
int main()
{
  int arr[] = {1, 4, 2, 5, 2, 3};

 int n = 5;
 int index;
 int i=1;
 int j;

 while(i<n)
 {

   int temp = arr[i];
   j = i-1;
  //  cout << "j : "<<j<<endl;

   while(j>=0)
   {
    //  cout << arr[j]<<" : "<<temp<<endl;
     if(arr[j] > temp){

       arr[j+1] = arr[j];

     }else{

        arr[j+1] = temp;
        break;

     }

     j--;
   }
   i++;
 }

  for (int i = 0; i < n; i++)
 {
   cout << arr[i]<<" , ";
 }
 
 
 
 return 0;
}