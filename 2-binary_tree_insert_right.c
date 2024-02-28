#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds a node to the right of the parent.
 * If a right-child exists, it moves down 1 level and adds new node first.
 * @parent: Parent of the specified node.
 * @value: Value of the new node.
 * Return: NULL if it fails or the pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
/* Check if the parent is NULL */
if (parent == NULL)
{
/* Return NULL if the parent is NULL */
return (NULL);
}

/* Create a new node with the specified value */
binary_tree_t *new_node = binary_tree_node(parent, value);

/* Check if memory allocation for the new node was successful */
if (new_node == NULL)
{
/* Return NULL if memory allocation fails */
return (NULL);
}

/* If the parent already has a right-child, adjust pointers */
if (parent->right != NULL)
{
new_node->right = parent->right;
parent->right->parent = new_node;
}

/* Set the new node as the right-child of the parent */
parent->right = new_node;

/* Return the pointer to the new node */
return (new_node);
}
