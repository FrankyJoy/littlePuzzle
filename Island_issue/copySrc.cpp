//
// 这是参考的源码，来源：
// http://blog.csdn.net/na_beginning/article/details/71577638
// 侵删
//

#include <iostream>
#include <string>
#include <queue>
using namespace std;

void island(bool **a, int n, int m, bool **flag, int i, int j){
    queue<pair<int, int> > qu;
    qu.push(make_pair(i,j));
    flag[i][j] = 1;
    while(!qu.empty()){
        pair<int, int> p = qu.front();
        qu.pop();
        if(p.second+1 < m && a[p.first][p.second+1] == 1 && flag[p.first][p.second+1] == 0 ){
            qu.push(make_pair(p.first, p.second+1));
            flag[p.first][p.second+1] = 1;
        }
        if(p.first+1 < n && a[p.first+1][p.second] == 1 && flag[p.first+1][p.second] == 0){
            qu.push(make_pair(p.first+1,p.second));
            flag[p.first+1][p.second] = 1;
        }
        if(p.second-1 >=0 && a[p.first][p.second-1] == 1 && flag[p.first][p.second-1] == 0){
            qu.push(make_pair(p.first,p.second-1));
            flag[p.first][p.second-1] = 1;
        }
        if(p.first-1 >= 0 && a[p.first-1][p.second] == 1 && flag[p.first-1][p.second] == 0){
            qu.push(make_pair(p.first-1,p.second));
            flag[p.first-1][p.second] = 1;
        }
    }
}

void test1(){
    int n, m;
    while(cin >> n >> m){
        bool **a = new bool*[n];
        bool **flag = new bool*[n];
        for(int i = 0;i < n;i++){
            a[i] = new bool[m];
            flag[i] = new bool[m];
        }
        string temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            for(int j = 0; j < m; j++){
                a[i][j] = temp[j]-'0';
                flag[i][j] = 0;
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1 && flag[i][j] == 0){
                    count++;
                    island(a, n, m, flag, i, j);
                }
            }
        }
        cout << count << endl;
        for(int i = 0; i < n; i++){
            delete [] a[i];
            delete [] flag[i];
            a[i] = 0;
            flag[i] = 0;
        }
        delete [] a;
        delete [] flag;
        a = 0;
        flag = 0;
    }
}

int main1(){
    test1();
    return 0;
}