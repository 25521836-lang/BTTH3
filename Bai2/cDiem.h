#ifndef CDIEM_H
#define CDIEM_H


class cDiem
{
    public:
        float x,y;
        float x0,y0;
        void Nhap();
        void Xuat();
        void TinhTien(float dx, float dy);
        void Quay(float goc);
        void PhongTo(float k);
        void ThuNho(float k);
};
#endif
