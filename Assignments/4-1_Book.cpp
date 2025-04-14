#include <chrono>

class TimerClass {
    
public:
    TimerClass()
        : m_timestamp{ std::chrono::steady_clock::now() }
    { }

private:
    std::chrono::steady_clock::time_point m_timestamp;
};