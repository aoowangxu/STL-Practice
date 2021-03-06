/*************************************************************************
	> File Name: 3.26.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 04:07:55 AM EDT
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
    deque<double> d1, d2;
    for (int i = 0; i < 10 ; ++i)
    {
        d1.push_front(20 + i/10.0);
    }

    cout << "d1:" << endl;
    for_each(d1.begin(), d1.end(), out);
    cout << endl;


    for (int i = 0; i < 10; ++i)
    {
        d2.push_back(19+i/10.0);
    }
    cout << "d2:" << endl;
    for_each(d2.begin(), d2.end(), out);
    cout << endl;


    d1.swap(d2);
    cout << "d1 swap d2" << endl;
    cout << "d1: "  << endl;
    for_each(d1.begin(), d1.end(), out);
    cout << endl;

    cout << " d2:" << endl;
    for_each(d2.begin(), d2.end(), out);
    cout << endl;

    d1.insert(d1.begin(), -1.0);
    d1.insert(d1.end(), -1.0);
    d1.insert(d1.begin() + 6, -0.0);

    cout <<" d1 :" << endl;
    for_each(d1.begin(), d1.end(), out);
    cout << endl;

    d1.erase(d1.begin() + 1);
    d1.erase(d1.begin() + 10);
    cout << "d1: " << endl;
    for_each(d1.begin(), d1.end(), out);
    cout << endl;

    d2.clear();
    cout << "clear d2" << endl;
    cout << "d2: " << endl;
    for_each(d2.begin(), d2.end(), out);
    cout << endl;

    deque<double>::iterator it = find(d1.begin(), d1.end(), 20.5);
    int step = (it - d1.begin());
    cout << "find 20.5 in d1 , the index : " << step << endl;



    return 0;
}
