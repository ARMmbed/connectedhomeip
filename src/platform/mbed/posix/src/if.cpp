
#include <net/if.h>
#include <net_if.h>
#include <stddef.h>

struct if_nameindex * if_nameindex(void)
{
    return NULL;
}

char * if_indextoname(unsigned int ifindex, char * ifname)
{
    return NULL;
}

unsigned int if_nametoindex(const char * ifname)
{
    return 0;
}

void if_freenameindex(struct if_nameindex * ptr) {}