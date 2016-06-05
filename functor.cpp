/*************************************************************************
	> File Name: functor.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 02:43:38 AM EDT
 ************************************************************************/

#include<iostream>
#include<algorithm>

using namespace std;

template<typename T>
class diaplay
{
public:
    void operator()(const T &x)
    {
        cout << x << " ";
    }

};

int main()
{
    int arr[] = {1,2,3,4,5,6};
    for_each(arr, arr+6, diaplay<int>());
    return 0;
}
