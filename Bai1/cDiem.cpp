#include "cDiem.h"
#include <iostream>
#include <cmath>
using namespace std;

void cDiem::Nhap() {
    cin >> x >> y;
    x0 =x;
    y0 =y;
}

void cDiem::Xuat() {
    cout << "(" << x << ", " << y << ")";
}

float cDiem::KhoangCach(cDiem p) {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}

void cDiem::TinhTien(float dx, float dy) {
    x += dx;
    y += dy;
}

void cDiem::Quay(float goc) {
    float rad = goc * M_PI / 180;
    float x_moi = x0 * cos(rad) - y0 * sin(rad);
    float y_moi = x0 * sin(rad) + y0 * cos(rad);
    x = x_moi;
    y = y_moi;
}

void cDiem::PhongTo(float k) {
    x=x0*k;
    y=y0*k;
}

void cDiem::ThuNho(float k) {
    x= x0 /k;
    y= y0 /k;
}
