/*************************************************************************
	> File Name: 3.11.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Mon 23 May 2016 11:25:22 AM EDT
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print(bool  ele)// bool why dosen't use &;
{
    cout << ele;
}

int  main()//c++ must int main() not void main();
{
    int x[] = {1, 0, 1, 0,1,1,1,1, 0};
    vector<bool> vt;
    vector<bool>::iterator it;
    int i = 0;
    for (i = 0; i < sizeof(x)/sizeof(int); ++i)
    {
        vt.push_back(bool(x[i]));
    }

    for_each(vt.begin(), vt.end(), print);
    cout << endl;
    vt[3] = 1;
    for_each(vt.begin(), vt.end(), print);
    cout << endl;

}

