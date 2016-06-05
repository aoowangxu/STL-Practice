/*************************************************************************
	> File Name: 3.32.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 09:39:36 AM EDT
 ************************************************************************/

#include<iostream>
#include<map>

using namespace std;

typedef pair<int, double> Custompair;
void print(map<int, double> &m)
{
    map<int, double>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        Custompair p1 = (pair<int, double>)(*it);
        cout << p1.first << ", " ;
        cout << std::fixed << cout.precision(2) << p1.second << "; " << endl;
    }
}

void printm(multimap<int, double> &m)
{
    multimap<int, double>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        Custompair p1 = (pair<int, double>)(*it);
        cout << p1.first << endl;
        cout << std::fixed << cout.precision(2) << p1.second << endl;
    }
}

void printg(map<int, double, greater<int> > &m)
{
    map<int, double, greater<int> >::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        Custompair p1 = (pair<int, double>)(*it);
        cout << p1.first << ", " ;
        cout << std::fixed << cout.precision(2) << p1.second << "; " << endl;
    }
}

void printgm(multimap<int, double, greater<int> > &m)
{
    multimap<int, double, greater<int> >::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        Custompair p1 = (pair<int, double>)(*it);
        cout << p1.first << endl;
        cout << std::fixed << cout.precision(2) << p1.second << endl;
    }
}



void printml(multimap<int, double, less<int> > &m)
{
    multimap<int, double, less<int> >::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        Custompair p1 = (pair<int, double>)(*it);
        cout << p1.first << endl;
        cout << std::fixed << cout.precision(2) << p1.second << endl;
    }
}

int main()
{
    map<int, double>::iterator itm;
    map<int, double, greater<int> >::iterator itmg;
    map<int, double, less<int> > ::iterator itml;
    map<int, double> m1;
    map<int, double, greater<int> > m2;
    multimap<int, double> m3;
    multimap<int, double, greater<int> > m4;
    return 0;
}
