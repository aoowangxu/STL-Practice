/*************************************************************************
	> File Name: 3.24.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 03:42:44 AM EDT
 ************************************************************************/

#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void print(int &ele)
{
    cout << ele << " ";
}

int main()
{
    deque<int> d1;
    d1.push_front(0);
    d1.push_front(1);
    d1.push_back(2);
    d1.push_back(3);
    cout << "d1:" << endl;
    for_each(d1.begin(), d1.end(), print);
    cout << endl;

    d1[3] = 100;
    cout << "d1: " << endl;
    for_each(d1.begin(), d1.end(), print);
    cout << endl;

    return 0;
}
