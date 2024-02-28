#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a node is a root
 * @node: Node to check
 * Return: 0 if is not a root 1 if it is
 */
int binary_tree_is_root(const binary_tree_t *node)
{
/* Check if the node is NULL or if it has a parent */
if (node == NULL || node->parent != NULL)
return (0); /* Return 0 if not a root */

return (1); /* Return 1 if it is a root */
}
