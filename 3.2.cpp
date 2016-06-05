/*************************************************************************
	> File Name: 3.2.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Mon 23 May 2016 12:20:52 PM EDT
 ************************************************************************/

#include<iostream>
#include<valarray>
using namespace std;

template <typename T>
void print(const valarray<T> &va)
{
    for ( int i = 0; i < va.size(); ++i )
    {
        cout << va[i];
    }
    cout << endl;
}

int main()
{
    valarray<int> val(4);
    print(val);
    valarray<int> va2(3, 4);
    print(va2);
    int ia[] = {1,2,3,4,5,6};
    valarray<int> va3(ia, sizeof(ia)/sizeof(ia[0]));
    print(va3);
    valarray<int> va4(ia+1, 4);
    print(va4);
    val = (va2 + va4)*va4;
    print(val);
    return 0;
}

