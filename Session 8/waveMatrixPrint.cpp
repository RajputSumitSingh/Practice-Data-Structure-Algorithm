#include<iostream>
using namespace std;
 
int main()
{
 int arr[4][4] = {{2,3,6,5},{8,1,0,9},{13,6,4,11},{5,3,2,1}};
 int row = 0;
 int col = 0;
 int total = 16;

 while (total != 0)
 {
   //for the left to right
   for (int i = 0; i < 4; i++)
   {
     cout << arr[row][i]<< ", ";
     total--;
   }
   row++;

   //for the right to left
   for (int i = 3; i >=0  ; i--)
   {
     cout << arr[row][i]<<", ";
     total--;
   }
   row++;
   
 }
 
 
 
 return 0;
}