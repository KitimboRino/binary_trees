#include "binary_trees.h"

/**
 * binary_tree_preorder - Prints elements of a tree using pre-order traversal.
 * @tree: Tree to traverse.
 * @func: Function to apply to each node's value.
 * Return: Nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
/* Check if the tree or the function is NULL */
if (tree == NULL || func == NULL)
return;

/* Apply the function to the current node's value */
func(tree->n);

/* Traverse the left subtree in pre-order */
binary_tree_preorder(tree->left, func);

/* Traverse the right subtree in pre-order */
binary_tree_preorder(tree->right, func);
}
