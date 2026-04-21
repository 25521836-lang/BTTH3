#include<iostream>
#include"cDaGiac.h"
#include"cDiem.h"
using namespace std;
int main(){
    cDaGiac a;
    a.Nhap();
    a.Xuat();
    cout<<"Chu vi:"<<a.ChuVi()<<endl;
    cout<<"Dien tich:"<<a.DienTich()<<endl;
    float dx,dy;
    cout<<"Nhap dx dy:";
    cin>>dx>>dy;
    a.TinhTien(dx,dy);
    cout<<"SauTinhTien:"<<endl;
    a.Xuat();
    float goc;
    cout<<"Nhap goc quay:"<<endl;
    cin>>goc;
    a.Quay(goc);
    cout<<"Sau quay:"<<endl;
    a.Xuat();
    float k1,k2;
    cout<<"Nhap k phong to"<<endl;
    cin>>k1;
    a.PhongTo(k1);
    a.Xuat();
    cout<<"Nhap k thu nho:"<<endl;
    cin>>k2;
    a.ThuNho(k2);
    a.Xuat();
    return 0;
}

