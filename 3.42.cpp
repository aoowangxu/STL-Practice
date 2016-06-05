/*************************************************************************
	> File Name: 3.42.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 08:45:01 AM EDT
 ************************************************************************/

#include<iostream>
#include<bitset>
#include<string>

using namespace std;

void print(bitset<16> &b)
{
    int i = 0;
    int bsize = b.size();
    for (i = 0; i < bsize; ++i)
    {
        cout << b[i];
    }
    cout << " :" << "the size of bitset:" << bsize << endl;
}

int main()
{
    string str = "001111111111111110";
    bitset<16> b1;
    bitset<16> b2(25);
    bitset<16> b3(str, 2, 16);
    print(b1);
    print(b2);
    print(b3);

    int c1 = b1.count();
    int c2 = b2.count();
    int c3 = b3.count();

    cout << "sum (1): "<< c1 << " " << c2 << " " << c3 << endl;

    bool l1 = b1.any();
    cout << l1 << endl;

    b3.flip();
    print(b3);

    return 0;
}
