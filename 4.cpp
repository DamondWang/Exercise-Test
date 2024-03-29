/*
 * 如果一个数列S满足对于所有的合法的i,都有S[i + 1] = S[i] + d, 这里的d也可以是负数和零,我们就称数列S为等差数列。
 * 小易现在有一个长度为n的数列x,小易想把x变为一个等差数列。小易允许在数列上做交换任意两个位置的数值的操作,并且交换操作允许交换多次。
 * 但是有些数列通过交换还是不能变成等差数列,小易需要判别一个数列是否能通过交换操作变成等差数列.
 * 输入：输入包括两行,第一行包含整数n(2 ≤ n ≤ 50),即数列的长度。第二行n个元素x[i](0 ≤ x[i] ≤ 1000),即数列中的每个整数
 * 3
 * 3 1 2
 * 输出：如果可以变成等差数列输出"Possible",否则输出"Impossible"。
 * Possible
 */
#include <iostream>
#include <vector>
#include <fstream>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <pthread.h>
#include <sstream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i <v.size() ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int d=v[1]-v[0];
    int flag=0;
    for (int i = 1; i <v.size()-1 ; ++i) {
        if((v[i+1]-v[i])==d)
        {
            continue;
        } else{
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"Possible"<<endl;
    else cout<<"Impossible"<<endl;
    return 0;
}

