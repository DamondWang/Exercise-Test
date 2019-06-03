/*
 * 小易参加了一个骰子游戏,这个游戏需要同时投掷n个骰子,每个骰子都是一个印有数字1~6的均匀正方体。
 * 小易同时投掷出这n个骰子,如果这n个骰子向上面的数字之和大于等于x,小易就会获得游戏奖励。
 * 小易想让你帮他算算他获得奖励的概率有多大。
 * 输入：输入包括两个正整数n和x(1 ≤ n < 25, 1 ≤ x < 150),分别表示骰子的个数和可以获得奖励的最小数字和。
 * 3 9
 * 输出：输出小易可以获得奖励的概率。如果概率为1,输出1,如果概率为0,输出0,其他以最简分数(x/y)的形式输出。
 * 20/27
 */
#include<bits/stdc++.h>
using namespace std;
long long fun1(long long a,long long b)
{
    if(a%b==0)
        return b;
    else
        return fun1(b,a%b);
}
string fun(int n,int x)
{
    int max_=n*6+1;
    long long dp[n+1][max_+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=6;i++)
    {
        dp[1][i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=i;j<=i*6;j++)
        {
            int temp=j-1;
            int fflag=j-6;
            if(fflag<1)
                fflag=1;
            if(temp>(i-1)*6)
                temp=(i-1)*6;
            while(temp>=fflag){
                dp[i][j]+=dp[i-1][temp];
                temp--;
            }
        }
    }
    long long num1=0;
    long long num2=0;

    for(int i=x;i<=n*6;i++)
    {
        num1+=dp[n][i];
    }
    for(int i=n;i<=n*6;i++)
    {
        num2+=dp[n][i];
    }
    if(num1==0){
        cout<<0<<endl;
        return to_string(0);
    }
    if(num1==num2){
        cout<<1<<endl;
        return to_string(1);
    }

    long long gys=fun1(num2,num1);

    long long a=num1/gys;
    long long b=num2/gys;
    string r=to_string(a)+'/'+to_string(b);
    cout<<r<<endl;
    return r;
}
int main()
{
    int n,x;
    cin>>n>>x;
    fun(n,x);
    return 0;
}