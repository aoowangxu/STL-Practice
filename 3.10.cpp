/*************************************************************************
	> File Name: 3.10.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Mon 23 May 2016 11:39:04 AM EDT
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void outtoscreen(int &ele)
{
    cout << ele << " ";
}

int main()
{
    vector<int> ci, cd;
    for (int i = 0; i < 10; ++i)
    {
        ci.push_back(i);
        cd.push_back(i*3);
    }

    ci.swap(cd);

    cout << "vector_ ci _below :" << endl;
    for_each(ci.begin(), ci.end(), outtoscreen);
    cout << endl;

    cout << "vector_ cd _below :" << endl;
    for_each(cd.begin(), cd.end(), outtoscreen);
    cout << endl;
    return 0;
}

