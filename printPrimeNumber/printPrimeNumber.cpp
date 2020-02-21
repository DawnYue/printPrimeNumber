// printPrimeNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include "iostream"
//#include "stdafx.h"
//#include "stdlib.h"
using namespace std;

//判断输入是否为素数
//0否
//1素数
int printPrimeNumber(int n) {
	for (int i = 2; i <= n/2; i++) {
		if ((n%i)==0) {
			return 0;
		}  
	}
	
	return 1;
}

int main()
{   
	int totalNum = 100;
	
		for (int i = 2; i < totalNum; i++) {
			int res = printPrimeNumber(i);
		    //判断数字
			if(res==1)
            cout << "the namber is:" << i <<endl;

		}
  
	//system(pause);
	return 0;
}

