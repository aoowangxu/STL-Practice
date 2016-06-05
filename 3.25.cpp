/*************************************************************************
	> File Name: 3.25.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 03:47:58 AM EDT
 ************************************************************************/

#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

void out(double &ele)
{
    cout.width(5);
    cout.precision(1);
    cout << std::fixed << ele << " ";
}

int main()
{
    deque<double>::iterator iter;
    deque<double>::reverse_iterator riter;
    deque<double> d1, d2, d3;
    for (int i = 0; i < 10; ++i)
    {
        d1.push_front(90+i/10.0);
    }

    cout << "all the element of deque d1:" << endl;
    for_each(d1.begin(), d1.end(), out);
    cout << endl;

    iter = d1.begin();
    double begin = *iter;
    iter = d1.end();
    double end = *(--iter);


    riter = d1.rbegin();
    double rbegin = *riter;
    riter = d1.rend();
    double rend = *(--riter);

    cout << " begin end:" << begin <<" " << end << "\n rbegin  rend" << rbegin << " " << rend<< endl;
    cout << "front back" << d1.front() << " " << d1.back() << endl;

    if (d1.empty())
    {
        cout << "deque d1 is empty!" << endl;
    }
    else 
    {
        int size = d1.size();
        cout << "size " << size << endl;
    }

    double five = d1.at(5);
    cout << "d1[5] = " << five << endl;

    d2.assign(6, 0);
    d3.assign(d1.begin(), d1.end());
    cout << "all the d2:"<< endl;
    for_each(d2.begin(), d2.end(), out);
    cout << endl;

    cout << "d3 : "<< endl;
    for_each(d3.begin(), d3.end(), out);
    cout << endl;


    return 0;
}
