#include "cNhanVienSX.h"

cNhanVienSX::cNhanVienSX()
{
   maNV="";
   hoTen="";
   ngay=thang=nam=0;
   soSP=0;
   donGia=0;
}

cNhanVienSX::cNhanVienSX(string ma,string ten,int d,int t,int n,int sp,float dg)
{
    maNV=ma;
    hoTen=ten;
    ngay=d;
    thang=t;
    nam=n;
    soSP=sp;
    donGia=dg;
}
void cNhanVienSX::Nhap(){
    cin.ignore();
    cout<<"Ma NV:";
    getline(cin,maNV);
    cout<<"Ho ten:";
    getline(cin,hoTen);
    cout<<"Ngay sinh:";
    cin>>ngay>>thang>>nam;
    cout<<"So san pham:";
    cin>>soSP;
    cout<<"Don gia:";
    cin>>donGia;
}
void cNhanVienSX::Xuat(){
    cout<<maNV<<endl;
    cout<<hoTen<<endl;
    cout<<ngay<<"/"<<thang<<"/"<<nam<<endl;
    cout<<soSP<<endl;
    cout<<donGia<<endl;
    cout<<"Luong:"<<Luong()<<endl;
}
float cNhanVienSX::Luong(){
    return soSP* donGia;
}
int cNhanVienSX::getNgay(){
    return ngay;
}
int cNhanVienSX::getThang(){
    return thang;
}
int cNhanVienSX::getNam(){
    return nam;
}
float cNhanVienSX::getLuong(){
    return Luong();
}
bool cNhanVienSX::LonTuoiHon(cNhanVienSX other) {
    if (nam != other.nam) return nam < other.nam;
    if (thang != other.thang) return thang < other.thang;
    return ngay < other.ngay;
}

