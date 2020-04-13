
#include <iostream>

using namespace std;

struct element {
	int value;
	element* pointer;
	element() {
		value = 0;
		pointer = NULL;
	}
};

void In(element*& s, int n)
{
	element* p = NULL;
	int i = 0;
	cout << "Elementi: ";
	while (i < n) {
		element* p1 = new element();
		cin >> p1->value;
		if (s == NULL) {
			s = p1;
			p = p1;
		}
		else {
			p->pointer = p1;
			p = p1;
		}
		i++;
	}
}

void Out(element* l) {
	cout << "Spisok: ";
	while (l != NULL) {
		cout << l->value << " ";
		l = l->pointer;
	}
	cout << endl;
}

void Delete(element*& first, int n) {
	element* l = first;
	element* p = NULL;
	while (l != NULL) {
		if (l->value < 0) {
			p = l;
			l = l->pointer;
		}
		else {
			if (p != NULL) {
				p->pointer = l->pointer;
				delete l;
				l = p->pointer;
			}
			else {
				first = first->pointer;
				delete l;
				l = first;
			}
		}
	}
}

int main()
{
	element* first = NULL;
	int n;
	cout << "Razmer spiska: ";
	cin >> n;
	In(first, n);
	Out(first);
	Delete(first, n);
	Out(first);
	system("pause");

	return 0;
}

