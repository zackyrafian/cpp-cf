#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <linux/uinput.h>
#include <string.h>
#include <errno.h>
#include <cstdint>


void emit (int fd, uint16_t type, uint16_t code, int32_t value) { 
    struct input_event ie;
    memset(&ie, 0, sizeof(ie));
    ie.type = type; 
    ie.code = code; 
    ie.value = value;
    ie.time.tv_sec = 0; 
    ie.time.tv_usec = 0; 

    if (write(fd, &ie, sizeof(ie)) < 0) 
    { 
        perror("write");
    }
}

int main () 
{
    
}