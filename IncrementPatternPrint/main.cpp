/*
 *  给定一个整数N，按以下方式打印2*N行，如果N=4且S=3则生成模式为：
 *  3
 *  44
 *  555
 *  6666
 *  6666
 *  555
 *  44
 *  3
 *  函数IncrementPatternPrint的输入包含一个整数N，（0<n<100)和一个正整数初始值S。
 *      该函数不要返回任何内容。使用cout打印输出要求的模式
 *  输出每一行有数字不要包含空格
 *
 *
 * */

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string getCopy(int s,int num);
void IncrementPatternPrint(int n,int s);

int main() {
    int n=0,s=0;
    cin >>n >>s;
    
    IncrementPatternPrint(n,s);
    
    return 0;
}

void IncrementPatternPrint(int n,int s)
{
    vector<string> strvec;
    //代表当前数字循环次数,n循环s次
    
    for(int i=1;i<=s;i++)
    {
        strvec.push_back(getCopy(n,i));
        n++;
    }
    
    for(auto it=strvec.begin();it!=strvec.end();it++)
    {
        cout<<*it<<endl;
    }
    //你循环注意
    for(auto it=strvec.end()-1;it!=strvec.begin()-1;it--)
    {
        cout<<*it<<endl;
    }
}

string getCopy(int s,int num)
{
    string res;
    //int向char的简单转换注意
    for(int i=0;i<num;i++)
    {
        res += s + '0';
    }
    return res;
}
