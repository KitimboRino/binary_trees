#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

/* Check if the parent node is NULL */
if (parent == NULL)
{
return (NULL);
}

/* Allocate memory for the new node */
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
{
return (NULL);
}

/* If parent already has a left-child, move it down one level */
if (parent->left != NULL)
{
/* Make new node's left child point to parent's current left child */
new_node->left = parent->left;
/* Update the parent pointer of the current left child to the new node */
parent->left->parent = new_node;
}

/* Set the new node as the left child of the parent */
parent->left = new_node;

return (new_node);
}
