#include<iostream>
using namespace std;
 
int main()
{
  int n;
  cin >> n;
  int temp = 3;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-i-1; j++)
    {
      cout << " ";
    }

    //for star (*)
    if(i == 0 || i == n -1){
      for (int j = 0; j < i+1; j++)
      {
        cout << "* ";
      }
      
    }else{
      for (int j = 0; j < temp; j++)
      {
        if (j == 0 || j == temp -1)
        {
          cout << "*";
        }
        else
        {
          cout << " ";
        }
        
        
      }
      temp = temp + 2;
      
    }

    cout << endl;
    
    
  }
  
 
 
 
 return 0;
}