/*************************************************************************
	> File Name: 3.15.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 05:16:18 AM EDT
 ************************************************************************/

#include<iostream>
#include<list>
using namespace std;

template<typename T>
void print(list<T> &mylist)
{
    list<double>::iterator it;// list<T>::iterator it;
    mylist.reverse();
    for (it = mylist.begin(); it != mylist.end(); ++it)
    {
        cout << *it << ", ";
    }

    cout << endl;
}

int main()
{
    list<double> list1, list2, list3;
    double ele = 0;
    for (int i = 0; i < 10 ; ++i)
    {
        ele = i + i / 10.0;
        list1.push_front(ele);
    }

    cout << "list1 "<< endl;
    print(list1);

    list2.assign(5, 5.6);
    cout << "list2"<< endl;
    print(list2);

    list3.assign(list1.begin(), list1.end());
    cout << "list3" << endl;
    print(list3);

    return 0;
}
