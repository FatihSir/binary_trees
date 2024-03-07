#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL return 0 , otherwise returns the
 * height of a binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->right)
		height_left = binary_tree_height(tree->left) + 1;
	if (tree->left)
		height_right = binary_tree_height(tree->right) + 1;
	return (MAX(height_left, height_right));
}
