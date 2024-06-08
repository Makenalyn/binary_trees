#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 * @parent: pointer to the parent node
 * @value: int value holding data
 *
 * Return: new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	newnode->n = value;
	newnode = parent;

	return (newnode);
}
