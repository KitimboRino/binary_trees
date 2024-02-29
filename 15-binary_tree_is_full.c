#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * A binary tree is full if each node has either 2 children or no children.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
int left = 0, right = 0;

if (tree == NULL)
/* If the tree is empty */
{
return (0);
/* It's not full, return 0 */
}
else
{
if (tree->left && tree->right)
/* If the node has both left and right children */
{
left = binary_tree_is_full(tree->left);
/* Check if the left subtree is full */
right = binary_tree_is_full(tree->right);
/* Check if the right subtree is full */

if (left == 0 || right == 0)
/* If either subtree is not full */
{
return (0);
/* The tree is not full, return 0 */
}
return (1);
/* Both subtrees are full, return 1 */
}
else if (!tree->left && !tree->right)
/* If the node has no children */
{
return (1);
/* The node is a leaf, return 1 */
}
else
/* If the node has only one child */
{
return (0);
/* The tree is not full, return 0 */
}
}
}
