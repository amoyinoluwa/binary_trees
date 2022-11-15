#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts node as left child of parent
 * @parent - parent node
 * @value: value that left child holds
 * Return: ptr to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	right_child = binary_tree_node(parent, value);

	if (!right_child)
		return (NULL);

	if (parent->right)
		free(parent->right);

	parent->right = right_child;

	return (right_child);
}
