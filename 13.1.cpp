/*************************************************************************
	> File Name: 13.1.cpp
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Sat 11 Jun 2016 02:08:57 AM EDT
 ************************************************************************/

#include<iostream>
#include<string>
#include<set>
#include<algorithm>
#include<fstream>

using namespace std;

class Person
{
public:
    string firstname()
    {
        return fname;
    };
    string lastname()
    {
        return lname;
    };

    string fname;
    string lname;
};

class Person_sort_rule
{
public:
    bool operator()(Person p1, Person p2)
    {
        return (p1.lastname() < p2.lastname());
    };
};

string getfirstname(string buffer)
{
    string r;
    size_t index = buffer.find(',');
    if (index != -1)
    {
        r = buffer.substr(0, index);
    }
    else
    {
        r = "-1";
    }
    return r;
}

string getlastname(string buffer)
{
    string r;
    size_t index = buffer.find(',');
    if (index != -1)
    {
        r = buffer.substr(index + 1, buffer.length() - 1);
    }
    else
    {
        r = "-1";
    }
    return r;
}

int main()
{
    typedef set<Person, Person_sort_rule> PersonSet;
    PersonSet myset;
    myset.clear();
    string myfname, mylname;
    ifstream myfile;
    myfile.clear();
    string filename;
    string buffer;
    cout << "please input the filename : " << endl;
    cin >> filename;
    cout << "inputed filename:  " << filename << endl;
    myfile.open(filename.c_str(), ios_base::in);
    if (myfile.is_open())
    {
        while (getline(myfile, buffer) && buffer.size() > 0)
        {
            myfname = getfirstname(buffer);
            mylname = getlastname(buffer);
            cout << myfname << "," << mylname << endl;
            if (myfname != "-1" && mylname != "-1")
            {
                Person temp;
                temp.fname = myfname;
                temp.lname = mylname;
                myset.insert(temp);
            }
        }
    }
    myfile.clear();
    myfile.close();
    PersonSet::iterator it;

    for (it = myset.begin(); it != myset.end(); ++it)
    {
        cout << (*it).fname << ", " << (*it).lname << endl;
    }
    return 0;
}

