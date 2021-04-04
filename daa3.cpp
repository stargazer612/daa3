#include <bits/stdc++.h>
using namespace std;
struct a{
    int b[1000];
};
int a[1000];
int num=0;

struct a toh(int start,int end){
    struct a brod;
    int btop=0;
    if(start==end){
        brod.b[btop] = a[start];
        a[start]=0;
    }
    else{
        int crod=a[end];
        a[end]=0;
        brod.b[btop++]=a[start];
        a[start]=0;
        brod.b[btop]=crod;
        crod=0;
    }
    return brod;
}

struct a func(int start,int end){
    int n = end-start+1;
    //base
    if(n<=2){
        struct a bb = toh(start,end);
        return bb;
    }
    struct a b1,b2;
    //recursive
    int k=n%2;
    b1=func(start,(start+end)/2-k);
    b2=func((start+end)/2-k+1,end);
    struct a arr;
    std::copy(b1.b, b1.b + n/2, arr.b);
    std::copy(b2.b, b2.b + n-n/2, arr.b + n/2);
    return arr;
}

int main(){
    cout<<"Enter the number of disks: ";
    cin>>num;
    for(int i=0;i<num;i++)
        a[i]=i+1;
    struct a bfinal;
    bfinal=func(0,num-1);
    for(int i=0;i<num;i++){
        cout << bfinal.b[i] << endl;
    }
}