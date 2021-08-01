#ifndef CONNECTION_H
#define CONNECTION_H

#include <iostream>

#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <vector>



class Connection
{
private:
    
public:
    Connection(int domain, int type, int protocol);
    ~Connection();
};
#endif
