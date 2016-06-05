/*************************************************************************
	> File Name: 3.38.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 09:10:58 AM EDT
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

int main()
{
    typedef map<int, double, less<int> > MAP;
    typedef multimap<int, double, greater<int> > M_MAP;
    MAP m1;
    M_MAP m2;
    MAP::key_compare kc1 = m1.key_comp();
    M_MAP::key_compare kc2 = m2.key_comp();
    bool r = kc1(2, 3);
    bool m_r = kc2(3, 4);
    if (r)
    {
        cout << "kc1() true"<< endl;
    }
    else{
        cout << "kc1() false" << endl;
    }
    if (m_r)
    {
        cout << "kc2() true" << endl;
    }
    else
    {
        cout << "kc2() false" << endl;
    }
    return 0;
}
