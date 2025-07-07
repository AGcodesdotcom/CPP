#include<iostream>
using namespace std;
int sumarray(int array[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=array[i]+sum;

    }
    return sum;
   
}
int main(){
   int size;
   cin>>size;
   int num[100];
   for(int i=0;i<size;i++){
    cin>>num[i];
   }
   cout<<"the sum is "<<sumarray(num,size);
   return 0;

}