#include<iostream>
using namespace std;

int n, k, a[10000];

void xuat(){
	for(int i = 1; i <= k; i++)
		cout << a[i];
	cout << " ";
}

void backTrack(int i){
	for(int j = a[i-1]+1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			xuat();
		}else backTrack(i + 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		backTrack(1);
		cout << endl;
	}
}
