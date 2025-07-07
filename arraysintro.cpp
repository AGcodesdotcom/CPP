#include<iostream>
using namespace std;
void printArray(int array[],int size){
     cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<"PRINT DONE"<<endl;

}
int main(){
    int number[14];
    cout<<"value at 14 index "<<number[13]<<endl;

    int second[3]={5,7,11};
    cout<<"value at 2nd index "<<second[2]<<endl;

    /*int third[15]={2,7};
    printArray(third,15);
    int fourth[10]={0};
    printArray(fourth,10);*/
    int fifth[12]={1};
    printArray(fifth,12);
     int fifthsize=sizeof(fifth)/sizeof(int);
      cout<<"size of ch "<<fifthsize;
   char ch[5]={'a','b','c','d','e'};
   int chsize=sizeof(ch)/sizeof(char);
   cout<<"size of ch "<<chsize;
   double Double[10];
   float FLOAT[10];
   bool boolean[9];

}