/*************************************************************************
	> File Name: 3.9.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Mon 23 May 2016 11:46:22 AM EDT
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
    for_each(myvt.begin(), myvt.end(), print);
    cout << endl;
    cout << "_________________________________________________________" << endl;

    while (!myvt.empty())
    {
        myvt.pop_back();
        for_each(myvt.begin(), myvt.end(), print);
        cout << endl;
    }
    myvt.clear();
    for (int j = 0; j < 10; ++j)
    {
        myvt.push_back(j);
    }
    for_each(myvt.begin(), myvt.end(), print);
    cout << endl;

    cout << "________________"  << endl;
    while (!myvt.empty())
    {
        myvt.erase(myvt.begin());
        for_each(myvt.begin(), myvt.end(), print);
        cout << endl;
    }
    return 0;
}
