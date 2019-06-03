/*
 * 在抽象代数中，我们学过一个关于有限域的定理：存在一个大小为q的有限域当且仅当q是某个素数p的方幂，即q=pk ,
 * 输入：第一行包含一个整数，数的范围在[1,10000]
 * 1
 * 输出：输出阶数不超过
 * 0
 */
#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <list>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <sstream>
using namespace std;
bool prime(int value)
{
    for (int i = 2; i <=sqrt(value) ; ++i) {
        if(value%i==0)
            return false;
    }
    return true;
}
int main()
{
    int q;
    cin>>q;
    int sum=0;
    int p;//素数
    int value;
    for (int i = 2; i <=q ; ++i) {
        value=i;
        if(prime(value))
            sum++;
        else{
            for (int j = 2; j <=sqrt(value) ; ++j) {
                if(prime(j))
                {
                    p=j;
                    for (int k = 2; k <=log(value)/log(2); ++k) {
                        if(value==pow(p,k))
                        {
                            sum++;
                            break;
                        }
                    }
                    continue;
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
