#include <bits/stdc++.h>
using namespace std;
long long tmp[301]; // dung cho phan duoi
struct BIGNUM{
    const static int base = 1e8; // moi a luu 8 chu so , tao hay cai thi thay base 8cs chay nhanh nhat
    const static int maxd = 1000; // co toi da 300 a ( tuc la so nay co toi da 8*300 chu so )
    int a[maxd],d;
    BIGNUM(long long z=0){ // chuyen tu long long -> bignum
        d=0;
        memset(a,0,sizeof a);
        while (z){
            a[++d]=z%base;
            z/=base;
        }
    }
    /*
    BIGNUM(string w=""){ // chuyen tu string -> bignum
        d=0;
        memset(a,0,sizeof a);
        int m=w.size(),cs;
        while (m>0){
            cs=0;
            for (int i=max(m-8,0); i<m; i++) cs=(cs<<1)+(cs<<3)+w[i]-'0';
            a[++d]=cs;
            m-=8;
        }
    }
    */
    // 2 ham nay tuy bai, ko de 2 cai cung luc dc
    void println(){ // in so lon
        if (d==0) printf("0\n");else{
            printf("%d",a[d]);
            for (int i=d-1; i>=1; i--) printf("%08d",a[i]);
            printf("\n");
        }
    }
    BIGNUM operator + (const BIGNUM &op)const{ // cong 2 so lon
        BIGNUM ans=BIGNUM();
        ans.d=max(d,op.d);
        int cs,nho=0;
        for (int i=1; i<=ans.d; i++){
            cs=nho+a[i]+op.a[i];
            nho=cs/base;
            ans.a[i]=cs%base;
        }
        while (nho){
            ans.a[++ans.d]=nho%base;
            nho/=base;
        }
        return ans;
    }
    BIGNUM operator - (const BIGNUM &op)const{ // so dang co - op , so dang co phai >= op ko kq sai day
        BIGNUM ans=BIGNUM();
        ans.d=d;
        int nho=0,cs;
        for (int i=1; i<=ans.d; i++){
            cs=a[i]-op.a[i]-nho;
            if (cs>=0) nho=0; else{
                cs+=base;
                nho=1;
            }
            ans.a[i]=cs;
        }
        while (ans.d&&ans.a[ans.d]==0) ans.d--;
        return ans;
    }
    BIGNUM operator * (const long long &op)const{ // nhan 1 so lon voi 1 so long long
        BIGNUM ans=BIGNUM();
        if (op==0) return ans;
        ans.d=d;
        long long cs,nho=0;
        for (int i=1; i<=ans.d; i++){
            cs=nho+1LL*op*a[i];
            nho=cs/base;
            ans.a[i]=cs%base;
        }
        while (nho){
            ans.a[++ans.d]=nho%base;
            nho/=base;
        }
        return ans;
    }
    BIGNUM operator * (const BIGNUM &op)const{ // nhan 2 so lon voi nhau
        BIGNUM ans=BIGNUM();
        ans.d=op.d+d-1;
        memset(tmp,0,sizeof tmp);
        for (int i=1; i<=op.d; i++)
            for (int j=1; j<=d; j++)
                tmp[i+j-1]+=1LL*op.a[i]*a[j];
        long long nho=0,cs;
        for (int i=1; i<=ans.d; i++){
            cs=nho+tmp[i];
            nho=cs/base;
            ans.a[i]=cs%base;
        }
        while (nho){
            ans.a[++ans.d]=nho%base;
            nho/=base;
        }
        return ans;
    }
    bool operator < (const BIGNUM &op)const{  // kiem tra so dang co < op ko
        if (d==op.d){
            for (int i=d; i>=1; i--)
                if (a[i]<op.a[i]) return 1; else
                if (a[i]>op.a[i]) return 0;
            return 0;
        }
        return d<op.d;
    }
} ans;
int n,cnt[10010];
bool nt[10010];
void update(int m,int sign){
    for (int i=2; i<=m; i++)
        if (!nt[i]){
            int z=1;
            while (1LL*z*i<=1LL*m){
                z*=i;
                cnt[i]+=sign*(m/z);
            }
        }
 
}
int main(){
    cin>>n;
    n++;
    for (int i=2; i<=2*n; i++)
        if (!nt[i]) for (int j=i*i; j<=2*n; j+=i) nt[j]=1;
    update(2*n,1);
    update(n,-1);
    update(n+1,-1);
    ans=BIGNUM(1);
    for (int i=1; i<=2*n; i++)
        for (int j=1; j<=cnt[i]; j++)
            ans=ans*i;
    ans.println();
}
