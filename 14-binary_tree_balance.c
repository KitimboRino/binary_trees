#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of binary tree for balanced tree.
 * @tree: The binary tree to measure.
 * Return: The height of the tree.
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
size_t l = 0;
/* Height of the left subtree */
size_t r = 0;
/* Height of the right subtree */

if (tree == NULL)
/* If the tree is empty */
{
return (0);
/* Return 0, as there's no height */
}
else
{
if (tree)
/* If the tree is not empty */
{
/* Calculate the height of the left subtree */
l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;

/* Calculate the height of the right subtree */
r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
}
/* Returns maximum height between left and right subtrees */
return ((l > r) ? l : r);
}
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: The binary tree to measure.
 * Return: The balance factor of the tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int right = 0, left = 0, total = 0;

if (tree)
/* If the tree is not empty */
{
/* Calculate the height of the left and right subtrees */
left = ((int)binary_tree_height_b(tree->left));
right = ((int)binary_tree_height_b(tree->right));

/* balance factor= height of right subtree - left subtree */
total = left - right;
}
return (total); /* Return the balance factor */
}
