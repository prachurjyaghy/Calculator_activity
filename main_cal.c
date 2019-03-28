#include<stdio.h>
#include<limits.h>
#include<assert.h>
#include "cal.h"
void test_case1(void)
{
    printf("\n Test addition using assert:  ");
    assert(calc(0,8,4)==12);
    printf(" OK\n");

    printf("\n Test addition using assert:  ");
    assert(calc(0,8,-4)==4);
    printf(" OK\n");

    printf("\n Test addition using assert:  ");
    assert(calc(0,-8,4)==-4);
    printf(" OK\n");
}

void test_case2(void)
{
    printf("\n Test Subtraction using assert:  ");
    assert(calc(1,8,4)==4);
    printf(" OK\n");

    printf("\n Test Subtraction using assert:  ");
    assert(calc(1,8,-4)==12);
    printf(" OK\n");

    printf("\n Test Subtraction using assert:  ");
    assert(calc(1,-8,4)==-12);
    printf(" OK\n");
}

void test_case3(void)
{
    printf("\n Test Multiplication using assert:  ");
    assert(calc(2,8,4)==32);
    printf(" OK\n");

    printf("\n Test Multiplication using assert:  ");
    assert(calc(2,8,-4)==-32);
    printf(" OK\n");

    printf("\n Test Multiplication using assert:  ");
    assert(calc(2,-8,4)==-32);
    printf(" OK\n");

    printf("\n Test Multiplication using assert:  ");
    assert(calc(2,4,8)==32);
    printf(" OK\n");

    printf("\n Test Multiplication using assert:  ");
    assert(calc(2,8,0)==0);
    printf(" OK\n");

    printf("\n Test Multiplication using assert:  ");
    assert(calc(2,0,4)==0);
    printf(" OK\n");
}

void test_case4(void)
{
     printf("\n Test Division using assert:  ");
    assert(calc(3,8,4)==2);
    printf(" OK\n");

       printf("\n Test Division using assert:  ");
    assert(calc(3,-8,4)==-2);
    printf(" OK\n");



    printf("\n Test Division using assert:  ");
    assert(calc(3,0,4)==0);
    printf(" OK\n");
}

void test_case5(void)
{
    printf("\n Test Power using assert:  ");
    assert(calc(4,2,2)==4);
    printf(" OK\n");

    printf("\n Test Power using assert:  ");
    assert(calc(4,2,0)==1);
    printf(" OK\n");

}

void main()
{
    test_case1();
    test_case2();
    test_case3();
    test_case4();
    test_case5();
}
