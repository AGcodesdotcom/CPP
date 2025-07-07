#include<iostream>
using namespace std;
void update(int array[],int size){
    array[0]=300;
    cout<<endl<<"inside the function"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int array[3]={0,1,2};
    update(array,3);
    cout<<"main block"<<endl;
     for(int i=0;i<3;i++){
        cout<<array[i]<<" ";
    }
}