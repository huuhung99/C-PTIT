#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check=false,check1=false;
void findCommon(ll ar1[], ll ar2[], ll ar3[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3){
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
        	cout << ar1[i] << " ";   i++; j++; k++;
        	check=true;
		}
        else if (ar1[i] < ar2[j])
            i++;
        else if (ar2[j] < ar3[k])
            j++;
        else
            k++;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
    	int n1,n2,n3;
//		cin>>n1>>n2>>n3;
		n1=rand()%10+8;
		n2=rand()%10+8;
		n3=rand()%10+8;
    	ll a1[n1],a2[n2],a3[n3];
		map<long long,long long> map1,map2,map3;
		cout<<"mang 1:"<<endl;
    	for(int i=0;i<n1;i++) {
//    		cin>>a1[i];
			a1[i]=rand()%10;
			cout<<a1[i]<<" ";
    		map1[a1[i]]++;
		}
		cout<<endl<<"mang 2:"<<endl;
    	for(int i=0;i<n2;i++) {
//    		cin>>a2[i];
			a2[i]=rand()%10;
			cout<<a2[i]<<" ";
    		map2[a2[i]]++;
		}
		cout<<endl<<"mang 3:"<<endl;
    	for(int i=0;i<n3;i++) {
//    		cin>>a3[i];
    		a3[i]=rand()%10;
    		cout<<a3[i]<<" ";
    		map3[a3[i]]++;
		}
		cout<<endl;
		sort(a1,a1+n1);
		sort(a2,a2+n2);
		sort(a3,a3+n3);
    	findCommon(a1,a2,a3,n1,n2,n3);
    	if(check==false) cout<<-1;
    	cout<<endl;
    	check=false;
    	cout<<"bai sai:"<<endl;
    	for(auto m:map1){
			if(map2[m.first]==map3[m.first]&&map3[m.first]==m.second){
				for(int j=0;j<m.second;j++)
					cout<<m.first<<" ";
				check=true;
			}
			else if(map2[m.first]!=0&&map3[m.first]!=0){
				int minn=min(map2[m.first],min(map3[m.first],m.second));
				for(int j=0;j<minn;j++)
					cout<<m.first<<" ";
				check1=true;
			}
		}
		if(check1==false) cout<<-1;
		cout<<endl;
		check1=false;
	}
    return 0;
}

