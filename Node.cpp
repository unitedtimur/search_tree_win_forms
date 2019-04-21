#include "Node.h"

node::node(const int& data, node* left, node* right) : 
	data(data),
	left(left),
	right(right)
	{}

int node::get_data() const noexcept
{
	return data;
}

node* node::get_left() const noexcept
{
	return left;
}

node* node::get_right() const noexcept
{
	return right;
}