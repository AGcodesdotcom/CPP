#include<iostream>
using namespace std;
int main(){
    char ch;
      cout<<"enter the characters";
      cin>>ch;
    
    int ascii=int(ch);
  
  
    if(ascii>=65&&ascii<=90){
        cout<<"uppercase"<<endl;
        cout<<ch;
    }
    else if(ascii>=97&&ascii<=122){
        cout<<"lowercase"<<endl;
        cout<<ch;

    }
    else if(ascii>=48&&ascii<=57){
        cout<<"digit"<<endl;
        cout<<ch;

    }
    else{
        cout<<"something else"<<endl;
        cout<<ch;
    }


    }