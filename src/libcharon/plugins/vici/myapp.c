#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "libvici.h"
//#include <libvici.h>

int main(int argc, char *argv[])
{
    vici_conn_t *conn;
    int ret = 0;

    vici_init();
    conn = vici_connect(NULL);
    if (conn)
    {
        vici_disconnect(conn);
    }
    else
    {
        ret = errno;
        fprintf(stderr, "connecting failed: %s\n", strerror(errno));
    }
    vici_deinit();
    return ret;
}
