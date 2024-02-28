#include "binary_trees.h"

/**
 * binary_tree_size - function that returns the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;
/* Variable to store the size of the tree */
size_t r = 0, l = 0;
/* Variables to store sizes of left and right subtrees */

/* Check if the tree is NULL */
if (tree == NULL)
{
return (0); /* If tree is NULL, size is 0 */
}
else
{
/* Recursively calculate the size of the left subtree */
l = binary_tree_size(tree->left);

/* Recursively calculate the size of the right subtree */
r = binary_tree_size(tree->right);

/*treesize= sum (sizes of left&right subtrees), + 1 for current node */
size = r + l + 1;
}

return (size); /* Return the size of the tree */
}
