#include "connection.h"

Connection::Connection(int domain, int type, int protocol)
{
    memset(&address_info, 0, sizeof address_info);
    sock = socket(domain, type , protocol);


    if (sock < 0) {
        //exit(1);
        cerr << "opening socket error: " << gai_strerror(errno) << endl;
    }
    address_info.ai_family = domain;
    address_info.ai_socktype = type;
    address_info.ai_protocol = protocol;
    
    port = "";
    address = "";
}
