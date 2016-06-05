/*************************************************************************
	> File Name: 3.21.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 05:48:18 AM EDT
 ************************************************************************/

#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void print(int &ele)
{
    cout << ele << " ";
}

int main()
{
    list<int> l0, l1, l2, l3;
    l1.push_back(1);
    l1.push_back(5);
    l2.push_back(2);
    l2.push_back(3);
    l3.push_back(7);
    l3.push_back(8);

    l0.push_back(9);
    l0.push_back(-1);

    cout << "l1: ";
    for_each(l1.begin(), l1.end(), print);
    cout << endl;
    cout << "l2: ";
    for_each(l2.begin(), l2.end(), print);
    cout << endl;
    cout << "l3: ";
    for_each(l3.begin(), l3.end(), print);
    cout << endl;
    cout << "l0: ";
    for_each(l0.begin(), l0.end(), print);
    cout << endl;


    cout << "l1 splice(l2)";
    l1.splice(l1.end(), l2);
    for_each(l1.begin(), l1.end(), print);
    cout << endl;

    cout << "l2: ";
    for_each(l2.begin(), l2.end(), print);
    cout << endl;

    cout << "l1 splice(l0): " ;
    l1.splice(l1.end(), l0, (++l0.begin()));
    for_each(l1.begin(), l1.end(), print);
    cout << endl;

    cout << "l0: " ;
    for_each(l0.begin(), l0.end(), print);
    cout << endl;

    cout << "l1 splice(l3):" ;
    l1.splice(l1.end(), l3, l3.begin(), l3.end());
    for_each(l1.begin(), l1.end(), print);
    cout << endl;

    cout << " l3: ";
    for_each(l3.begin(), l3.end(), print);
    cout << endl;

    l1.sort(greater<int>());
    cout << " max to min l1: " ;
    for_each(l1.begin(), l1.end(), print);
    cout << endl;

    l1.sort();
    cout  << " min to max l1:  ";
    for_each(l1.begin(), l1.end(), print);
    cout << endl;




    return 0;
}
