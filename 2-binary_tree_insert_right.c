#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds a node to the right of the parent.
 * If the parent already has a right child, it moves the existing right child
 * down one level and inserts the new node as the right child of the parent.
 *
 * @parent: Parent of the specified node.
 * @value: Value of the new node.
 * Return: NULL if it fails to allocate memory or the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

/* Check if the parent is NULL */
if (parent == NULL)
{
return (NULL);
}

/* Create a new node with the given value */
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
{
return (NULL); /* Return NULL if allocation fails */
}

/* If the parent already has a right child, move it down one level */
if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}

parent->right = new_node;  /* Set new node as right child of parent */
return (new_node);  /* Return the new node */
}
