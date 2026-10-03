# Multithreaded Task Scheduler (C++)

A thread pool implementation in modern C++17 using mutexes and condition variables.

## Features
- Fixed-size thread pool
- Thread-safe task queue
- Dynamic task submission
- Graceful shutdown

## Build
g++ -std=c++17 main.cpp thread_pool.cpp -o threadpool -pthread

## Run
./threadpool
