/*************************************************************************
	> File Name: 3.41.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 08:56:35 AM EDT
 ************************************************************************/

#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int col[] = {1,5,7,2,8};
    sort(col, col+5);
    copy(col, col+5 , ostream_iterator<int> (cout, " "));
    cout << endl;
    return 0;
}
