#include"BiTree.h"
#include"BiTree.cpp"
#include<string>
using std::string;
int main()
{
	BiTree<char> s;
	cout << "层序遍历：" << endl;
	s.LeverOrder();
	cout << "中序遍历" << endl;
	s.InOrder();
	cout << "前序遍历：" << endl;
	s.PreOrder();
	cout << "后序遍历：" << endl;
	s.PostOrder();
	system("pause");
	return EXIT_SUCCESS;
}