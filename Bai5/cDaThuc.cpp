#include "cDaThuc.h"
#include<iostream>
#include<cmath>
using namespace std;
cDaThuc::cDaThuc()
{
    n=0;
    a=NULL;
}
void cDaThuc::Nhap(){
    cout<<"Nhap bac:";
    cin>>n;
    a=new int[n+1];
    for(int i=0;i<=n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void cDaThuc::Xuat(){
    for(int i=0;i<=n;i++){
        cout<<a[i]<<"x^"<<(n-i);
        if(i!=n)
            cout<<"+";
    }
    cout<<endl;
}
int cDaThuc::TinhGiaTri(int x){
    int kq=0;
    for(int i=0;i<=n;i++){
        kq+=a[i]*pow(x,n-1);
    }
    return kq;
}
cDaThuc cDaThuc::Cong(cDaThuc b){
    cDaThuc kq;
    kq.n = (n > b.n) ? n : b.n;
    kq.a = new int[kq.n + 1];

    for(int i = 0; i <= kq.n; i++){
        int h1 = (i <= n) ? a[n - i] : 0;
        int h2 = (i <= b.n) ? b.a[b.n - i] : 0;
        kq.a[kq.n - i] = h1 + h2;
    }
    return kq;
}

cDaThuc cDaThuc::Tru(cDaThuc b){
    cDaThuc kq;
    kq.n = (n > b.n) ? n : b.n;
    kq.a = new int[kq.n + 1];

    for(int i = 0; i <= kq.n; i++){
        int h1 = (i <= n) ? a[n - i] : 0;
        int h2 = (i <= b.n) ? b.a[b.n - i] : 0;
        kq.a[kq.n - i] = h1 - h2;
    }
    return kq;
}
