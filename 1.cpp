/*有两个用字符串表示的非常大的大整数,算出他们的乘积，也是用字符串表示。不能用系统自带的大整数类型。
 * 输入：空格分隔的两个字符串，代表输入的两个大整数     72106547548473106236 982161082972751393
 * 输出：输入的乘积，用字符串表示                   70820244829634538040848656466105986748
 */
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    vector<int> num1(s1.length(),0);
    vector<int> num2(s2.length(),0);
    vector<int> ans(s1.length()+s2.length(),0);
    vector<int> ji(s1.length()+1,0);

    for(int i=s1.length()-1,j=0;i>=0;--i)
        num1[j++]=s1[i]-'0';
    for(int i=s2.length()-1,j=0;i>=0;--i)
        num2[j++]=s2[i]-'0';
    int cheng,jin,jin1,he,x,k;
    for(int i=0;i<num2.size();++i)
    {
        jin=0,cheng=0,jin1=0,he=0,x=0;
        for(int j=0;j<num1.size();++j)
        {
            cheng=num1[j]*num2[i]+jin;
            ji[x++]=cheng%10;
            jin=cheng/10;
        }
        ji[x]=jin;
        for(k=0;k<ji.size();++k)
        {
            he=ji[k]+ans[k+i]+jin1;
            ans[k+i]=he%10;
            jin1=he/10;
        }
        //ans[k+i]=jin1;
    }
    while(ans[ans.size()-1]==0) ans.pop_back();
    for(int i=ans.size()-1;i>=0;--i)
        cout<<ans[i];

    //system("pause");

    return 0;
}