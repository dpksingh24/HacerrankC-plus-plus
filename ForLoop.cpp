#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int a,b;
    cin>>a>>b;
    
    string s[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    for(int i=a; i<=b;i++){
        if(i>9)
        {
            i%2 == 0 ? cout<<"even \n" : cout<<"odd \n";
        }    
        else
        {
            cout<<s[i]<<endl;
        }
    }
    
    return 0;
}
