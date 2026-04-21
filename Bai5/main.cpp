#include<iostream>
#include "cDaThuc.h"
using namespace std;

int main(){
    cDaThuc A, B, tong, hieu;

    cout << "Nhap da thuc A:"<<endl;
    A.Nhap();

    cout << "Nhap da thuc B:"<<endl;
    B.Nhap();

    cout << "A = "<<endl;
    A.Xuat();

    cout << "B = ";
    B.Xuat();

    tong = A.Cong(B);
    cout << "A + B = "<<endl;
    tong.Xuat();

    hieu = A.Tru(B);
    cout << "A - B = ";
    hieu.Xuat();

    int x;
    cout << "Nhap x: "<<endl;
    cin >> x;

    cout << "Gia tri A(x) = " << A.TinhGiaTri(x)<<endl;
    cout << "Gia tri (A+B)(x) = " << tong.TinhGiaTri(x) << endl;
    cout << "Gia tri (A-B)(x) = " << hieu.TinhGiaTri(x) << endl;
    return 0;
}
