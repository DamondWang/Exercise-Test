#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <map>
#include <set>
using namespace std;
#define MAX 51

const int mod=1000000007;
int main()
{
    int i,j,s,left,cnk[MAX][MAX];
    long int cnt,tmp;
    vector<int> work(3);

    cin>>s>>work[0]>>work[1]>>work[2];
    sort(work.begin(),work.end());
    for (i = 1,cnk[0][0]=1; i <MAX ; ++i) {
        cnk[i][0]=1;
        for (int j = 1; j <MAX ; ++j) {
            cnk[i][j]=(cnk[i-1][j-1]+cnk[i-1][j])%mod;
        }
    }//建立杨辉三角  求排列组合
    left=s-work[2];
    for (i = 0,cnt=0; i <=left ; ++i) {                   //i是work1在left中分担的工作量
        if(i<=work[1] && left-i<=work[0])                 //left-i是work0在left中分担的工作量
        {
            tmp = cnk[work[2]][work[1] - i] % mod;        //在work2中有work1-i分配给work1
            tmp = (tmp * cnk[left][i]) % mod;              //left中有i个分配给work1
            tmp = (tmp * cnk[s - (left - i)][work[0] - (left - i)]) % mod; //work0的随意挑选部分
            cnt = (cnt + tmp) % mod;                      //每个case求和
        }
    }
    cnt=(cnt*cnk[s][work[2]])%mod;                          //  求和后与最初的情况求积
    cout<<cnt<<endl;
    return 0;
}

