#ifndef MBED_NET_COMMON_H
#define MBED_NET_COMMON_H

#include <errno.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _set_errno
#define _set_errno(err)                                                                                                            \
    do                                                                                                                             \
    {                                                                                                                              \
        if (err)                                                                                                                   \
        {                                                                                                                          \
            errno = (err);                                                                                                         \
        }                                                                                                                          \
    } while (0)
#endif

#ifdef __cplusplus
}
#endif

#endif /* MBED_NET_COMMON_H */