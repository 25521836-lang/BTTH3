#ifndef CTAMGIAC_H
#define CTAMGIAC_H

#include "cDiem.h"

class cTamGiac {
private:
    cDiem A, B, C;

public:
    void Nhap();
    void Xuat();

    float ChuVi();
    float DienTich();

    void KiemTraLoai();

    void TinhTien(float dx, float dy);
    void Quay(float goc);
    void PhongTo(float k);
    void ThuNho(float k);
};

#endif
