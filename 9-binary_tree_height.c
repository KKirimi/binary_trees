#include "binary_trees.h"

/**
 * binary_tree_height -measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t treeleft = 0;
	size_t treeright = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		treeleft += 1 + binary_tree_height(tree->left);

	if (tree->right)
		treeright += 1 + binary_tree_height(tree->right);

	if (tree_left > treeright)
		return (treeleft);
	else
		return (treeright);
}
