/*************************************************************************
	> File Name: 3.1.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Mon 23 May 2016 12:17:59 PM EDT
 ************************************************************************/

#include<iostream>
#include<bitset>
#include<string>

using namespace std;

int main()
{
    bitset<10> bs1(7);
    bitset<10> bs2(string("1001010101"));
    cout << bs1 << endl;
    cout << bs2 << endl;
    return 0;
}

