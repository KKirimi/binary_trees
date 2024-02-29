#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure size
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lefttree, righttree;

	if (tree == NULL)
		return (0);

	lefttree = binary_tree_size(tree->left);
	righttree = binary_tree_size(tree->right);

	return (lefttree + righttree + 1);
}
