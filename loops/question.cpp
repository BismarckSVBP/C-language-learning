#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n;
    int p=0;
    while(a!=0){
        p++;
        a=a/10;
    }
    int sum=0;
    while(n!=0){
        int a=n%10;
        if(p%2==0){
            sum=sum+a;
        }
        p--;
        n=n/10;
    }
    cout<<sum;

}
