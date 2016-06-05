/*************************************************************************
	> File Name: 3.44.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 08:10:04 AM EDT
 ************************************************************************/

#include<iostream>
#include<queue>
#include<string>
#include<list>
#include<assert.h>

using namespace std;

int main()
{
    queue<string, list<string> > q1;
    q1.push("haidian district");
    q1.push("chaoyang district");
    q1.push("xuanwu district");
    q1.push("xicheng district");

    assert(q1.size() == 4);
    assert(q1.front() == "haidian district");

    cout << "q1:" << endl;
    while (q1.size())
    {
        cout << " " << q1.front() << endl;
        q1.pop();
    }
    return 0;
}
