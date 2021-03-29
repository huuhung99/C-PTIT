//#include<bits/stdc++.h>
//using namespace std;
//int t;
//int maximum_one(string s, int n){
//    int cnt_one = 0;
//    int max_cnt = 0, temp=0;
//    for (int i = 0; i < n; i++){
//        if (s[i] == '1'){
//            cnt_one++;
//            temp++;
//        }
//        else{
//            max_cnt = max(temp,max_cnt);
//            temp=0;
//        }
//    }
//    max_cnt = max(max_cnt, temp);
//    int left[n], right[n];
//    if (s[0] == '1')
//        left[0] = 1;
//    else
//        left[0] = 0;
//    if (s[n - 1] == '1')
//        right[n - 1] = 1;
//    else
//        right[n - 1] = 0;
//    for (int i = 1; i < n; i++) {
//        if (s[i] == '1')
//            left[i] = left[i - 1] + 1;
//        else
//            left[i] = 0;
//    }
//    for (int i = n - 2; i >= 0; i--) {
//        if (s[i] == '1')
//            right[i] = right[i + 1] + 1;
//  
//        else
//            right[i] = 0;
//    }
//    for (int i = 1; i < n - 1; i++) {
//        if (s[i] == '0') {
//            int sum = left[i - 1] + right[i + 1];
//  
//            if (sum < cnt_one)
//                max_cnt = max(max_cnt, sum+1);
//  
//            else
//                max_cnt = max(max_cnt, sum);
//  
//        }
//    }
//    return max_cnt;
//}
//int main(){
//	cin>>t;
//	while(t--){
//		int n,m,cnt=0;
//		cin>>n>>m;
//		int a[15][15];
//		for(int i=0;i<n;i++){
//			for(int j=0;j<m;j++) {
//				cin>>a[i][j];
//			}
//		}
//		string tmp="";
//		for(int i=0;i<m;i++){
//			bool check=true;
//			for(int j=0;j<n;j++) {
//				if(a[j][i]==0){
//					check=false;
//					break;
//				}
//			}
//			if(check==true) tmp+='1';
//			else tmp+='0';
//		}
////		cout<<tmp<<endl;
//		cout<<maximum_one(tmp,tmp.length())*n<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[20][20];
int b[20][20];
void input(){
    cin>>n>>m;
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            cin>>a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for (int i = 2;i <= n;i++) {
        for (int j = 1;j <= m;j++)b[i][j] += b[i-1][j];
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        input();
        int ans = 0;
    for (int i = 1;i <= n;i++) {
        for (int j = i;j <= n;j++) {
            int k = 0;
            for (int q = 1;q <=m;q++) {
                int s = b[j][q]-b[i-1][q];
                if (s == j-i+1)k++;
            } 
            ans = max(ans, (j-i+1) *k);
            
        }
    }
    cout << ans << endl;
    }
	return 0;
}


