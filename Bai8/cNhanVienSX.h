#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H
#include<iostream>
using namespace std;

class cNhanVienSX
{
    private:
        string maNV;
        string hoTen;
        int ngay,thang,nam;
        int soSP;
        float donGia;
    public:
        cNhanVienSX();
        cNhanVienSX(string,string,int,int,int,int,float);
        void Nhap();
        void Xuat();
        float Luong();
        int getNgay();
        int getThang();
        int getNam();
        float getLuong();
        bool LonTuoiHon(cNhanVienSX other);
};

#endif // CNHANVIENSX_H
