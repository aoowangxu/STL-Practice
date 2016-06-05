/*************************************************************************
	> File Name: 3.45.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 08:09:09 AM EDT
 ************************************************************************/

#include<iostream>
#include<list>
#include<string>
#include<assert.h>
#include"queue.cpp"

using namespace std;

int main()
{
    try
    {
        Queue<string> q1;
        q1.push("haidian");
        q1.push("chaoyang");
        q1.push("xuanwu");
        q1.push("xicheng");

        assert(q1.size() == 4);
        assert(q1.front() == "haidian");

        cout << "q1:" << endl;
        while (q1.size())
        {
            cout << " " << q1.front() << endl;
            q1.pop();
        }
    }
    catch(const exception &e)
    {
        cout << "exception: " << e.what() << endl;
    }
    return 0;
}
