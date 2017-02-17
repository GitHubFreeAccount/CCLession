#include<stdio.h>
/*
 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，
 十位与千位相同。
 */
int main()
{
    long ge,shi,qian,wan,x;
    printf("\n please input a five digits:");
    scanf("%ld",&x);
    wan=x/10000;
    qian=x%10000/1000;
    shi=x%100/10;
    ge=x%10;
    if (ge==wan&&shi==qian) {
        printf("this number is huiwen!");
    }else
    {
        printf("this number is not huiwen!");
    }
    return 0;
}