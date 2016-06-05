/*************************************************************************
	> File Name: 3.22.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 05:37:51 AM EDT
 ************************************************************************/

#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void print(int &ele)
{
    cout << ele << " ";
}

int main()
{
    list<int> l1, l2;
    not_equal_to<int > pred;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(2);
    l1.push_back(10);
    l1.push_front(12);
    l1.push_back(7);
    l1.push_back(1);

    l2.assign(l1.begin(), l1.end());
    for_each(l2.begin(), l2.end(), print);
    cout << endl;

    l1.sort();
    l1.unique();
    for_each(l1.begin(), l1.end(), print);
    cout << endl;

    l2.sort();
    l2.unique(pred);
    for_each(l2.begin(), l2.end(), print);
    cout << endl;
    return 0;
}
