#include "Bin_Tree.h"

#include <exception>
#include <fstream>

bin_tree::bin_tree() : root(new node) {}

bin_tree::bin_tree(const int& data) : root(new node(data)) {}

bin_tree::bin_tree(const bin_tree& tree)
{
	if (tree.root == nullptr)
	{
		root = new node(0);
	}

	auto _node = copy(tree.root);

	root = _node;
}

bin_tree::bin_tree(const string& file_name)
{
	fstream file(file_name, ios_base::in);

	root = new node;

	if (file.is_open())
	{	
		for (; file.eof() == false;)
		{
			static int tmp;
			file >> tmp;
			add_node(tmp);
		}

		file.close();
	}
}

bin_tree::~bin_tree()
{
	delete_tree(root);
}

void bin_tree::add_node(const int& data) const noexcept
{
	node* _node = root;

	for (;;)
	{
		if (data > _node->data)
		{
			if (_node->right != nullptr)
			{
				_node = _node->right;
			}
			else
			{
				_node->right = new node(data);
				break;
			}
		}
		else
		{
			if (_node->left != nullptr)
			{
				_node = _node->left;
			}
			else
			{
				_node->left = new node(data);
				break;
			}
		}
	}
}

void bin_tree::print_lrd(node* _node) const noexcept
{
	if (_node == nullptr)
	{
		return;
	}

	try
	{
		if (_node->left) print_lrd(_node->left);
		if (_node->right) print_lrd(_node->right);
		if (_node != root) cout << _node->data << " ";
	}//System.NullReferenceException
	catch (exception ex)
	{
		cerr << ex.what() << endl;
	}
}

bool bin_tree::delete_node(const int& data) const noexcept
{
	node* _node = root;

	for (;;)
	{
		if (data > _node->data)
		{
			if (_node->right)
			{
				if (_node->right->data == data)
				{
					node* rptr = _node->right->right;
					node* lptr = _node->right->left;

					delete _node->right;

					if (lptr)
					{
						_node->right = lptr;
						for (; lptr->right; lptr = lptr->right);
						lptr->right = rptr;
					}
					else
					{
						_node->right = rptr;
					}

					break;
				}
				else
				{
					_node = _node->right;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (_node->left)
			{
				if (_node->left->data == data)
				{
					node* lptr = _node->left->left;
					node* rptr = _node->left->right;

					delete _node->left;

					if (rptr)
					{
						_node->right = rptr;
						for (; rptr->left; rptr = rptr->left);
						rptr->left = lptr;
					}
					else
					{
						_node->left = lptr;
					}

					break;
				}
				else
				{
					_node = _node->left;
				}
			}
			else
			{
				return false;
			}
		}
	}

	return true;
}

node* bin_tree::find_key(const int& data) const noexcept
{
	node* _node = root;

	for (;;)
	{
		if (data > _node->data)
		{
			_node = _node->right;

			if (_node != nullptr)
			{
				if (_node->data == data)
				{
					return _node;
				}
			}
			else
			{
				return nullptr;
			}
		}
		else
		{
			_node = _node->left;

			if (_node != nullptr)
			{
				if (_node->data == data)
				{
					return _node;
				}
			}
			else
			{
				return nullptr;
			}
		}
	}
}

node* bin_tree::find_min() const noexcept
{
	node* _node = root;

	if (_node == nullptr)
	{
		return nullptr;
	}

	while (_node->left != nullptr)
	{
		_node = _node->left;
	}

	return _node;
}

node* bin_tree::find_max() const noexcept
{
	node* _node = root;

	if (_node == nullptr)
	{
		return nullptr;
	}

	while (_node->right != nullptr)
	{
		_node = _node->right;
	}

	return _node;
}

node* bin_tree::get_root() const noexcept
{
	return root;
}

void bin_tree::delete_tree(node * _node) const noexcept
{
	if (_node->left) delete_tree(_node->left);
	if (_node->right) delete_tree(_node->right);

	delete _node;
}

node* bin_tree::copy(node * from) const noexcept
{
	if (from == nullptr)
	{
		return nullptr;
	}

	auto _node = new node(from->data);

	_node->left = copy(from->left);
	_node->right = copy(from->right);

	return _node;
}

std::vector<int> post_field;

std::vector<int> bin_tree::post() const noexcept
{
	std::vector<int> vec = get_fields(root);

	return vec;
}

std::vector<int> bin_tree::get_fields(node* _node) const noexcept
{
	static std::vector<int> tmp;

	if (_node == nullptr) return tmp;

	get_fields(_node->left);
	get_fields(_node->right);

	tmp.push_back(_node->data);

	return tmp;
}

ostream& operator<<(ostream & os, bin_tree & tree)
{
	tree.print_lrd(tree.root);
	return os;
}
