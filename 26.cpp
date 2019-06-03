/*
 * 小Q十分富有，拥有非常多的硬币，小Q拥有的硬币是有规律的，对于所有的非负整数K，小Q恰好各有两个面值为2^K的硬币，所以小Q拥有的硬币就是1,1,2,2,4,4,8,8,…。
 * 小Q有一天去商店购买东西需要支付n元钱，小Q想知道有多少种方案从他拥有的硬币中选取一些拼凑起来恰好是n元（如果两种方案某个面值的硬币选取的个数不一样就考虑为不一样的方案）。
 */

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
#include <iomanip>
#include <typeinfo>
#include <unordered_map>
using namespace std;
unordered_map<long long,long long> ans;
long long f(long long n)
{
    if(ans.find(n)!=ans.end())
        return ans[n];
    if(n<3)
        return n;
    if(n&1)
        return ans[n]=f(n/2);
    else
        return ans[n]=f(n/2)+f(n/2-1);
}
int main()
{
    long long n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
