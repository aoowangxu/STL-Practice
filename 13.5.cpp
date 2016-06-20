/*************************************************************************
	> File Name: 13.5.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Sat 11 Jun 2016 03:21:59 AM EDT
 ************************************************************************/

#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

class Nth
{
private:
    int nth;
    int count;
public:
    Nth(int n):nth(n),count(0){}
    bool operator()(int)
    {
        return  ++count == nth;
    }
};

void myout(list<int> &lt)
{
    list<int>::iterator it;
    for (it = lt.begin(); it != lt.end(); ++it)
    {
        cout << *it << ",";
    }
    cout << endl;
}

int main()
{
    list<int> col;
    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 1; i < 9; ++i)
    {
        col.push_back(i);
    }

    myout(col);
    list<int>::iterator pos;
    pos = remove_if(col.begin(), col.end(), Nth(3));
    col.erase(pos, col.end());
    myout(col);
    return 0;

}
