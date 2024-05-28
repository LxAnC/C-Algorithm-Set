#include<iostream>
using namespace std;
//内存块类
class memory
{
public:
    void init();
    void alter(int a, int b);
    int check_full();
    int check_old();
    int check_exist(int a);
    void run();
    void refresh();
    friend int manage(memory *My_Memory, int ans, int a);
    friend void show(memory *My_Memory, int ans);
private:
    int page;
    int time;
};
//为了多次初始化
void memory::init()
{
    page = 0;
    time = 0;
}
//修改内存块保存的页和时间
void memory::alter(int a, int b)
{
    page = a;
    time = b;
}
//检查该块是否已被占用
int memory::check_full()
{
    if (page == 0 && time == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//检查该块的驻留时间
int memory::check_old()
{
    return time;
}
//检查该块中是否保存了页a
int memory::check_exist(int a)
{
    if (page == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//时间++
void memory::run()
{
    if (page != 0)
    {
        time++;
    }
}
//时间置0
void memory::refresh()
{
    time = 0;
}
//调度作业
int manage(memory *My_Memory, int ans, int a)
{
    //检查内存块是否已经保存了页面a
    for (int i = 0; i < ans; i++)
    {
        if (My_Memory[i].check_exist(a))
        {
            cout << "不发生中断，页面" << a << "已在内存块" << i << "中" << endl;
            My_Memory[i].refresh();
            return 1;
        }
    }
    //检查内存块是否有空闲页面
    for (int i = 0; i < ans; i++)
    {
        if (My_Memory[i].check_full())
        {
            cout << "发生中断，" << "内存块" << i << "空闲中，页面" << a << "装入" << endl;
            My_Memory[i].alter(a, 0);
            return 0;
        }
    }
    //找到驻留时间最大的块，进行替换
    int max_time = 0;
    int num = -1;
    for (int i = 0; i < ans; i++)
    {
        if (My_Memory[i].check_old()>max_time)
        {
            max_time = My_Memory[i].check_old();
            num = i;
        }
    }
    cout << "发生中断，" << "内存块" << num << "中页面" << My_Memory[num].page << "被替换，页面" << a << "装入" << endl;
    My_Memory[num].alter(a, 0);
    return 0;
}
//显示内存块当前状态
void show(memory *My_Memory, int ans)
{
    cout << "...................................." << endl;
    cout << "内存块号";
    for (int i = 0; i < ans; i++)
    {
        cout << "  |" << i;
    }
    cout << "\n页面号  ";
    for (int i = 0; i < ans; i++)
    {
        cout << "  |" << My_Memory[i].page;
    }
    cout << "\n驻留时间";
    for (int i = 0; i < ans; i++)
    {
        cout << "  |" << My_Memory[i].time;
    }
    cout << "\n....................................\n" << endl;
}
int main()
{
    cout << "***************************" << endl;
    cout << "***   页面置换算法LRU   ***" << endl;
    cout << "*** 1.设置存储区块数    ***" << endl;
    cout << "*** 2.页面调度模拟      ***" << endl;
    cout << "*** 3.缺页率统计        ***" << endl;
    cout << "*** 4.退出模拟器        ***" << endl;
    cout << "***************************" << endl;
    int ans, aans = 0, nohit = 0;
    memory My_Memory[100];
    int flag;
    while (true)
    {
        cout << "\n请选择功能：";
        cin >> flag;
        if (flag == 1)
        {
            //设置存储区块数
            cout << "请输入存储区块数：";
            cin >> ans;
            for (int i = 0; i < ans; i++)
            {
                My_Memory[i].init();  
            }
            nohit = 0;
            aans = 0;
        }
        else if (flag == 2)
        {
            //页面调度模拟
            while (true)
            {
                for (int i = 0; i < ans; i++)
                {
                    My_Memory[i].run();
                }
                cout << "请输入要调入的页面(输入0结束)：";
                int a;
                cin >> a;
                if (a == 0)
                {
                    break;
                }
                aans++;
                if (!manage(My_Memory, ans, a))
                {
                    nohit++;
                }
                show(My_Memory, ans);
            }
 
        }
        else if (flag == 3)
        {
            //缺页率统计
            cout << "*****************" << endl;
            cout << "调度作业 " << aans << "次\n中断     " << nohit << "次\n缺页率   " << double(nohit) / aans * 100.00 << "%" << endl;
            cout << "*****************" << endl;
        }
        else if (flag == 4)
        {
            //退出
            cout << "成功退出！\n" << endl;
            break;
        }
    }
    return 0;
}