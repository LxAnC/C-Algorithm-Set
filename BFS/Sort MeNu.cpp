#include<iostream>
using namespace std;
//限定所有数在1e5之间
const int maxn=1e5+10;

int nums[maxn];
int n;
void menu()
{
    cout<<"选择方式: 1.快速排序; 2.希尔排序"<<endl;
    cout<<"         3.归并排序; 4.堆排序"<<endl;
    int _;
    cin>>_;
    cout<<_;
}
void QuickSort()
{

}
void ShellSort()
{

}
void Merge()
{

}
void StackSort()
{

}
signed main()
{
    int i=0;
    cout<<"欢迎来到排序算法的演示设计---(Beta1.0)";
    cout<<"输入你的测试数据或者由我们自己生成(1或2)";
    cout<<"建议由空格分隔"<<endl;
    while(cin>>nums[i])
    {
        i++;
    }
    int len=i;
    while(1)
    {
        menu();
    }
    return 0;
}