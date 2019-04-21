#ifndef BINTREE_H
#define BINTREE_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Node.h"

using namespace std;

class bin_tree
{
public:
	bin_tree();
	bin_tree(const int& data);
	bin_tree(const bin_tree& tree);
	bin_tree(const string& file_name);
	virtual ~bin_tree();

	virtual void add_node(const int& data) const noexcept;
	virtual void print_lrd(node* _node) const noexcept;
	virtual bool delete_node(const int& data) const noexcept;

	virtual node* find_key(const int& data) const noexcept;
	virtual node* find_min() const noexcept;
	virtual node* find_max() const noexcept;
	virtual node* get_root() const noexcept;

	std::vector<int> post() const noexcept;

	friend ostream& operator<<(ostream& os, bin_tree& tree);

private:
	node* root;

	std::vector<int> get_fields(node* _node) const noexcept;

	virtual void delete_tree(node* _node) const noexcept;
	virtual node* copy(node* from) const noexcept;
};

#endif