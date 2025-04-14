#include <iostream>
#include <chrono>

class TimerClass {

public:
    TimerClass()
        : m_timestamp{ std::chrono::steady_clock::now() }
    { }

    ~TimerClass() {

        auto current = std::chrono::steady_clock::now() - m_timestamp;
        std::cout << std::chrono::duration_cast<std::chrono::microseconds>(current).count();
        std::cout << " microseconds\n";
    }

private:
    std::chrono::steady_clock::time_point m_timestamp;
};