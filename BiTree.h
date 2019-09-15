#pragma once
#include<iostream>
using namespace std;
template <class dt>
struct BiNode
{
	dt data;
	BiNode<dt>*lchild, *rchild;
};
template<class dt>
class BiTree
{
private:
	BiNode<dt>*root;
	BiNode<dt> *Create(BiNode<dt>*bt);
	void Release(BiNode<dt> *bt);
	void PreOrder(BiNode<dt> *bt);
	void InOrder(BiNode<dt> *bt);
	void PostOrder(BiNode<dt> *bt);
public:
	BiTree() { root = Create(root); }
	~BiTree() { Release(root); }
	void PreOrder() { PreOrder(root); }
	void InOrder() { InOrder(root); }
	void PostOrder() { PostOrder(root); }
	void LeverOrder();
};

