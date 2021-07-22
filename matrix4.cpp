//#include<bits/stdc++.h>
//using namespace std;
//bool checkPoint(int i,int j,int a[505][505]){
//	
//}
//int main(){
////	freopen("output.txt","w",stdout);
//	freopen("output.txt","r",stdin);
//	int t;
//	cin>>t;
////	t=500;
//	cout<<t<<endl;
//	while(t--){
//		int n,m,dem=0;
//		cin>>n>>m;
////		n=rand()%100;
////		m=rand()%100;
////		cout<<n<<" "<<m<<endl;
//		int a[502][102];
//		int chuaxet[505][505];
//		for(int i=0;i<505;i++){
//			for(int j=0;j<505;j++)
//				chuaxet[i][j]=0;
//		}
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=m;j++){
//				cin>>a[i][j];
////				a[i][j]=rand()%2;
////				cout<<a[i][j]<<" ";
//			}
////			cout<<endl;
//		}
//		for(int i=1;i<=n;i++){
//			for(int j=1;j<=m;j++){
//				if(a[i][j]==1){
//					if(chuaxet[i-1][j-1] ==0&&chuaxet[i-1][j]  ==0&&
//						chuaxet[i-1][j+1]==0&&chuaxet[i][j-1]  ==0&&
//						chuaxet[i][j+1]  ==0&&chuaxet[i+1][j-1]==0&&
//						chuaxet[i+1][j]  ==0&&chuaxet[i+1][j-1]==0)
//						dem++;
//					else if(chuaxet[i-1][j-1]==1&&chuaxet[i-1][j+1]==1&&chuaxet[i-1][j]==0) dem--;
//					else if(chuaxet[i][j-1]==1&&chuaxet[i-1][j+1]==1&&chuaxet[i-1][j]==0) dem--;
//					chuaxet[i][j]=1;
//				}
//			}
//		}
//		cout<<dem<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[505][505];
int vis[505][505];
bool is_ok(int x,int y)
{
	return (x>=1 && x<=n && y>=1 && y<=m);
}
void bfs(pair<int,int> x)
{
	queue< pair<int,int> > q;
	q.push(x);
	vis[x.first][x.second]=1;
	int X[]={-1,-1,-1,0,0,1,1,1};
	int Y[]={-1,0,1,-1,1,-1,0,1};
	while(!q.empty())
	{
		pair<int,int> tmp=q.front(); q.pop();
		for(int i=0;i<8;i++)
		{
			int u=tmp.first+X[i],v=tmp.second+Y[i];
			if(is_ok(u,v) && !vis[u][v] && a[u][v]==1)
			{
				vis[u][v]=1;
				q.push({u,v});
			}
		}
	}
}		
	
int main(){
	int t; cin>>t;
	while(t--)
	{
	    memset(vis,0,sizeof(vis));
	    cin>>n>>m;
	    for(int i=1;i<=n;i++)
	    {
		    for(int j=1;j<=m;j++)
		    cin>>a[i][j];
	    }
	    int ans=0;
	    for(int i=1;i<=n;i++)
	    {
	       for(int j=1;j<=m;j++)
	       {
	   	        if(a[i][j]==1 && vis[i][j]==0)
	   	        {   
	   	            ans++;
	   	            bfs({i,j});
	   	        }
	   	    }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
