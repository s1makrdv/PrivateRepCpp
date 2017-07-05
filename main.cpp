#include <iostream>
#include <asio.hpp>
#include <worker.h>
#include <define.h>

using namespace std;

int main()
{
    Worker::instance()->start();
    LOG_INFO("Threads started!!!");
    Worker::instance()->join();
    LOG_INFO("Threads finish!!!");

    return 0;

}
