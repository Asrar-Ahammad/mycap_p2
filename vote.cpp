#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age to check whether you are eligible to vote or not\n";
    cout<<"Enter Your age :";
    cin>>age;

    if (age>=18){
        cout<<"You are eligible to vote";
    }

    else{
        cout<<"You are not eligible to vote";
    }
}