#include "../include/Redisserver.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]){
    int port = 6379;
    if(argc >= 2) port = std::stoi(argv[1]);

    RedisServer server(port);
    server.run();
    return 0;
}
