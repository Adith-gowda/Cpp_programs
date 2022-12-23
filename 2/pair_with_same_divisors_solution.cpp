#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0,c1=0,t=0;
    if(n==1){ cout<<"-1";exit(0); }
    for(int i=1;i<=n;i++){
        c=0;c1=0;
        for(int j=i+1;j<=n;j++){
            if(i*j==n){
                for(int k=1;k<=i;k++){ if(i%k==0){ c++; } }
                for(int k=1;k<=j;k++){ if(j%k==0){ c1++; } }
                if(c==c1 && c!=0 && c1!=0){ t++; }
            }
        }
    }
    cout<<t;
    return 0;
}
