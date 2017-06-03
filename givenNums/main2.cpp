/*
 *  Given nums = [2, 7, 11, 15], target = 9,
 *  Because nums[0] + nums[1] = 2 + 7 = 9,
 *  return [0, 1].
 *
 *  使用hash表的写法
 */
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoNum(vector<int> &num,int target)
    {
        unordered_map<int,int> contain;
        vector<int> resvec;
        for(int i=0;i<num.size();i++)
        {
            //使用unordered_map 提高查找速度，如果在已有的map中没有找到值则将其压入map
            if(contain.find(target-num[i])!=contain.end())
            {
                //如果找到
                resvec.push_back(i);
                resvec.push_back(contain[target-num[i]]);
                return resvec; //   找到后直接返回
            }
            //如果没有找到
            contain[num[i]] = i;
        }

        resvec.push_back(-1);
        resvec.push_back(-1);
        return resvec;

    }
};

int main() {
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