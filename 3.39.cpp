/*************************************************************************
	> File Name: 3.39.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 09:18:32 AM EDT
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

typedef map<int, double, less<int> > MAP;
typedef multimap<int, double, greater<int> > M_MAP;

typedef pair<MAP:: iterator, bool> mypair;
typedef pair<int, double> myp;

void print(MAP &m)
{
    MAP::iterator it;
    myp temp_p;
    for (it = m.begin(); it != m.end(); ++it)
    {
        temp_p = (*it);
        cout << temp_p.first << ", " << temp_p.second << endl;
    }
    cout << endl;
}

void print_m(M_MAP &m)
{
    M_MAP::iterator it;
    myp temp_p;
    for (it = m.begin(); it != m.end(); ++it)
    {
        temp_p = *it;
        cout << temp_p.first << ", " << temp_p.second << endl;
    }
    cout << endl;
}

int main()
{
    MAP m1;
    M_MAP m2;
    M_MAP:: iterator ita, itb;
    mypair p1, p2;
    MAP:: value_compare vc1 = m1.value_comp();
    M_MAP:: value_compare vc2 = m2.value_comp();
    p1 = m1.insert(map<int, double>::value_type(1, 10));
    p2 = m1.insert(map<int, double>::value_type(2, 5));
    cout << "m1:" << endl;
    print(m1);

    if(vc1(*p1.first, *p2.first) == true)
    {
        cout << "(1, 10) (2, 5)" << endl;;
    }
    else
    {
        cout << "(2, 5) (1, 10)" << endl;
    }
    return 0;
}
