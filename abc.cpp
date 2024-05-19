#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QRandomGenerator>
#include <algorithm>
#include <vector>
#include <chrono>
#include <thread>

class SortingVisualization : public QWidget
{
public:
    SortingVisualization(QWidget *parent = nullptr) : QWidget(parent)
    {
        // 创建布局
        QVBoxLayout *layout = new QVBoxLayout(this);

        // 创建按钮
        QPushButton *startButton = new QPushButton("Start Sorting", this);
        layout->addWidget(startButton);
        connect(startButton, &QPushButton::clicked, this, &SortingVisualization::startSorting);

        // 创建标签用于显示数组
        arrayLabel = new QLabel(this);
        layout->addWidget(arrayLabel);

        setLayout(layout);
    }

private slots:
    void startSorting()
    {
        // 生成随机数组
        std::vector<int> array(20);
        std::generate(array.begin(), array.end(), []
                      { return QRandomGenerator::global()->bounded(100); });

        // 显示未排序的数组
        displayArray(array);

        // 排序并显示排序后的数组
        std::sort(array.begin(), array.end());
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // 模拟排序过程
        displayArray(array);
    }

private:
    QLabel *arrayLabel;

    // 将数组转换为字符串并显示在标签上
    void displayArray(const std::vector<int> &array)
    {
        QString text;
        for (int num : array)
        {
            text += QString::number(num) + " ";
        }
        arrayLabel->setText(text);
        qApp->processEvents(); // 刷新界面
    }
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    SortingVisualization window;
    window.setWindowTitle("Sorting Visualization");
    window.resize(400, 300);
    window.show();
    return app.exec();
}
