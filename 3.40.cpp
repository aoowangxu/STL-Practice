/*************************************************************************
	> File Name: 3.40.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 09:03:40 AM EDT
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main()
{
    typedef map<int, double> MAP;
    MAP::allocator_type m1_alloc;
    MAP::allocator_type m2_alloc;
    MAP::allocator_type m3_alloc;
    MAP::allocator_type m4_alloc;
    MAP m1, m2, m3;
    m1_alloc = m1.get_allocator();
    m2_alloc = m2.get_allocator();
    m3_alloc = m3.get_allocator();
    MAP m4(less<int>(), m1_alloc);
    m4_alloc = m4.get_allocator();
    if (m1_alloc == m4_alloc)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "diff" << endl;
    }

    return 0;
}
