/*************************************************************************
	> File Name: 3.3.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Mon 23 May 2016 12:37:36 PM EDT
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> myvt;
    myvt.reserve(4);
    myvt.push_back("1.beging");
    myvt.push_back("2.tianjin");
    myvt.push_back("3.shanghai");
    myvt.push_back("4.chongqing");
    cout << "ok" << endl;

    vector<string>::iterator it;
    for (it = myvt.begin(); it != myvt.end(); ++it)
    {
        cout  << *it << endl;
    }

    int m = myvt.size();
    int n = myvt.capacity();
    int m1 = myvt.max_size();

    cout << "size " << m << "   capacity:" << n << "   max_size:" << m1 << endl;

    myvt.resize(10);
    cout << "resize 10" << endl;
    m = myvt.size();
    n = myvt.capacity();
    cout << "size : " << m << "   capacity:" << n << endl;
    for (it = myvt.begin(); it != myvt.end(); ++it)
    {
        if (*it == "")
        {
            cout << "****" << endl;
        }
        cout << *it << endl;
    }
    cin.get();
    return 0;

}

