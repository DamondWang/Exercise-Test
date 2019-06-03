/*
 * 王子文 DamondWang于2019年编写
 * c++常用代码笔记
 */

#include <iostream>

//顺序容器  关联容器的头文件
#include <vector>
#include <stack>
#include <map>      //哈希，键值对
#include <list>    //双端链表，方便插入和删除
#include <string>
#include <set>    //元素不可以重复
#include <algorithm>

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <fstream>

#include <bits/stdc++.h>   //万能头文件

using namespace std;//谨慎使用，可能会出现命名冲突，所以建议使用std::cout,std::cin等表示

//可以代码加快运行速度
static const auto io_sync_off = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}( );

int strtoint(string str)   //字符串转化为整数
{
    stringstream ss;
    int value;
    ss<<str;
    ss>>value;
    ss.str("");
    ss.clear();
    return value;
}

//杨辉三角求排列组合  从0开始算，行和列
#define MAX 51
long long cnk[MAX][MAX]={0};

void buildY()
{
    int i;
    for(i=1,cnk[0][0]=1;i<MAX;i++)
    {
        cnk[i][0]=1;
        for (int j = 1; j <MAX ; ++j) {
            cnk[i][j]=cnk[i-1][j-1]+cnk[i-1][j];
        }
    }
}

//保留小数位数
//double p;
//cout.precision(6);小数的位数
//cout<<fixed<<p<<endl;


//输出集合，利用模板类
template <typename T>
void showset(set<T> s)
{
    for(auto iter=s.begin();iter!=s.end();++iter)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

//getline(cin,str);//输入一行带空格的字符串。

//transform(str[i].begin(),str[i].end(),str[i].begin(),::tolower);  将字符串变换大小写

