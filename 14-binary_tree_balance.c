#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of
 * a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor of the binary tree. If tree is
 * NULL, return 0. Balance factor is calculated as the
 * difference between the height of the left subtree
 * and that of the right subtree. A positive value indi-
 * cates the tree is left heavy, a negative indicates
 * right heavy, and 0 indicates balanced.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}
