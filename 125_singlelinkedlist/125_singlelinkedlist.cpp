
#include <iostream>
using namespace std;

struct Node {
	int noMhs;
	string name;
	Node* next;
};
Node* START = NULL;
void addNode() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();   // step 1
	cout << "Masukkan NIM: ";
	cin >> nim;
	cout << "Masukkan Nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) // step 2
		{
			cout << "NIM sudah ada" << endl;
			return;
		}
		nodeBaru->next = START;
		START = nodeBaru;
		return;
	}

	Node* previous = START;
	Node* current = START;
	while ((current != NULL) && (nim >= current->noMhs))
	{
		if (nim == current->noMhs)   // step 1
		{
			cout << "NIM sudah ada" << endl;
			return;
		}
		previous = current;
		current = current->next;
	}

	nodeBaru->next = current;
	previous->next = nodeBaru;
}
	bool serachNode(int nim, Node* current, Node* previous) {
	previous = START;												// memulai
	current = START;
	while (current != NULL && nim > current->noMhs)

	{
		previous = current;
		current = current->next;		// step 1
	}




