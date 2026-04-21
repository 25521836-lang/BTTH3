#include <iostream>
#include "cTamGiac.h"
using namespace std;

int main() {
    cTamGiac tg;

    // Nhập tam giác
    cout << "===== NHAP TAM GIAC =====\n";
    tg.Nhap();

    cout << "\nTam giac ban dau:\n";
    tg.Xuat();

    // Thông tin cơ bản
    tg.KiemTraLoai();
    cout << "Chu vi: " << tg.ChuVi() << endl;
    cout << "Dien tich: " << tg.DienTich() << endl;

    // ===== Tịnh tiến =====
    float dx, dy;
    cout << "\nNhap dx, dy de tinh tien: ";
    cin >> dx >> dy;
    tg.TinhTien(dx, dy);

    cout << "Sau tinh tien:\n";
    tg.Xuat();

    // ===== Quay =====
    float goc;
    cout << "\nNhap goc quay (do): ";
    cin >> goc;
    tg.Quay(goc);

    cout << "Sau quay:\n";
    tg.Xuat();

    // ===== Phóng to =====
    float k;
    cout << "\nNhap he so phong to k: ";
    cin >> k;
    tg.PhongTo(k);

    cout << "Sau phong to:\n";
    tg.Xuat();

    // ===== Thu nhỏ =====
    float k2;
    cout << "\nNhap he so thu nho k: ";
    cin >> k2;
    tg.ThuNho(k2);

    cout << "Sau thu nho:\n";
    tg.Xuat();

    return 0;
}
