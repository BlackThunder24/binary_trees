#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent of the node to create
 * @value: value of the node to create
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *nodo_nuevo = malloc(sizeof(binary_tree_t));

if (!nodo_nuevo)
{
return (NULL);
}
nodo_nuevo->parent = parent;
nodo_nuevo->n = value;
nodo_nuevo->left = NULL;
nodo_nuevo->right = NULL;

return (nodo_nuevo);
}
