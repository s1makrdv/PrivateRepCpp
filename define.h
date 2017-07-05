#ifndef DEFINE
#define DEFINE

#define WORKER_THREAD_COUNT 4

#include <iostream>
#include <string>
#include <vector>

#define LOG_INFO(message)std::cout<<__FILE__<<":"<<__FUNCTION__<<":"<<__LINE__<<"(_INFO_)"<<message<<std::endl;

#define LOG_ERR(message)std::cout<<__FILE__<<":"<<__FUNCTION__<<":"<<__LINE__<<"(_INFO_)"<<message<<std::endl;

#endif // DEFINE

