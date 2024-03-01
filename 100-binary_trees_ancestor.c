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
	const binary_tree_t *leftancestor, *rightancestor;

	for (leftancestor = first; leftancestor; leftancestor = leftancestor->parent)
		for (rightancestor = second; rightancestor; rightancestor = rightancestor->parent)
			if (leftancestor == rightancestor)
				return ((binary_tree_t *)leftancestor);
	return (NULL);
}
