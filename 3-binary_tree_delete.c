#include "binary_trees.h"

/**
 * binary_tree_delete - free an entire tree using recursion it free the node
 * when the node left and right are NULL
 * @tree: tree to free
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
/* Check if the tree is NULL */
if (tree == NULL)
{
return;
}
else
{
/* Recursively delete the left subtree */
binary_tree_delete(tree->left);
/* Recursively delete the right subtree */
binary_tree_delete(tree->right);
}

/* Free the current node */
free(tree);
}
