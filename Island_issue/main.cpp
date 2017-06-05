/*
 *  有n*m的二维地图，其中1代表陆地，0代表海水，相邻的陆地可以组成更大的陆地，现在需要统计岛屿的个数。岛屿是被横向，
 *  总想海水环绕的（斜向的陆地不连接），地图的四边都是海水环绕
 *
 *  输入例子：
 *  4 5
 *  11000
 *  11000
 *  00100
 *  00011
 *
 *  输出例子：
 *   3
 *
 *
 * */



#include <iostream>
#include <string>
#include <queue>

using namespace std;

void isLand(int ** & a ,int ** & flag, int n,int m,int i,int j);

int main() {
    int n,m;
        cin>>n>>m;      //n行m列
    // 声明数组，首先是n行的指针，之后再把每一行指向m列
    int ** a = new int * [n];
    int ** flag = new int * [n];
    int count=0;
    string aline;

    for(int i=0;i<m;i++)
    {
        a[i] = new int[m];
        flag[i]= new int[m];
    }


    for(int i=0;i<n;i++)
    {
        cin>>aline;
     //   cout<<aline<<endl;
        for(int j=0;j<m;j++)
        {
            a[i][j] = aline[j]-'0';
          //  cout<<a[i][j]<<" ";
            flag[i][j] = 0;
        }
       // cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(a[i][j] != 0 && flag[i][j] ==0) //找到点未访问过，且该点数值不为0
           {
               count ++;
              // cout<<count<<endl;
               isLand(a,flag,n,m,i,j);
           }
        }
    }


    cout<<count<<endl;

    for(int i=0;i<n;i++)
    {
        delete [] a[i];//a[i]下的一列数据
        delete [] flag[i];//flag[i]下的一列数据;
    }
    delete []flag;
    delete []a;

    return 0;
}

void isLand(int ** &a,int ** & flag,int n,int m,int i ,int j)
{
    queue< pair<int,int> > que;
    // 将初始坐标压入队列,使用作为坐标索引
    que.push(make_pair(i,j));
    //
    while(!que.empty())
    {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();//问题出在这里，取值后要把这个值弹出
        //front()和pop通常是一对的，注意

        //  搜索该点上方,判断条件 1.上方坐标存在 2.上方数据不为空，上方点未被访问过 flag =0
        if(y-1>0 && a[x][y-1]!=0 && flag[x][y-1]==0)
        {
            flag[x][y-1] = 1; //该点符合要求且已经被访问过
            que.push(make_pair(x,y-1));//把要访问的上方点压入
        }
        // 搜索下方点
        if(x+1<n && a[x+1][y]!=0 && flag[x+1][y] ==0)
        {
            flag[x+1][y] =1;
            que.push(make_pair(x+1,y));
        }
        // 搜索左方
        if(y-1>0 && a[x][y-1]!=0 && flag[x][y-1] ==0)
        {
            flag[x][y-1] = 1;
            que.push(make_pair(x,y-1));
        }
        //搜索右方
        if(y+1<m && a[x][y+1]!=0 && flag[x][y+1] ==0)
        {
            flag[x][y+1] = 1;
            que.push(make_pair(x,y+1));
        }
    }
}