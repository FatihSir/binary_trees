#include "binary_trees.h"
/**
 * binary_tree_nodes -  a function that counts the nodes with at
 * least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: If tree is NULL, the function must return 0,
 * NULL pointer is not a node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0;

	if (tree == NULL)
		return (0);
	right_count = binary_tree_nodes(tree->left);
	left_count = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (left_count + right_count + 1);
	else
		return (left_count + right_count);
}
