//
// Created by zakdelondres on 02/03/18.
//

#include <stdio.h>
#include <stdlib.h>
#include "dbus.h"

DBusSocket **init_dbus() {
    DBusSocket *sock = malloc(sizeof(DBusSocket) + 1);
    int ret;

    dbus_error_init(&(sock->err));
    sock->conn = dbus_bus_get(DBUS_BUS_SESSION, &(sock->err));

    if (dbus_error_is_set(&(sock->err)))
        printf("Connection Error");

    if (sock->conn == NULL)
        exit(1);

    ret = dbus_bus_request_name(sock->conn, "eficazd.absvfx.uk", DBUS_NAME_FLAG_REPLACE_EXISTING, &(sock->err));

    if (dbus_error_is_set(&(sock->err)))
        printf("Request Error");

    if (DBUS_REQUEST_NAME_REPLY_PRIMARY_OWNER != ret)
        exit(1);

    return &sock;
}

int dbus_send_signal(DBusSocket **ppSock) {

}

int dbus_recv_signal(DBusSocket **ppSock) {

}