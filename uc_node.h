/*
 * File name:   uc_node.h
 * Author:      Kostas Peletidis
 * Date:        06-Jul-2017
 *
 * Header file for UC_Node structure.
 */
#ifndef __UC_NODE_H
#define __UC_NODE_H

#include <stdlib.h>
#include <stdio.h>
#include "uc_common.h"

/* Data structures and types */

typedef struct _uc_elem {
    struct _uc_elem *next;
    void            *data;
    size_t          sn;
} UC_Node;

/* Function prototypes */

UC_Node * UC_Node_create(void);
UC_Error UC_Node_assign(UC_Node *node, void *data);
void UC_Node_free(UC_Node **node);

#endif  /* __UC_NODE_H */
