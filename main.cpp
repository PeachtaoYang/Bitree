#include"BiTree.h"
#include"BiTree.cpp"
#include<string>
using std::string;
int main()
{
	BiTree<char> s;
	cout << "���������" << endl;
	s.LeverOrder();
	cout << "�������" << endl;
	s.InOrder();
	cout << "ǰ�������" << endl;
	s.PreOrder();
	cout << "���������" << endl;
	s.PostOrder();
	system("pause");
	return EXIT_SUCCESS;
}