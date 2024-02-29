#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 * @node: node to check for its sibling
 *
 * Return: The sibling node if it exists, or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
/* Check if the input node is NULL or if it has no parent */
if (node == NULL || node->parent == NULL)
{
/* No sibling if node is NULL or has no parent */
return (NULL);
}

/* If the node is the left child of its parent, return the right child */
if (node->parent->left == node)
{
return (node->parent->right);
}
/* If the node is the right child of its parent, return the left child */
else if (node->parent->right == node)
{
return (node->parent->left);
}

/* Default case, should not reach here under normal conditions */
return (NULL);
}
