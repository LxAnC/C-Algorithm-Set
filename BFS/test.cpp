#include <SFML/Graphics.hpp>
#include <vector>
#include <algorithm>
#include <chrono>
#include <thread>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int ARRAY_SIZE = 100;

void drawArray(sf::RenderWindow& window, std::vector<int>& arr) {
    window.clear();

    float columnWidth = static_cast<float>(WINDOW_WIDTH) / ARRAY_SIZE;

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        sf::RectangleShape rect(sf::Vector2f(columnWidth, arr[i] * (static_cast<float>(WINDOW_HEIGHT) / ARRAY_SIZE)));
        rect.setPosition(i * columnWidth, WINDOW_HEIGHT - arr[i] * (static_cast<float>(WINDOW_HEIGHT) / ARRAY_SIZE));
        window.draw(rect);
    }

    window.display();
}

void bubbleSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        for (int j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                // 绘制每次排序后的状态
                drawArray(window, arr);
                std::this_thread::sleep_for(std::chrono::milliseconds(50)); // 控制绘制速度
            }
        }
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Sorting Algorithm Visualization");

    std::vector<int> arr(ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        arr[i] = i + 1;
    }
    std::random_shuffle(arr.begin(), arr.end());

    // 绘制初始状态
    drawArray(window, arr);

    // 执行排序算法
    bubbleSort(arr);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }

    return 0;
}
