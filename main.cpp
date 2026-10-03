#include <iostream>
#include <chrono>
#include "thread_pool.h"

int main() {
    ThreadPool pool(4);

    for (int i = 0; i < 10; ++i) {
        pool.enqueue([i]() {
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "Task " << i 
                      << " executed by thread "
                      << std::this_thread::get_id()
                      << std::endl;
        });
    }

    std::cout << "All tasks submitted.\n";
    return 0;
}
