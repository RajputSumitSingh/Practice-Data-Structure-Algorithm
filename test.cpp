#include<iostream>
#include<math.h>
#include<limits.h>    

using namespace std;




int main(){
  int arr[4][4] = {{1,2,3,4},{11,2,4,55},{8,9,7,4},{9,4,5,1}};

  int firstRow = 0;
  int endRow = 4;
  int firstCol = 0;
  int endCol = 4;

  int count = 0;
  int total = sizeof(arr)/4;


  while (count < total)
  {
  //first row
    for (int i = firstCol; i < endCol; i++)
    {
      cout << arr[firstRow][i]<<", ";
      count++;
    }
    firstRow++;

    //for last column
    for (int i = firstRow; i < endRow; i++)
    {
      cout <<arr[i][endCol-1]<<", ";
      count++;
    }
    endCol--;

    //for end Row
    for (int i = endCol-1; i >= firstCol ; i--)
    {
      cout << arr[endRow-1][i]<<", ";
      count++;
    }
    endRow--;

    //for first col
    for (int i = endRow-1; i >=firstRow ; i--)
    {
      cout << arr[i][firstCol]<<", ";
      count++;
    }
    firstCol++;
    
    
    
    
  }
  

    return 0;
}