/*************************************************************************
	> File Name: 3.43.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 08:38:31 AM EDT
 ************************************************************************/

#include<iostream>
#include<stack>
#include<string>
#include<list>
#include<assert.h>

using namespace std;

int main()
{
    stack<string, list<string> > s1;
    s1.push("haidian");
    s1.push("chaoyang");
    s1.push("xuanwu");
    s1.push("xicheng");

    assert(s1.size() == 4);
    assert(s1.top() == "xicheng");
    cout << "s1: " << endl;
    while (s1.size())
    {
        cout << " " << s1.top() << endl;
        s1.pop();
    }
    return 0;
}
