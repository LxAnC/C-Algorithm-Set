#include <iostream>
#include <stdlib.h>
using namespace std;
void OPT_Agorithm();
void FIFO_Agorithm();
void LRU_Agorithm();
void LFU_Agorithm();
double Page_Loss_Rate(int, int);
int Find_Exist(int*, int, int);
int Find_LeastInteviewTime(int, int, int*, int);
void Update_InHereTime(int*, int, int);
int Find_LeastNotUseTime(int, int, int*);
int Find_LeastNotInterviewTime(int, int*);
void Print_Frame(int*, int);
void Print_Menu();

int main()
{
	int choice;
	do
	{
		Print_Menu();
		cout << "请选择要实现的算法：";
		cin >> choice;
		switch (choice)
		{
		case 1:
			OPT_Agorithm();
			break;
		case 2:
			FIFO_Agorithm();
			break;
		case 3:
			LRU_Agorithm();
			break;
		case 4:
			LFU_Agorithm();
			break;
		case 0:
			break;
		}
		system("pause");
		system("cls");
	} while (choice);
	return 0;
}

/*
* 用于遍历 save_Frame[] 的 n 个存储页框, 是否有 “待定地址 -> addr”
* 如果有就返回 ture, 否则返回 false
*/
int Find_Exist(int* save_Frame, int n, int addr)
{
	for (int i = 0; i < n; i++)
	{
		if (save_Frame[i] == addr)
		{
			return i;
		}
	}
	return -1;
}

void Print_Menu()
{
	/* 输入模块 */
	cout << "+---------------------------------------+" << endl;
	cout << "|\t***算法清单***\t\t\t|" << endl;
	cout << "|\t1.最佳置换算法(OPT)\t\t|" << endl << "|\t2.先进先出算法(FIFO)\t\t|" << endl;
	cout << "|\t3.最近最久未使用算法(LRU)\t|" << endl << "|\t4.最不经常使用算法(LFU)\t\t|" << endl;
	cout << "|\t0.退出\t\t\t\t|" << endl;
	cout << "+---------------------------------------+" << endl;
}

void Print_Frame(int* save_Frame, int n)
{
	cout << "\t";
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			if (save_Frame[i] == -999)
				cout << "/ /";
			else
				cout << "/" << save_Frame[i] << "/";
		}
		else
		{
			if (save_Frame[i] == -999)
				cout << " /";
			else
				cout << save_Frame[i] << "/";
		}
	}
	cout << endl;
}
void Init(int* n, int* len, int*& save_Frame, int*& interview_Array)
{
	cout << "请输入 n :";
	cin >> *n;
	save_Frame = new int[*n];
	for (int i = 0; i < *n; i++)
		save_Frame[i] = -999;

	cout << "请输入地址走向的长度：";
	cin >> *len;
	cout << "请输入地址走向:";
	interview_Array = new int[*len];
	for (int i = 0; i < *len; i++)
		cin >> interview_Array[i];
}

/*
* 缺页中断率：
* 假设进程 P 在运行中成功的内存访问次数为 s
* 不成功的访问次数为 F，则缺页中断率为 R = F/(S+F)
*/
double Page_Loss_Rate(int S, int F)
{
	double ans = 1.0 * F / (1.0 * S + 1.0 * F) * 100;
	return ans;
}

int Find_LeastInteviewTime(int sta, int addr, int* interview_Array, int len)
{
	for (int i = sta; i < len; i++)
	{
		if (interview_Array[i] == addr)
		{
			return i - sta;
		}
	}
	return 99999;
}
/*
* 最佳置换算法(OPT)：
* 将以后永不使用的或许是在最长(未来)时间内不再被访问的页面换出。
* 第一行输入参数：n ，代表存储页框数
* 第二行输入参数：a_1、a_2、...、a_n，代表访问地址的走向
* 输出要求：输出内存驻留的页面集合，缺页次数以及缺页率；
* 数据结构：数组
*/
void OPT_Agorithm()
{
	cout << "欢迎使用 OPT " << endl;
	int n, len, * save_Frame = NULL, * interview_Array = NULL;
	Init(&n, &len, save_Frame, interview_Array);
	//测试样例： 1 3 12 2 3 2 1 5 2 4 5 3 2 5 2
	int addr;
	int cnt = 0;
	int score = 0;
	int fail_time = 0;
	int iter = 0;
	while (iter < len)
	{
		addr = interview_Array[iter];
		iter++;
		cout << endl << "第" << iter << "轮：";
		if (cnt < n)
		{
			if (Find_Exist(save_Frame, cnt, addr) != -1)
			{
				score++;
				cout << "\"" << addr << "\" 被命中了\t\t------->";
				Print_Frame(save_Frame, n);
			}
			else // 未命中，但有空间，" << "\" << addr << "\" 被装入 
			{
				fail_time++;
				cout << "未命中，" << "\"" << addr << "\" 被装入 \t------->";
				save_Frame[cnt] = addr;
				Print_Frame(save_Frame, n);
				cnt++;
			}
		}
		else
		{
			if (Find_Exist(save_Frame, n, addr) != -1)
			{
				score++;
				cout << "\"" << addr << "\" 被命中了\t\t------->";
				Print_Frame(save_Frame, n);
			}
			else // 未命中，但没了空间
			{
				fail_time++;
				int* least_Time = new int[n];
				int max_Time = 0;
				int index;
				for (int i = 0; i < n; i++)
				{
					least_Time[i] = Find_LeastInteviewTime(iter, save_Frame[i], interview_Array, len);
					if (least_Time[i] > max_Time)
					{
						max_Time = least_Time[i];
						index = i;
					}
				}
				cout << "\"" << addr << "\" 替换了 \"" << save_Frame[index] << "\"\t\t------->";
				save_Frame[index] = addr;
				Print_Frame(save_Frame, n);
				delete[] least_Time;
			}
		}
	}
	cout << endl;
	cout << "缺页次数为：" << fail_time << endl;
	cout << "缺页中断率 R = " << Page_Loss_Rate(score, fail_time) << "%" << endl;
	delete[] save_Frame;
	delete[] interview_Array;
}

