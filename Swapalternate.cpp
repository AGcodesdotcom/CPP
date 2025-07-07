#include<iostream>
using namespace std;
void SwapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
           // swap(arr[i],arr[i+1]);
           int temp=arr[i+1];
           arr[i+1]=arr[i];
           arr[i]=temp;
           cout<<arr[i]<<" "<<arr[i+1]<<" ";
           
        }
    }
    //if size is odd
    if(size%2!=0){
       cout<<arr[size-1]<<" ";
    }
}
/*void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}*/

int main(){
    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};

    SwapAlternate(even,8);
    //PrintArray(even,8);
    cout<<endl;
    SwapAlternate(odd,5);
    //PrintArray(odd,5);

    
}