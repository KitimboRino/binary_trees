#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node of the new node
 * @value: Value to be stored in the new node
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
/* Allocate memory for the new node */
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

/* Check if memory allocation was successful */
if (new_node == NULL)
{
/* Return NULL if memory allocation fails */
return (NULL);
}

/* Initialize the fields of the new node */
new_node->n = value;       /* Set the value of the new node */
new_node->parent = parent; /* Set the parent of the new node */
new_node->left = NULL;     /* Set the left child of the new node to NULL */
new_node->right = NULL;    /* Set the right child of the new node to NULL */

/* Return the pointer to the new node */
return (new_node);
}
