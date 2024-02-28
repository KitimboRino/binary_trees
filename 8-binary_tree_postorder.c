#include "binary_trees.h"

/**
 * binary_tree_postorder - Prints elements of a tree using
 * post-order traversal.
 * @tree: Tree to traverse.
 * @func: Function to apply to each node's value.
 * Return: Nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
/* Check if the tree or the function is NULL */
if (tree == NULL || func == NULL)
return;

/* Traverse the left subtree in post-order */
binary_tree_postorder(tree->left, func);

/* Traverse the right subtree in post-order */
binary_tree_postorder(tree->right, func);

/* Apply the function to the current node's value */
func(tree->n);
}
