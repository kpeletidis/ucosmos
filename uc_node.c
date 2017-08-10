/*
 * File name:   uc_node.c
 * Author:      Kostas Peletidis
 * Date:        06-Jul-2017
 *
 * UC_Node implementation.
 */

/* Headers */
#include "uc_node.h"

/* Data stuctures */

/* Macro definitions */

/* Module code */
/****************************************************************/
UC_Node * UC_Node_create(void) {
    UC_Node *node = NULL;

    if ((node = (UC_Node *)malloc(sizeof(UC_Node))) == NULL) {
        fprintf(stderr, "%s:%d: malloc\n", __FILE__, __LINE__);
        exit(EXIT_FAILURE);
    }
    node->next = NULL;
    node->data = NULL;

    return node;
}

/****************************************************************/
UC_Error UC_Node_assign(UC_Node *node, void *data) {
    UC_Error    rv=UC_UNKNOWN;

    if (node == NULL) {
        fprintf(stderr, "%s:%d:%s: Invalid argument",
                __FILE__, __LINE__, __func__);
        rv = UC_INVALID;
        goto cleanup;
    }

    fprintf(stdout, "node: %p data: %p", node, data);
    if (data)
        printf(" *data: %d", *((int*) data));
    printf("\n");

    node->data = data;
    rv = UC_OK;

cleanup:
    return rv;
}

/****************************************************************/
void UC_Node_free(UC_Node **node) {
    if (node == NULL) {
        fprintf(stderr, "%s:%d:%s: Invalid argument",
                __FILE__, __LINE__, __func__);
    }
    else if (*node != NULL) {
        if ((*node)->data) free((*node)->data);
        free(*node);
        *node = NULL;
    }
}

/****************************************************************/