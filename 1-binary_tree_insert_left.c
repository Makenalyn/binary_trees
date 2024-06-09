#include "binary_trees.h"

/**
 * insert a node as the left child of another node
 * binary_tree_insert_left - insert a node to the left
 * @parent: pointer to the node to insert left node
 * @value: value to store to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = malloc(sizeof(binary_tree_t));

	if (new_left_node == NULL)
	{
		return (NULL);
	}

	new_left_node->n = value;
	new_left_node->right = NULL;
	new_left_node->left = parent;

	return (new_left_node);
}
