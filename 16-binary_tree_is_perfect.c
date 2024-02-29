#include "binary_trees.h"

/**
 * tree_is_perfect - Checks if a binary tree is perfect.
 * A perfect binary tree has the same number of nodes on the left and right
 * and each node has either 2 children or no children.
 *
 * @tree: The binary tree to check.
 * Return: 0 if tree is not perfect, otherwise the height/level of the tree.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
/* Variables to store the height of left and right subtrees */
int l = 0, r = 0;

/* Check if both left and right children exist */
if (tree->left && tree->right)
{
/* Calculate height of left and right subtrees */
l = 1 + tree_is_perfect(tree->left);
r = 1 + tree_is_perfect(tree->right);

/* Check if the height of left and right subtrees are equal and not 0 */
if (r == l && r != 0 && l != 0)
return (r);

return (0);  /* Not a perfect tree */
}
/* Check if it's a leaf node (no children) */
else if (!tree->left && !tree->right)
{
return (1);  /* Leaf nodes are considered perfect */
}
else
{
return (0);  /* Only one child exists, not a perfect tree */
}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: The binary tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
/* Variable to store the result of the tree_is_perfect function */
int result = 0;

if (tree == NULL)
{
return (0);  /* Null tree is not perfect */
}
else
{
/* Check if the tree is perfect using the helper function */
result = tree_is_perfect(tree);

/* If the result is not 0, the tree is perfect */
if (result != 0)
{
return (1);
}
return (0);  /* Not a perfect tree */
}
}
