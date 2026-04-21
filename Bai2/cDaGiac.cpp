#include "cDaGiac.h"
#include<iostream>
#include<cmath>
using namespace std;
float DoDai(cDiem A,cDiem B){
    return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}
cDaGiac::cDaGiac(){
    n=0;
    ds=NULL;
}
void cDaGiac::Nhap(){
    cout<<"Nhap so dinh: ";
    cin>>n;
    ds=new cDiem[n];
    for (int i=0;i<n;i++){
        cout<<"Nhap Diem"<<i+1<<":";
        ds[i].Nhap();
    }
}
void cDaGiac::Xuat(){
    cout<<"DaGiac:";
    for(int i=0;i<n;i++){
        ds[i].Xuat();
        cout<<" ";
    }
    cout<<endl;
}
float cDaGiac::ChuVi(){
    float p=0;
    for (int i=0;i<n;i++){
        p+=DoDai(ds[i],ds[(i+1)%n]);
    }
    return p;
}
float cDaGiac::DienTich()
{
    float S=0;
    for(int i=0;i<n;i++){
        S+=ds[i].x*ds[(i+1)%n].y-ds[(i+1)%n].x*ds[i].y;
    }
    return abs(S)/2;
}
void cDaGiac::TinhTien(float dx,float dy){
    for(int i=0;i<n;i++){
        ds[i].TinhTien(dx,dy);
    }
}
void cDaGiac::Quay(float goc){
    for(int i=0;i<n;i++){
        ds[i].Quay(goc);
    }
}
void cDaGiac::PhongTo(float k){
    for(int i=0;i<n;i++){
            ds[i].PhongTo(k);
    }
}
void cDaGiac::ThuNho(float k){
    for(int i=0;i<n;i++){
        ds[i].ThuNho(k);
    }
}

