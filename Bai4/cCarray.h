#ifndef CCARRAY_H
#define CCARRAY_H


class cCarray
{
private :
    int *a;
    int n;
public:
    cCarray();
    void TaoNgauNhien(int size);
    void Xuat();
    int DemX(int x);
    bool KiemTraTangDan();
    int LeNhoNhat();
    int SoNguyenToLonNhat();
    void SapXepTang();
    void SapXepGiam();
    bool KiemTraNguyenTo(int x);
};
#endif // CCARRAY_H
