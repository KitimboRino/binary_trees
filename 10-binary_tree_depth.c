#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a specified node from the root.
 * @tree: Node to check the depth.
 * Return: 0 if it is the root or the number of depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
/* Check if the node and its parent exist */
return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
