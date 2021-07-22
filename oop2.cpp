#include<iostream>
using namespace std;
class SinhVien{
	public:
		int ma;
		string hoTen;
		string lop;
		float diemCPP;
};
int main(){
	int n;cin>>n;
	SinhVien *sv=new SinhVien[n];
	for(int i=0;i<n;i++){
		int ma;
		string hoTen,lop;
		float diemCPP;
		cin>>ma;
		sv[i].ma=ma;
		cin.ignore();
		getline(cin,hoTen);
		sv[i].hoTen=hoTen;
		getline(cin,lop);
		sv[i].lop=lop;
		cin>>diemCPP;
		sv[i].diemCPP=diemCPP;
		if(sv[i].diemCPP>=7.0){
			cout<<sv[i].ma<<" "<<sv[i].hoTen<<" "<<sv[i].lop<<endl;
		}
	}
	return 0;
}
