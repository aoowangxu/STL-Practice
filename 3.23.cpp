/*************************************************************************
	> File Name: 3.23.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 03:27:09 AM EDT
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
    deque<int> d2;
    deque<int> d3(10, 2), d31(10, 3);
    deque<int> d4(d3);
    deque<int> d5(d31.begin(), d31.end());

    cout << "d1:" << endl;
    for_each(d1.begin(), d1.end(), print);
    cout << endl;
    cout << "d2:" << endl;
    for_each(d2.begin(), d2.end(), print);
    cout << endl;
    cout << "d3:" << endl;
    for_each(d3.begin(), d3.end(), print);
    cout << endl;
    cout << "d31:" << endl;
    for_each(d31.begin(), d31.end(), print);
    cout << endl;
    cout << "d4:" << endl;
    for_each(d4.begin(), d4.end(), print);
    cout << endl;
    cout << "d5:" << endl;
    for_each(d5.begin(), d5.end(), print);
    cout << endl;

    int size = d2.size();
    cout << "the size of d2:" << size << endl;
    int msize = d2.max_size();
    cout << "d2 the max size:" << msize << endl;

    d31.resize(5, 'a');
    cout << "d31:" << endl;
    for_each(d31.begin(), d31.end(), print);
    cout << endl;

    d31.resize(7, 3);
    cout << "d31:" << endl;
    for_each(d31.begin(), d31.end(), print);
    cout << endl;

    return 0;

}

