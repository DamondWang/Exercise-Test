/*
 * 如果一个01串任意两个相邻位置的字符都是不一样的,我们就叫这个01串为交错01串。例如: "1","10101","0101010"都是交错01串。
 * 小易现在有一个01串s,小易想找出一个最长的连续子串,并且这个子串是一个交错01串。小易需要你帮帮忙求出最长的这样的子串的长度是多少。
 * 输入：输入包括字符串s,s的长度length(1 ≤ length ≤ 50),字符串中只包含'0'和'1'
 * 111101111
 * 输出：输出一个整数,表示最长的满足要求的子串长度。
 * 3
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
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len=str.length();
    vector<int> front,back;
    for (int i = 0; i <len-1 ; ++i) {
        front.push_back(i);
        for (int j = i; j <len-1 ; ++j) {
            if(str[j]==str[j+1])
            {
                back.push_back(j);
                break;
            }
            if(j==len-2)
            {
                back.push_back(j+1);
                break;
            }
        }
    }
    vector<int> v;
    for (int i = 0; i <front.size() ; ++i) {
        v.push_back(back[i]-front[i]+1);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1]<<endl;
    return 0;
}