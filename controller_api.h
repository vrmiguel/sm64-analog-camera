#ifndef CONTROLLER_API
#define CONTROLLER_API

#define DEADZONE 4960

#include <ultra64.h>

struct ControllerAPI {
    void (*init)(void);
    void (*read)(OSContPad *pad);
};

    // Needed for analog camera movement
int16_t rightx;
int16_t righty;

int c_rightx;   // Converted
int c_righty;   // Converted

#endif
