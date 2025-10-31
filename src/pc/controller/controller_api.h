#ifndef CONTROLLER_API
#define CONTROLLER_API

#include <PR/os_cont.h>

struct ControllerAPI {
    void (*init)(void);
    void (*read)(OSContPad *pad);
};

#endif
