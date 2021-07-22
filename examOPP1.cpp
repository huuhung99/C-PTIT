#include<iostream>
#include<bits/stdc++.h>
#include<exception>
using namespace std;
class PhanSo{
	public:
		int tu;
		int mau;
		PhanSo rut_gon(PhanSo a){
			int gcd=__gcd(a.tu,a.mau);
			a.tu/=gcd;
			a.mau/=gcd;
			return a;
		}
		PhanSo tong(PhanSo b){
			PhanSo ketQua;
			ketQua.tu=tu*b.mau+b.tu*mau;
			ketQua.mau=mau*b.mau;
			if(ketQua.mau<0){
				ketQua.tu*=-1;
				ketQua.mau*=-1;
			}
			return this->rut_gon(ketQua);
		}
		PhanSo(int _tu,int _mau){
			this->tu=_tu;
			if(_mau!=0)
				this->mau=_mau;
			else{
				cout<<"mau so phai khac 0"<<endl;
				return;
			}
		}
		PhanSo(){
			
		}
		PhanSo tich(PhanSo b){
			PhanSo ketQua;
			ketQua.tu=this->tu*b.tu;
			ketQua.mau=this->mau*b.mau;
			return this->rut_gon(ketQua);
		}
		void display(){
			if(this->mau!=0)
				cout<<tu<<"/"<<mau<<endl;
		}
};
int main(){
	PhanSo a(1,2);
	PhanSo b(3,4);
	a.tong(b).display();
	a.tich(b).display();
	return 0;
}
