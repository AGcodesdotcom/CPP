#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
 int start=0;
    int end=n-1;
    int ans=-1;
    //int mid=(start+end)/2;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
 int start=0;
    int end=n-1;
    int ans=-1;
    //int mid=(start+end)/2;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[11]={1,2,3,3,3,3,3,3,3,3,5};
   int first=firstOcc(arr,11,3);
   int last=lastOcc(arr,11,3);
   int total= (last - first)+1;
   cout<<"total num of occurence "<<total<<endl;

    return 0;
}