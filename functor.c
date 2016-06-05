/*************************************************************************
	> File Name: functor.c
	> Author: Xu Wang
	> Mail: aoo_wangxu@163.com 
	> Created Time: Tue 24 May 2016 02:47:10 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int sort_function(const void*a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int list[5] = {1,10,3,4,5};
    qsort((void *)list, 5, sizeof(list[0]), sort_function);
    int x = 0;
    for (x = 0; x < 5; ++x)
    {
        printf("%d\t", list[x]);
    }
    return 0;
}
