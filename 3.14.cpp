/*************************************************************************
	> File Name: 3.14.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 05:10:00 AM EDT
 ************************************************************************/

#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void print(double &ele)
{
    cout << ele << ",";
}

int main()
{
    list<double>mylist;
    mylist.push_back(11.1);
    mylist.push_front(12.1);
    mylist.push_back(31.3);
    mylist.push_back(4564.2);

    int count = mylist.size();
    for_each(mylist.begin(), mylist.end(), print);
    cout << endl;
    
    list<double>::iterator it;
    it = mylist.begin();
    cout << "the third element is " << *(++(++(it))) << endl;


    return 0;
}

