// printPrimeNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include "iostream"
//#include "stdafx.h"
//#include "stdlib.h"
using namespace std;

//判断输入是否为偶数
//0偶数
//1奇数
int checkEvenNumber(int n) {
	if (n % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
