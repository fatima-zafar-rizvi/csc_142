#include <iostream>
#include <chrono>

class TimerClass {

public:
    TimerClass()
        : m_timestamp{ std::chrono::steady_clock::now() }
    { }

    ~TimerClass() {

        auto current = std::chrono::steady_clock::now() - m_timestamp;
        std::cout << std::chrono::duration_cast
        <std::chrono::microseconds>(current).count();
        std::cout << " microseconds\n";
    }

    // Copy constructor:
    TimerClass(const TimerClass &rhs) noexcept
        : m_timestamp{ rhs.m_timestamp }
    { }

    // Copy assignment:
    TimerClass& operator=(const TimerClass &rhs) noexcept {

        if (this == &rhs) return *this;

        m_timestamp = rhs.m_timestamp;

        return *this;
    }

    // Move constructor:
    TimerClass(TimerClass &&rhs) noexcept
        : m_timestamp{ rhs.m_timestamp }

    // Move assignment:
    TimerClass& operator=(TimerClass &&rhs) noexcept {

        if (this == &rhs) return *this;

        m_timestamp = rhs.m_timestamp;

        return *this;
    }
    
private:
    std::chrono::steady_clock::time_point m_timestamp;
};