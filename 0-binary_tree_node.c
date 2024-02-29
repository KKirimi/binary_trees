#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node || NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	/* allocate memory to the root node */
	NewNode = malloc (sizeof(binary_tree_t));

	/* check if mem allocation was a success */
	if (NewNode == NULL)
		return (NULL);

	/* node with value but no children */
	NewNode->parent = parent;
	NewNode->n = value;
	NewNode->left = NULL;
	NewNode->right = NULL;

	return (NewNode);
}
