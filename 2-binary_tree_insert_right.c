#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the lrightchild of another node
 * @parent: node to insert the right child
 * @value: value of the new node
 * Return: Pointer to the new node, or NULL on failure
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
nodo_nuevo->left = NULL;
nodo_nuevo->right = NULL;

if (parent->right != NULL)
{
nodo_nuevo->right = parent->right;
parent->right->parent = nodo_nuevo;
parent->right = nodo_nuevo;
}
else
parent->right = nodo_nuevo;

return (nodo_nuevo);
}
