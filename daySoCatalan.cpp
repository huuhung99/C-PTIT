#include<bits/stdc++.h>
using namespace std;
string c[5005];
bool isSmaller(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
 
    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
 
    return false;
}
string multiply(string num1, string num2) 
{ 
    int len1 = num1.size(); 
    int len2 = num2.size(); 
    if (len1 == 0 || len2 == 0) 
    return "0"; 
    vector<int> result(len1 + len2, 0);
    int i_n1 = 0;  
    int i_n2 = 0;  
    for (int i=len1-1; i>=0; i--) 
    { 
        int carry = 0; 
        int n1 = num1[i] - '0'; 
        i_n2 = 0;   
        for (int j=len2-1; j>=0; j--) 
        { 
            int n2 = num2[j] - '0'; 
            int sum = n1*n2 + result[i_n1 + i_n2] + carry; 
            carry = sum/10; 
            result[i_n1 + i_n2] = sum % 10; 
  
            i_n2++; 
        } 
        if (carry > 0) 
            result[i_n1 + i_n2] += carry; 
        i_n1++; 
    } 
    int i = result.size() - 1; 
    while (i>=0 && result[i] == 0) 
    i--; 
    if (i == -1) 
    return "0";
    string s = ""; 
      
    while (i >= 0) 
        s += std::to_string(result[i--]); 
  
    return s; 
} 
string findDiff(string str1, string str2)
{
    if (isSmaller(str1, str2))
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i = 0; i < n2; i++) { 
        int sub
            = ((str1[i] - '0') + (str2[i] - '0') + carry);
        if (sub >= 10) {
            sub = sub - 10;
            carry = 1;
        }
        else
            carry = 0; 
        str.push_back(sub + '0');
    }
    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') + carry);
        if (sub >= 10) {
            sub = sub - 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
    if(carry>0)str.push_back(carry + '0');
    reverse(str.begin(), str.end()); 
    return str;
}
string catalan(int n){
	c[0]='1';
	c[1]='1';
	for(int i=2;i<=n+1;i++){
		for(int j=0;j<i;j++){
			c[i]=findDiff(c[i],multiply(c[j],c[i-j]));
//			c[i]=c[i]+c[j]*c[i-j] multiply(c[j],c[i-j]);
		}
	}
	return c[n+1];
}
int main(){
	int n;cin>>n;
	cout<<catalan(n+1)<<endl;
	return 0;
}
