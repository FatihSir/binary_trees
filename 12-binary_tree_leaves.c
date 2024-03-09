#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: If tree is NULL, the function must return 0 or,
 * NULL pointer is not a leaf
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t left_tree = 0;
	size_t right_tree = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_tree = binary_tree_leaves(tree->left);
	right_tree = binary_tree_leaves(tree->right);
	size = right_tree + left_tree;
	return (size);
}
