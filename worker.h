#ifndef WORKER_H
#define WORKER_H

#include <asio.hpp>

#include <thread>
#include <vector>
#include <memory>

class Worker
{
public:
    static Worker* instance();
    void start();
    void join();
private:
    Worker();
    asio::io_service service_;
    std::vector<std::shared_ptr<std::thread>> threadPool_;

};

#endif // WORKER_H
