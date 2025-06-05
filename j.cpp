/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int numCount=n;
   for(int i=1;i<=n;i++){
       //1st triangle
        for(int j=1;j<=numCount;j++){
            cout<<j;
            
            
        }
        //2nd triangle
        int star=2*i;
        for(int s=1;s<=star;s++){
            cout<<"*";
        }
        
       
      
        
        
        //3rd triangle
        int reverse=numCount;
        for(int k=reverse;k>=1;k--){
            cout<<k;
        }
        numCount--;
        cout<<endl;
        
       
        
   }
    
}