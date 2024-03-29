#include "binary_trees.h"

/**
 * binary_tree_postorder - func that traverses binary tree
 * using post-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The
 * value in the node is passed as a parameter to func
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
