#include<bits/stdc++.h>
using namespace std;
int t;
void matrix(int a[105][105],int b[105][105],int n,int m){
	int dau=0,rong=m-1,dai=n-1;
	while(dau<rong||dau<dai){
		for(int i=dau;i<rong;i++) b[dau][i+1]=a[dau][i];
		for(int i=dau;i<dai;i++) b[i+1][rong]=a[i][rong];
		for(int i=rong;i>dau;i--) b[dai][i-1]=a[dai][i];
		for(int i=dai;i>dau;i--) b[i-1][dau]=a[i][dau];
		dai--;
		rong--;
		dau++;
	}
}
void rotatematrix(int m, int n, int mat[105][105])
{
    int row = 0, col = 0;
    int prev, curr;
    int hang=m,cot=n;
    while (row < m && col < n)
    {
  
        if (row + 1 == m || col + 1 == n)
            break;
        prev = mat[row + 1][col];
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;
        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
    for (int i=0; i<hang; i++)
    {
        for (int j=0; j<cot; j++)
          cout << mat[i][j] << " ";
        cout << endl;
    }
}
int main(){
	cin>>t;
	while(t--){
		int n,m;
//		cin>>n>>m;
		n=rand()%10+1;
		m=rand()%10+1;
		int a[105][105],b[105][105];
		cout<<"matrix chua xoay:"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
//				cin>>a[i][j];
				a[i][j]=rand()%10+1;
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"matrix da xoay sai:"<<endl;
		matrix(a,b,n,m);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"matrix da xoay dung:"<<endl;
		rotatematrix(n,m,a);
		cout<<endl;
	}
	return 0;
}
/*
10
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
4 5
1   2  3  4 5
14 15 16 17 6
13 20 19 18 7
12 11 10  9 8 
*/
