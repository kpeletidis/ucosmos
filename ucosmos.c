/*
 * File name:   ucosmos.c
 * Author:      Kostas Peletidis
 * Date:        09-Jun-2017
 *
 * Top level source file for uCosmos.
 */

/* Headers */
#include "ucosmos.h"

/* Data stuctures */

/* Macro definitions */

/* Module code */
/****************************************************************/
int main(int argc, char *argv[])
{
    UC_Node *n=NULL;
    int     *data=NULL;

    /* Create a node */
    n = UC_Node_create();
    printf("n: %p\n", n);

    /* Assign data to the node */
    data = (int *)malloc(sizeof(int));
    if (data) *data = 42;
    UC_Node_assign(n, data);
    printf("n->data: %d\n", *((int*)n->data));

    /* Release the node */
    UC_Node_free(&n);
    printf("n: %p\n", n);

    return 0;
}

/****************************************************************/
