#include<iostream>
using namespace std;

//in this problem statement having one problem there is redundunt data of same array.
 
int main()
{
 int arr1[] = {2,3,4,8,9};
 int arr2[] = {2,3,6,7,9,10,11,12,13};


 int i = 0;
 int j = 0;
 
 int size1 = sizeof(arr1)/4;
 int size2 = sizeof(arr2)/4;

 cout <<"size" << size1 <<endl;

 int *ans = new int[size1+size2+2];
 int k = 0;

 while (i != size1 && j != size2)
 {
   if (arr1[i] < arr2[j])
   {
     ans[k] = arr1[i];
     i++;
   }else if(arr1[i] > arr2[j]){
     ans[k] = arr2[j];
     j++;
   }else{
     ans[k] = arr1[i];
     i++;
     j++;
   }
  //  cout << ans[k]<<endl;
   k++;
 }

 //for the extra arr1 elements
 while (i != size1)
 {
   ans[k] = arr1[i];
   i++;
   k++;
 }
 //for the extra arr2 elements
 while (j != size2)
 {
   ans[k] = arr2[j];
   j++;
   k++;
 }
 

 for (int l = 0; l < k; l++)
 {
   cout << ans[l] << " ";
 }
 


 
 
 
 
 return 0;
}