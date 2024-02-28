#include "binary_trees.h"

/**
 * binary_tree_inorder - print elements of tree using in-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
/* Check if the tree or the function is NULL */
if (tree == NULL || func == NULL)
{
return; /* If either is NULL, return */
}
else
{
/* Recursively traverse left subtree */
binary_tree_inorder(tree->left, func);

/* Call the function on the current node's value */
func(tree->n);

/* Recursively traverse right subtree */
binary_tree_inorder(tree->right, func);
}
}