void Update_InHereTime(int* in_HereTime, int n, int ind)
{
	for (int i = 0; i < n; i++)
	{
		in_HereTime[i]++;
	}
	if (ind != -1)
		in_HereTime[ind] = 0;
}
/*
* 先进先出算法(FIFO)：
* 淘汰最先使用内存的页面，即选择在内存中驻留时间最久的页面予以淘汰。
* 数据结构：数组
* 第一行输入参数：n ，代表存储页框数
* 第二行输入参数：a_1、a_2、...、a_n，代表访问地址的走向
* 输出要求：输出内存驻留的页面集合，缺页次数以及缺页率；
*/
void FIFO_Agorithm()
{
	int n, len, * save_Frame = NULL, * interview_Array = NULL;
	Init(&n, &len, save_Frame, interview_Array);

	int* in_HereTime = new int[n];
	for (int i = 0; i < n; i++)
		in_HereTime[i] = 0;		// 初始化都为零

	//测试样例： 2 3 12 2 3 2 1 5 2 4 5 3 2 5 2
	int addr;
	int cnt = 0;
	int score = 0;
	int fail_time = 0;
	int iter = 0;
	while (iter < len)
	{
		cout << endl << "第" << iter << "轮：";
		addr = interview_Array[iter];
		iter++;
		if (cnt < n)
		{
			if (Find_Exist(save_Frame, cnt, addr) != -1)
			{
				score++;
				cout << "\"" << addr << "\" 被命中了\t\t------->";
				Print_Frame(save_Frame, n);
				Update_InHereTime(in_HereTime, cnt, -1);
			}
			else // 未命中，但有空间
			{
				fail_time++;
				cout << "未命中，" << "\"" << addr << "\" 被装入 \t------->";
				save_Frame[cnt] = addr;
				Print_Frame(save_Frame, n);
				Update_InHereTime(in_HereTime, cnt, cnt);
				cnt++;
			}
		}
		else
		{
			if (Find_Exist(save_Frame, n, addr) != -1)
			{
				score++;
				cout << "\"" << addr << "\" 被命中了\t\t------->";
				Print_Frame(save_Frame, n);
				Update_InHereTime(in_HereTime, n, -1);
			}
			else // 未命中，但没了空间
			{
				fail_time++;
				int max_Time = 0;
				int index;
				for (int i = 0; i < n; i++)
				{
					if (in_HereTime[i] > max_Time)
					{
						max_Time = in_HereTime[i];
						index = i;
					}
				}
				cout << "\"" << addr << "\" 替换了 \"" << save_Frame[index] << "\"\t\t------->";
				save_Frame[index] = addr;
				Print_Frame(save_Frame, n);
				int ind = Find_Exist(save_Frame, n, addr);
				Update_InHereTime(in_HereTime, n, ind);
			}
		}
	}
	cout << endl;
	cout << "缺页次数为：" << fail_time << endl;
	cout << "缺页中断率 R = " << Page_Loss_Rate(score, fail_time) << "%" << endl;
	delete[] save_Frame;
	delete[] interview_Array;
	delete[]  in_HereTime;
	return;
}

