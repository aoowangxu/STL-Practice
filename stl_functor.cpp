/*************************************************************************
	> File Name: stl_functor.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 02:53:08 AM EDT
 ************************************************************************/

#include<iostream>
#include<numeric>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

template <class T>
class display
{
public:
    void operator()(const T &x)
    {
        cout << x << " ";
    }
};


int main()
{
    int ia[5] = {1,2,3,4,5};
    vector<int> iv(ia, ia+5);
    cout << accumulate(iv.begin(), iv.end(), 1, multiplies<int>()) << endl;
    cout << multiplies<int>()(3,5) << endl;
    modulus<int> modulusobj;
    cout << modulusobj(3, 5) << endl;

    sort(iv.begin(), iv.end(), greater<int>());
    for_each(iv.begin(), iv.end(), display<int>());
    return 0;

}

