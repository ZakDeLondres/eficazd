//
// Created by zakdelondres on 02/03/18.
//

#ifndef EFICAZD_DBUS_H
#define EFICAZD_DBUS_H

#include <dbus/dbus.h>

struct dbus_socket {
    DBusError err;
    DBusConnection *conn;
} typedef DBusSocket;

DBusSocket ** init_dbus();

#endif //EFICAZD_DBUS_H
