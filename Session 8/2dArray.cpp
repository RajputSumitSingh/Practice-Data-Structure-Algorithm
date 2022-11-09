#include<iostream>
using namespace std;
 
int main()
{
 int arr[5][5] = {2,3,66,8,1,22,8,9,3,33};
 int target = 7;
 int flag = 0;

 for (int i = 0; i < 5; i++)
 {
   for (int j = 0; j < 5; j++)
   {
     if (arr[i][j] == target)
     {
       cout << "The element is found " << endl;
       flag = 1;
     }
   }
 }
 
 if (flag == 0)
 {
   cout << "The elemtn not found" << endl;
 }
 
 
 
 return 0;
}