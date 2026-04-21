#include"cNhanVienSX.h"
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap so nhan vien:";
    cin>>n;
    cNhanVienSX ds[100];
    for (int i=0;i<n;i++){
        cout<<"Nhap nhan vien thu:"<<i+1<<endl;
        ds[i].Nhap();
    }
    int minIndex=0;
    for(int i=1;i<n;i++){
        if(ds[i].getLuong()<ds[minIndex].getLuong()){
            minIndex=i;
        }
    }
    cout<<"Nhan vien luong thap nhat:\n";
    ds[minIndex].Xuat();
    float Tong=0;
    for(int i=0;i<n;i++){
        Tong+=ds[i].getLuong();
    }
    cout<<"Tong luong cong ty tra:"<<Tong<<endl;
   int maxTuoi = 0;
    for (int i = 1; i < n; i++) {
        if (ds[i].LonTuoiHon(ds[maxTuoi])) {
            maxTuoi = i;
        }
    }

    cout << "\nNhan vien lon tuoi nhat:\n";
    ds[maxTuoi].Xuat();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ds[i].getLuong()>ds[j].getLuong()){
               cNhanVienSX temp=ds[i];
               ds[i]=ds[j];
               ds[j]=temp;
            }
        }
    }
    cout<<"Danh sach sau khi sap xep tang dan theo luong:\n";
    for(int i=0;i<n;i++){
        ds[i].Xuat();
    }
    return 0;
}
