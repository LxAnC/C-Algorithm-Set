#include <iostream>
using namespace std;
// 限定所有数在1e5之间
const int maxn = 1e5 + 10;
int len;
int nums[maxn];
int n;
int ci = 1;
void print()
{
    for (int i = 0; i < len; i++)
        cout << nums[i] << " ";
    cout << endl;
    return;
}
void QuickSort(int low, int high)
{
    int i = low;
    int j = high;
    if (i >= j)
    {
        return;
    }

    int temp = nums[low];
    while (i != j)
    {
        while (nums[j] >= temp && i < j)
        {
            j--;
        }
        while (nums[i] <= temp && i < j)
        {
            i++;
        }
        if (i < j)
        {
            swap(nums[i], nums[j]);
            cout << "第" << ci++ << "次操作：交换" << nums[i] << "(Pos:" << i << ")" << " and "
                 << nums[j] << "(Pos:" << j << ")" << endl;
            cout << endl;
            cout << "当前的数据为:" << endl;
            print();
        }
    }

    // 将基准temp放于自己的位置，（第i个位置）
    swap(nums[low], nums[i]);
    cout << "第" << ci++ << "次操作：交换" << nums[low] << "(Pos:" << low << ")" << " and "
         << nums[i] << "(Pos:" << i << ")" << endl;
    cout << endl;
    cout << "当前的数据为:" << endl;
    print();
    QuickSort(low, i - 1);
    QuickSort(i + 1, high);
}
void ShellSort(int len)
{
    int gap, i, j;
    int temp;
    for (gap = len >> 1; gap > 0; gap >>= 1)
    {
        cout << "当前划分的希尔值: " << gap << endl;
        for (i = gap; i < len; i++)
        {
            temp = nums[i];
            for (j = i - gap; j >= 0 && nums[j] > temp; j -= gap)
                nums[j + gap] = nums[j];
            nums[j + gap] = temp;
        }
    }
}
void MergeSort(int len)
{
    int *a = nums;
    int *b = new int[len];
    for (int seg = 1; seg < len; seg += seg)
    {
        for (int start = 0; start < len; start += seg + seg)
        {
            int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        int *temp = a;
        a = b;
        b = temp;
    }

    if (a != nums)
    {
        for (int i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }

    delete[] b;
}
void max_heapify(int start, int end)
{
    // 建立父节点指标和子节点指标
    int dad = start;
    int son = dad * 2 + 1;
    while (son <= end)
    {                                                    // 若子节点指标在范围内才做比较
        if (son + 1 <= end && nums[son] < nums[son + 1]) // 先比较两个子节点大小，选择最大的
            son++;
        if (nums[dad] > nums[son]) // 如果父节点大于子节点代表调整完毕，直接跳出函数
            return;
        else
        { // 否则交换父子内容再继续子节点和孙节点比较
            swap(nums[dad], nums[son]);
            dad = son;
            son = dad * 2 + 1;
        }
    }
}
void HeapSort(int len)
{
    // 初始化，i从最后一个父节点开始调整
    for (int i = len / 2 - 1; i >= 0; i--)
        max_heapify(i, len - 1);
    // 先将第一个元素和已经排好的元素前一位做交换，再从新调整(刚调整的元素之前的元素)，直到排序完毕
    for (int i = len - 1; i > 0; i--)
    {
        swap(nums[0], nums[i]);
        max_heapify(0, i - 1);
    }
}
void menu()
{
    // cout<<"当前len"<<len<<endl;
    cout << "               选择对应操作:" << endl;
    cout << "         1.快速排序; 2.希尔排序" << endl;
    cout << "         3.归并排序; 4.堆排序" << endl;
    cout << "         5.修改数据; 6.删除数据" << endl;
    cout << "         7.部分修改; 8.新添数据(测试)" << endl;
    cout << "         9.查看数据; -1.退出" << endl;

    int _;
    cin >> _;
    switch (_)
    {
    case 1:
        QuickSort(0, len - 1);
        break;
    case 2:
        ShellSort(len);
        break;
    case 3:
        MergeSort(len);
        break;
    case 4:
        HeapSort(len);
        break;
    case 9:
        print();
        break;
    dafult:
        cout << "操作失败!" << endl;
        break;
    }
}
signed main()
{
    int i = 0;
    cout << "欢迎来到排序算法的演示设计---(Beta1.0)" << endl;
    cout << "输入你的测试数据或者由我们自己生成(1或2)" << endl;
    ;
    cout << "建议由空格分隔" << endl;
    while (cin >> nums[i])
    {
        if (cin.get() == '\n')
            break;
        i++;
    }
    len = i + 1;
    while (1)
    {
        menu();
    }
    return 0;
}