int Find_LeastNotUseTime(int end, int addr, int* interview_Array)
{
	for (int i = end - 1; i >= 0; i--)
	{
		if (interview_Array[i] == addr)
		{
			// cout << " i = " << i << endl;
			return end - i;
		}
	}
	return 99999;
}
/*
* 最近最久未使用算法(LRU)：
* 淘汰最近最久未被使用的页面。
* 数据结构：数组
* 第一行输入参数：n ，代表存储页框数
* 第二行输入参数：a_1、a_2、...、a_n，代表访问地址的走向
* 输出要求：输出内存驻留的页面集合，缺页次数以及缺页率；
*/
void LRU_Agorithm()
{
	int n, len, * save_Frame = NULL, * interview_Array = NULL;
	Init(&n, &len, save_Frame, interview_Array);

	//测试样例： 3 3 12 2 3 2 1 5 2 4 5 3 2 5 2
	int addr;
	int cnt = 0;
	int score = 0;
	int fail_time = 0;
	int iter = 0;
	while (iter < len)
	{
		addr = interview_Array[iter];
		iter++;
		cout << endl << "第" << iter << "轮：";
		if (cnt < n)
		{
			if (Find_Exist(save_Frame, cnt, addr) != -1)
			{
				score++;
				cout << "\"" << addr << "\" 被命中了\t\t------->";
				Print_Frame(save_Frame, n);

			}
			else // 未命中，但有空间
			{
				fail_time++;
				cout << "未命中，" << "\"" << addr << "\" 被装入 \t------->";
				save_Frame[cnt] = addr;
				Print_Frame(save_Frame, n);
				cnt++;
			}
		}
		else
		{
			if (Find_Exist(save_Frame, n, addr) != -1)
			{
				score++;
				cout << "\"" << addr << "\" 被命中了\t\t------->";
				Print_Frame(save_Frame, n);
			}
			else // 未命中，但没了空间
			{
				fail_time++;
				int* Not_UseTime = new int[n];
				int max_Time = 0;
				int index;
				for (int i = 0; i < n; i++)
				{
					Not_UseTime[i] = Find_LeastNotUseTime(iter, save_Frame[i], interview_Array);
					if (Not_UseTime[i] > max_Time)
					{
						max_Time = Not_UseTime[i];
						index = i;
					}
				}
				cout << "\"" << addr << "\" 替换了 \"" << save_Frame[index] << "\"\t\t------->";
				save_Frame[index] = addr;
				Print_Frame(save_Frame, n);
				delete[] Not_UseTime;
			}
		}
	}
	cout << endl;
	cout << "缺页次数为：" << fail_time << endl;
	cout << "缺页中断率 R = " << Page_Loss_Rate(score, fail_time) << "%" << endl;
	delete[] save_Frame;
	delete[] interview_Array;
}

int Find_LeastNotInterviewTime(int n, int* interview_Time)
{
	int min_Time = 99999;
	int ind;
	for (int i = 0; i < n; i++)
	{
		if (interview_Time[i] < min_Time)
		{
			min_Time = interview_Time[i];
			ind = i;
		}
	}
	return ind;
}
/*
* 最不经常使用算法(LFU):
* 即选择最近一段时间内最长时间没有被访问过的页面进行置换
* 数据结构：数组
* 第一行输入参数：n ，代表存储页框数
* 第二行输入参数：a_1、a_2、...、a_n，代表访问地址的走向
* 输出要求：输出内存驻留的页面集合，缺页次数以及缺页率；
*/
void LFU_Agorithm()
{
	int n, len, * save_Frame = NULL, * interview_Array = NULL;
	Init(&n, &len, save_Frame, interview_Array);

	int* interview_Time = new int[n];
	for (int i = 0; i < n; i++)
		interview_Time[i] = 0;

	// 测试样例一：4 3 12 2 3 2 1 5 2 4 5 3 2 5 2
	// 测试样例二：4 3 12 2 3 2 1 2 1 5 4 2 4 4 6
	int addr;
	int cnt = 0;
	int score = 0;
	int fail_time = 0;
	int iter = 0;
	while (iter < len)
	{
		cout << endl << "第" << iter << "轮：";
		addr = interview_Array[iter];
		iter++;
		if (cnt < n)
		{
			if (Find_Exist(save_Frame, cnt, addr) != -1)
			{
				score++;
				cout << "\"" << addr << "\" 被命中了\t\t------->";
				Print_Frame(save_Frame, n);
				int ind = Find_Exist(save_Frame, cnt, addr);
				interview_Time[ind]++;
			}
			else // 未命中，但有空间
			{
				fail_time++;
				cout << "未命中，" << "\"" << addr << "\" 被装入 \t------->";
				save_Frame[cnt] = addr;
				Print_Frame(save_Frame, n);
				cnt++;
			}
		}
		else
		{
			if (Find_Exist(save_Frame, n, addr) != -1)
			{
				score++;
				cout << "\"" << addr << "\" 被命中了\t\t------->";
				Print_Frame(save_Frame, n);
				int ind = Find_Exist(save_Frame, n, addr);
				interview_Time[ind]++;
			}
			else // 未命中，但没了空间
			{
				fail_time++;
				int index = Find_LeastNotInterviewTime(n, interview_Time);
				cout << "\"" << addr << "\" 替换了 \"" << save_Frame[index] << "\"\t\t------->";
				save_Frame[index] = addr;
				interview_Time[index] = 0;
				Print_Frame(save_Frame, n);
			}
		}
	}
	cout << endl;
	cout << "缺页次数为：" << fail_time << endl;
	cout << "缺页中断率 R = " << Page_Loss_Rate(score, fail_time) << "%" << endl;
	delete[] save_Frame;
	delete[] interview_Array;
	delete[] interview_Time;
}
