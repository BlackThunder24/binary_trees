#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node of the tree to check
 * Return: 1 if is full otherwise 0; if tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int h_right = 0, h_left = 0 ;
if (tree == NULL)
return 0;
h_right = binary_tree_is_perfect(tree->right);
h_left = binary_tree_is_perfect(tree->left);
if (h_left == h_right)
return (1);
else
return 0;

}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node of the tree to measure the height
 * Return: height of the node; 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;
if (!tree)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
if (left_height < right_height)
return left_height + 1;
return right_height + 1;
}
