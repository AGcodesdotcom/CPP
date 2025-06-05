#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
int n;
cin>>n;
int reverse;
int digit;
while(n!=0){
    digit=n%10;//-143%10=-3
    reverse=digit*10+reverse;
    cout<<reverse;
    
    n=n/10;

    
}

}