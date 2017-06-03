/*
 *  Given nums = [2, 7, 11, 15], target = 9,
 *  Because nums[0] + nums[1] = 2 + 7 = 9,
 *  return [0, 1].
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> twoNum(vector<int> &num,int target)
    {
        vector<int> bp = num;
        vector<int> result;  //你将result(2)后，会新增加两个空的元素下标0和1，之后的元素是在下标为2的开始
        vector<int> ss;      //注意你在使用num之前已经将它进行了排序
        sort(num.begin(),num.end());
        int i,j;

        //循环条件，前面一个下标小于后面一个下标，
        for(i=0,j=num.size()-1; i<j;)
        {
            if(num[i]+num[j]==target)
            {
                //cout<<i<<" : "<<j<<endl;
                result.push_back(num[i]);
                result.push_back(num[j]);
                break;
            }
            else if(num[i]+num[j]>target)
            { j--;}
            else if(num[i]+num[j]<target)
            { i++;}
        }

        for(int i=0;i<bp.size()-1;i++)
        {
            if(bp[i] == result[0] || bp[i] == result[1])
            {
               // cout<<i<<":"<<j<<endl;
                ss.push_back(i);
            }
        }

        return ss;

    }
};


int main1() {
    //std::cout << "Hello, World!" << std::endl;
    vector<int> num;
    num.push_back(2);
    num.push_back(7);
    num.push_back(11);
    num.push_back(15);
    int target = 9;

    vector<int> ss;
    Solution slv;
    ss = slv.twoNum(num,target);
    for(auto it=ss.begin();it!=ss.end();it++)
        cout<<*it<<" ";

    return 0;
}