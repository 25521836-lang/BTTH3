#ifndef CDATHUC_H
#define CDATHUC_H

#include<iostream>
using namespace std;
class cDaThuc
{
   private:
       int n;
       int *a;
   public:
    cDaThuc();
    void Nhap();
    void Xuat();
    int TinhGiaTri(int x);
    cDaThuc Cong(cDaThuc b);
    cDaThuc Tru(cDaThuc b);
};

#endif // CDATHUC_H
