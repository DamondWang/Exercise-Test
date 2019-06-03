/*
 * 有两个字符串（可能包含空格）,请找出其中最长的公共连续子串,输出其长度。
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
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int len1=str1.length(),len2=str2.length();
    int num,count=0;
    for (int i = 0; i <len1 ; ++i) {
        for (int j = 0; j <len2 ; ++j) {
            int a=i;
            int b=j;
            num=0;
            while (str1[i]==str2[j])
            {
                i++;
                j++;
                num++;
            }
            if(num>count)
                count=num;
            i=a;
            j=b;

        }
    }
    cout<<count<<endl;
    return 0;
}