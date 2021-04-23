//Find how many times 5 is there in given number

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int num, rem, c=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        num=num/10;
        if(rem==5)
            c++;    
    }
    cout<<"\n"<<c<<"\n";
    return 0;
}