#include <iostream>
using namespace std;

void show(int x,int y){
    cout<<x<<" "<<y<<endl;
}
void callbyvalue(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<"Call by value inside function"<<x<<" "<<y<<endl;
}
void callbyreference(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
    cout<<"Call by reference inside function"<<x<<" "<<y<<endl;
}
void callbyaddress(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Call by address inside function"<<*x<<" "<<*y<<endl;
}
int main()
{
    int x;
    int y;
    cin>>x>>y;
    callbyvalue(x,y);
    show(x,y);
    callbyreference(x,y);
    show(x,y);
    callbyaddress(&x,&y);
    show(x,y);
    return 0;
}