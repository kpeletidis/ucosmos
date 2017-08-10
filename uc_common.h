/*
 * File name:   uc_common.h
 * Author:      Kostas Peletidis
 * Date:        04-Aug-2017
 *
 * Header file for common definitions.
 */
#ifndef __UC_COMMON_H
#define __UC_COMMON_H

typedef enum {
    UC_OK = 0,
    UC_ACCESS, /* Access denied */
    UC_INVALID, /* Invalid argument */
    UC_IO, /* I/O error */
    UC_UNKNOWN
} UC_Error;

#endif  /* __UC_COMMON_H */
