#ifndef CDAGIAC_H
#define CDAGIAC_H
#include"cDiem.h"

class cDaGiac
{
private:
    int n;
    cDiem*ds;
    public:
        cDaGiac();
        void Nhap();
        void Xuat();
        float ChuVi();
        float DienTich();
        void TinhTien(float dx,float dy);
        void Quay(float goc);
        void PhongTo(float k);
        void ThuNho(float k);
};

#endif // CDAGIAC_H
