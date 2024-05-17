#include<iostream>
using namespace std;
//限定所有数在1e5之间
const int maxn=1e5+10;
int len;
int nums[maxn];
int n;
void print()
{
    for(int i=0;i<len;i++)
    cout<<nums[i]<<" ";
    return ;
}
void QuickSort(int low, int high) {
    int i = low; 
    int j = high;
    if(i >= j) {
        return;
    }
 
    int temp = nums[low];
    while(i != j) {
        while(nums[j] >= temp && i < j) {
            j--;
        }
	while(nums[i] <= temp && i < j) {
            i++;
        }
	if(i < j) {
            swap(nums[i], nums[j]);
        }
    }
 
    //将基准temp放于自己的位置，（第i个位置）
    swap(nums[low], nums[i]);
    QuickSort(low, i - 1);
    QuickSort(i + 1, high);
}
void ShellSort()
{

}
void MergeSort()
{

}
void StackSort()
{

}
void menu()
{
    cout<<"当前长度为"<<len<<endl;
    cout<<"选择方式: 1.快速排序; 2.希尔排序"<<endl;
    cout<<"         3.归并排序; 4.堆排序"<<endl;
    int _;
    cin>>_;
    switch(_)
    {
        case 1:QuickSort(0,len-1);print();
            break;
        case 2:ShellSort();
            break;
        case 3:MergeSort();
            break;
        case 4:StackSort();
            break;
        case 5:return ;
        dafult:cout<<"操作失败!"<<endl;break;
    }
}
signed main()
{
    int i=0;
    cout<<"欢迎来到排序算法的演示设计---(Beta1.0)"<<endl;
    cout<<"输入你的测试数据或者由我们自己生成(1或2)"<<endl;;
    cout<<"建议由空格分隔"<<endl;
    while(cin>>nums[i])
    {
        if(cin.get()=='\n')
        break;
        i++;
    }
    len=i+1;
    while(1)
    {
        menu();
    }
    return 0;
}