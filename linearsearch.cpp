#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,33,1};
    cout<<"enter the element to search"<<endl;
    int key;
    cin>>key;
    bool found =linearsearch(arr,10,key);
    if (found){
       cout<<"key found";
    }
    else{
        cout<<"key not found";
    }


    
}
