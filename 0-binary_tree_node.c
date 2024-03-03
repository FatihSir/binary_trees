#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a new child node
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: returns a pointer to the new node, or NULL on failure
 *
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child = NULL;

	new_child = malloc(sizeof(binary_tree_t));
	if (new_child == NULL)
	{
		free(new_child);
		return (NULL);
	}
	new_child->n = value;
	new_child->parent = parent;
	new_child->left = NULL;
	new_child->right = NULL;

	return (new_child);
}
