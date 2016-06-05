/*************************************************************************
	> File Name: 3.46.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 07:54:45 AM EDT
 ************************************************************************/

#include<iostream>
#include<queue>
#include<vector>
#include<list>

using namespace std;

void print(double &ele)
{
    cout << ele << ",";
}

template <class T>
void out(priority_queue<T, deque<T>, less<T> > &p)
{
    while (!p.empty())
    {
        cout << p.top() << ", ";
        p.pop();
    }
    cout << endl;
}

template <class T> 
void outg(priority_queue<T, deque<T>, greater<T> > &pg)
{
    while (!pg.empty())
    {
        cout << pg.top() << ", ";
        pg.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue <double, deque<double>, less<double> > p1, p2;
    p1.push(11.5);
    p1.push(22.5);
    p1.push(32.5);
    p1.push(21.1);
    p1.push(15.6);
    p1.push(8.9);
    p1.push(55.0);

    p2 = p1;
    out(p1);
    p1 = p2;
    priority_queue<double, deque<double>, greater<double> > p3;
    while (p2.size())
    {
        p3.push(p2.top());
        p2.pop();
    }


    outg(p3);
    return 0;
}
