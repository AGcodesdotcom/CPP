#include<iostream>
using namespace std;
long long int SqrtInt(int n){
    int s=0,e=n;
    long long int ans=-1;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double morePrecision(int n,int precision,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int tempSol=SqrtInt(n);
    cout<<"Sqrt of number is "<<morePrecision(n,4,tempSol);
    return 0;
}