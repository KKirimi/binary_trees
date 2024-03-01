#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the LCA || NULL on failure
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *leftCA, *rightCA;

	for (leftCA = first; leftCA; leftCA = leftCA->parent)
		for (rightCA = second; rightCA; rightCA = rightCA->parent)
			if (leftCA == rightCA)
				return ((binary_tree_t *)leftCA);
	return (NULL);
}
