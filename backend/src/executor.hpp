#ifndef EXECUTOR_HPP
#define EXECUTOR_HPP

#include <string>

class task_manager_t;

const std::string execute_task(task_manager_t * task_manager, const std::string & task_path, int job_number);

#endif // EXECUTOR_HPP
