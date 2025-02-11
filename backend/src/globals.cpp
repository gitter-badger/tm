#include "globals.hpp"

#include <signal.h>

const char * STATUS_FILENAME        = "/status.json";

namespace glo
{

int port = 18080;
int kill_signal = SIGTERM;

std::string title;
std::string storage;
std::string default_tasks;
std::string default_jobs;

// Longueur fixe de 12 caractères     |------------|
const size_t PREFIX_LEN      		= 12;
const char * PREFIX_CLIENT_CLOSE    = "client:close";
const char * PREFIX_SUBSCRIBE       = "subscribe  :";

} // glo

