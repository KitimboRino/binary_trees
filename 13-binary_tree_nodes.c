#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes in binary tree with at least one child.
 * @tree: tree to check
 * Return: number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t  node = 0;

/* Variable to stores count of nodes with children */
if (tree == NULL)

/*If the tree is empty */
{
return (0);

/* Return 0, as there are no nodes */
}
else
{

/* Increment node if current node has atleast 1 child */
node += ((tree->left || tree->right) ? 1 : 0);

/* Recursively count nodes with children left subtree*/
node += binary_tree_nodes(tree->left);

/* Recursively count nodes with children in the right subtree */
node += binary_tree_nodes(tree->right);
return (node);
/* Return the total count of nodes with children */
}
}
