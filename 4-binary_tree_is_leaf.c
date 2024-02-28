#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf (has no children).
 * @node: Node to be checked.
 * Return: 1 if it is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
/* Check if the node is NULL or has no children */
return (node != NULL && node->left == NULL && node->right == NULL);
}
