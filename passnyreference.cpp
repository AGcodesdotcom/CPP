#include<iostream>
using namespace std;
int printarray(int arr[],int n){
    arr[0]+=15;
    cout<<"inside function "<<arr[0]<<endl;
}
    

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
printarray(arr,n);
cout<<"in main function "<<arr[0]<<endl;
return 0;

}