#include <iostream>
#include <chrono>
#include <ctime>

int main() {
    // Get current time
    auto now = std::chrono::system_clock::now();
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Print date and time
    std::cout << "Current date and time: "
              << std::ctime(&currentTime);

    return 0;
}
