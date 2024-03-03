#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 *
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: returns a pointer to the created node, or NULL on failure
 * or if parent is NULL
 *
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (parent == NULL)
		return (NULL);
	new_child = binary_tree_node(parent, value);
	if (new_child == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_child->left = parent->left;
		parent->left->parent = new_child;
	}
	parent->left = new_child;
	return (new_child);
}
