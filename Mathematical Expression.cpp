#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    if(s=='+'){
        int sum = a+b;
        if(sum == c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }
    else if(s=='-'){
        int sub = a-b;
        if(sub == c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<sub<<endl;
        }
    }
    else if(s=='*'){
        int into = a*b;
        if(into == c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<into<<endl;
        }
    }








return 0;
}


