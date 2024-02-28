#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a tree.
 * @tree: Tree to check.
 * Return: Number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaf = 0, l = 0, r = 0;

/* Check if the tree is NULL */
if (tree == NULL)
return (0);

/* Recursively count leaves in the left and right subtrees */
l = binary_tree_leaves(tree->left);
r = binary_tree_leaves(tree->right);

/* Calculate the total number of leaves */
leaf = l + r;

/* Increment leaf count if the current node is a leaf */
return ((!l && !r) ? leaf + 1 : leaf + 0);
}
