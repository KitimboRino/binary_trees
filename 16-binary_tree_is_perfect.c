#include "binary_trees.h"

/**
 * tree_is_perfect - function that checks if a tree is perfect
 * @tree: tree to check
 * Return: height of the tree if perfect, 0 otherwise
 */
int tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

int left_height = tree_is_perfect(tree->left);
int right_height = tree_is_perfect(tree->right);

if (left_height == -1 || right_height == -1 || left_height != right_height)
return (-1);

return (1 + left_height);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

int result = tree_is_perfect(tree);

return (result != -1);
}
