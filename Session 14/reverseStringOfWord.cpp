#include<iostream>
using namespace std;
 
int main()
{
 string s = "Let's take LeetCode contest";
      int size = s.size();
     for(int i=0; i<size; i++){
            int j=i;
            while(s[j] != ' ' || s[j] != '\0'){
                j++;
            }
            int st=i;
            int e=j-1;
            cout << st<<" "<<endl;
            while(st < e){
                
                swap(s[st],s[e]);
                st++;
                e--;
            }
            if(s[j] == '\0'){
                break;
            }
            i=j;
        }

        int z=0;
        while(s[z] != '\0'){
            cout << s[z]<<",";
            z++;
        }
 
 
 return 0;
}