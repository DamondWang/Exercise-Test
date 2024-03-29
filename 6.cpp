/*
 * 小易为了向他的父母表现他已经长大独立了,他决定搬出去自己居住一段时间。一个人生活增加了许多花费: 小易每天必须吃一个水果并且需要每天支付x元的房屋租金。当前小易手中已经有f个水果和d元钱,
 * 小易也能去商店购买一些水果,商店每个水果售卖p元。小易为了表现他独立生活的能力,希望能独立生活的时间越长越好,小易希望你来帮他计算一下他最多能独立生活多少天。
 * 输入：输入包括一行,四个整数x, f, d, p(1 ≤ x,f,d,p ≤ 2 * 10^9),以空格分割
 * 3 5 100 10
 * 输出：输出一个整数, 表示小易最多能独立生活多少天。
 * 11
 */

#include<iostream>
#include<vector>
#include <stack>
#include<string>
#include<algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
    long long x,f,d,p;
    cin>>x>>f>>d>>p;
    if(f<(d/x))
    {
        cout<<(d+f*p)/(x+p)<<endl;
    } else
    {
        cout<<d/x<<endl;
    }
    return 0;
}