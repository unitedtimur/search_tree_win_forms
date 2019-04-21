#ifndef NODE_H
#define NODE_H

class node
{
public:
	node(const int& data = 0, node* left = nullptr, node* right = nullptr);
	int get_data() const noexcept;

	node* get_left() const noexcept;
	node* get_right() const noexcept;

private:
	int data;
	node* left,
		* right;
	friend class bin_tree;
};

#endif