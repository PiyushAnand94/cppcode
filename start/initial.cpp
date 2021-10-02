#include<iostream>
using namespace std;
int add(int x,int y){
    int s=x+y;
    cout<<s;
    return s;
}
int main(){
    int a=2,b=3;
    int sum=add(a,b);
    cout<<sum;
    return 0;
}