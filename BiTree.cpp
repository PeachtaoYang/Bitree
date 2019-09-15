#include "BiTree.h"
#include<queue>
template<class dt>
void BiTree<dt>::PreOrder(BiNode<dt> *bt)
{
	if (bt == nullptr) return;
	else
	{
		cout << bt->data;
		PreOrder(bt->lchild);
		PreOrder(bt->rchild);
	}
}

template<class dt>
void BiTree<dt>::InOrder(BiNode<dt> *bt)
{
	if (bt == nullptr)return;
	else
	{
		InOrder(bt->lchild);
		cout << bt->data;
		InOrder(bt->rchild);
	}
}

template<class dt>
void BiTree<dt>::PostOrder(BiNode<dt> *bt)
{
	if (bt == nullptr)
	{
		return;
	}
	else
	{
		PostOrder(bt->lchild);
		PostOrder(bt->rchild);
		cout << bt->data;
	}
}

template<class dt>
void BiTree<dt>::LeverOrder()
{
	if (root == nullptr)
	{
		return;
	}
	queue<BiNode<dt>*> rel;
	rel.push(root);
	while (!rel.empty())
	{
		auto front = rel.front();
		cout << front->data;
		rel.pop();
		if (front->lchild != nullptr)
		{
			rel.push(front->lchild);
		}
		if (front->rchild != nullptr)
		{
			rel.push(front->rchild);
		}
	}
}

template<class dt>
BiNode<dt> * BiTree<dt>::Create(BiNode<dt>*bt)
{
	char ch;
	cout << "请输入二叉树节点信息" << endl;
	cin >> ch;
	if (ch == '#')
	{ 
		bt = nullptr; 
	}
	else
	{
		bt = new BiNode<dt>;
		bt->data = ch;
		bt->lchild = Create(bt->lchild);
		bt->rchild = Create(bt->rchild);
	}
	return bt;
}

template<class dt>
void BiTree<dt>::Release(BiNode<dt> *bt)
{
	if (bt != nullptr)
	{
		Release(bt->lchild);
		Release(bt->rchild);
		delete bt;
	}
}
