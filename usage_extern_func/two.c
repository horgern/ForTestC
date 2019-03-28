#include <stdio.h>
#include "common.h" 
extern int ggn_test;
//extern void TestPrint();
int main()
{
	ggn_test = 1;
	TestPrint();
	ggn_test = 4;
	TestPrint();
	return 0; 
}

