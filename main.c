#include <stdio.h>
#include "linux/socket/dbus.h"

int main() {
    init_dbus();
    sleep(10);
    printf("Hello, World!\n");
    return 0;
}
