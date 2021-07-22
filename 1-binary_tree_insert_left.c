#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: node to insert the left child
 * @value: value of the new node
 * Return: Pointer to the new node, or NULL on failure
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *nodo_nuevo = NULL;

if (parent == NULL)
{
return (NULL);
}
nodo_nuevo = malloc(sizeof(binary_tree_t));
if (nodo_nuevo == NULL)
return (NULL);

nodo_nuevo->parent = parent;
nodo_nuevo->n = value;
nodo_nuevo->right = NULL;
nodo_nuevo->left = NULL;

if (parent->left != NULL)
{
nodo_nuevo->left = parent->left;
parent->left->parent = nodo_nuevo;
parent->left = nodo_nuevo;
}
else
parent->left = nodo_nuevo;

return (nodo_nuevo);
}
