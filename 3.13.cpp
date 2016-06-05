/*************************************************************************
	> File Name: 3.13.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 05:05:49 AM EDT
 ************************************************************************/

#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<double>mylist;
    mylist.push_back(10.0);
    bool empty = 0;
    if (mylist.empty())
    {
        cout << "the list is empty!" << endl;
    }
    else
    {
        empty = mylist.empty();
        cout << mylist.front() << ", " << empty << endl;
    }
    return 0;
}
