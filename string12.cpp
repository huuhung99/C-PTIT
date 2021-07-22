#include<bits/stdc++.h>

using namespace std;

void process(){
    string s;
    cin >> s;
    bool alphabet[256] = {false};
    int cntDiff = 0;
    for(int i=0;i<s.length();i++){
        if (alphabet[s[i]] == false) cntDiff++;
        alphabet[s[i]] = true;
    }
    int res = INT_MAX;
    int curCntDiff = 0;
    int curCnt[256] = {0};
    int index = 0;
    for(int i=0;i<s.length();i++){
        if (curCnt[s[i]] == 0) curCntDiff++; 
        curCnt[s[i]]++;
        if (curCntDiff == cntDiff){
            while (curCnt[s[index]] > 1){
                curCnt[s[index]]--;
                index++;
            }
            int len = i-index+1;
            res = min(res , len);
       }    
    }
    cout << res << endl;
}

int main(){

    int T;
    cin >> T;
    while(T--) process();

    return 0;
}

