#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: node to check for its uncle
 *
 * Return: The uncle node if it exists, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/* Check if input node is NULL, or if it has no parent or grandparent */
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
{
/* No uncle if node is NULL, has no parent, or has no grandparent */
return (NULL);
}

/* If parent is left child of its grandparent, return the right child */
if (node->parent->parent->left == node->parent)
{
return (node->parent->parent->right);
}
/* If parent is right child of its grandparent, return the left child */
else if (node->parent->parent->right == node->parent)
{
return (node->parent->parent->left);
}

/* Default case, should not reach here under normal conditions */
return (NULL);
}
