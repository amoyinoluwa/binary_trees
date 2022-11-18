#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts node as left child of parent
 * @parent - parent node
 * @value: value that left child holds
 * Return: ptr to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	left_child = binary_tree_node(parent, value);

	if (!left_child)
		return (NULL);

	if (parent->left)
		free(parent->left);

	parent->left = left_child;

	return (left_child);
}
