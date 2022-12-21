#include<iostream>
using namespace std;
template <class T>
class myclass{
    public:
    T n;
    void getdata(){
        cin>>n;
    }
    int func(){
        int c=0;
        for(T i=1;i<n-1;i++){
            for(T j=i;j<n-1;j++){
                for(T h=j;h<n-1;h++){
                    if((i+j+h)==n && (i+j)<=h){
                        c++;
                    }
                }
            }
        }
        return c;
    }
};
int main(){
    myclass<int>v;
    v.getdata();
    cout<<v.func();
    return 0;
}