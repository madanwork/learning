#include <stdio.h>
#include <iostream>
using namespace std;

void fn1()
{
 printf("Inside f1 \n");
 fflush(stdout);
}

void fn2()
{
 printf("Inside f2 \n");
 fflush(stdout);
}

int main()
{
 fn1();
 fn2();
 return 0;
}


