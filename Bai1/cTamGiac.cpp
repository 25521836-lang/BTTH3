#include "cTamGiac.h"
#include <iostream>
#include <cmath>
using namespace std;

void cTamGiac::Nhap() {
    cout << "Nhap A: "; A.Nhap();
    cout << "Nhap B: "; B.Nhap();
    cout << "Nhap C: "; C.Nhap();
}

void cTamGiac::Xuat() {
    cout << "A"; A.Xuat();
    cout << " B"; B.Xuat();
    cout << " C"; C.Xuat();
    cout << endl;
}

float cTamGiac::ChuVi() {
    return A.KhoangCach(B) + B.KhoangCach(C) + C.KhoangCach(A);
}

float cTamGiac::DienTich() {
    float a = B.KhoangCach(C);
    float b = A.KhoangCach(C);
    float c = A.KhoangCach(B);
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void cTamGiac::KiemTraLoai() {
    float a = B.KhoangCach(C);
    float b = A.KhoangCach(C);
    float c = A.KhoangCach(B);

    if (a == b && b == c)
        cout << "Tam giac deu\n";
    else if (a == b || b == c || a == c)
        cout << "Tam giac can\n";
    else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        cout << "Tam giac vuong\n";
    else
        cout << "Tam giac thuong\n";
}

void cTamGiac::TinhTien(float dx, float dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void cTamGiac::Quay(float goc) {
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}

void cTamGiac::PhongTo(float k) {
    A.PhongTo(k);
    B.PhongTo(k);
    C.PhongTo(k);
}

void cTamGiac::ThuNho(float k) {
    A.ThuNho(k);
    B.ThuNho(k);
    C.ThuNho(k);
}
