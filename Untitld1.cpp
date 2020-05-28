#include<iostream>

using namespace std;
int main() {

 int n,a[1001],j=0;
    bool small=true;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n-2;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
        else{
            if(a[i]<a[i+1]){
            swap(a[i],a[i+1]);}
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
