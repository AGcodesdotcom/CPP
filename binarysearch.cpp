#include<iostream>
using namespace std;
int Binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    //int mid=(start+end)/2;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,13,14,17};

    int index=Binarysearch(odd,5,13);
    cout<<"index of 13 is "<<index<<endl;

    return 0;
    
}
