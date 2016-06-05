/*************************************************************************
	> File Name: 3.8.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Mon 23 May 2016 12:06:41 PM EDT
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print(int &ele)
{
    cout << ele << " ";
}

int main()
{
    vector<int> myvt;
    for (int i = 0; i < 10; ++i)
    {
        myvt.push_back(i);
    }
    myvt.insert(myvt.begin(), -1);

    for_each(myvt.begin(), myvt.end(), print);
    cout << endl;

    myvt.insert(myvt.begin(), -2);
    for_each(myvt.begin(), myvt.end(), print);
    cout << endl;

    vector<int> vt2;
    vt2.push_back(-8);
    vt2.push_back(-9);

    myvt.insert(myvt.end(), vt2.begin(), vt2.end());
    for_each(myvt.begin(), myvt.end(), print);
    cout << endl;
    myvt.insert(myvt.begin(), 3, 0);
    for_each(myvt.begin(), myvt.end(), print);
    cout << endl;

    return 0;
}
