#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l = 0; /* Height of the left subtree */
size_t r = 0; /* Height of the right subtree */

/* Check if the tree is NULL */
if (tree == NULL)
{
return (0); /* If tree is NULL, height is 0 */
}
else
{
/* Check if the current node exists */
if (tree)
{
/* Recursively calculate the height of the left subtree */
l = tree->left ? 1 + binary_tree_height(tree->left) : 0;

/* Recursively calculate the height of the right subtree */
r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
}

/* Return the maximum height between left and right subtrees */
return ((l > r) ? l : r);
}
}
