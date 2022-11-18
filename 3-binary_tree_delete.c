#include "binary_trees.h"
/**
* binary_tree_delete - deletes a binary tree with post order traversal
* @tree : pointer to root node
* Return: Nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}