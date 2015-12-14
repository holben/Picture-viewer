#include "PictureList.h"



PictureList::PictureList()
{
	head = 0;
	tail = 0;
}
PictureList::~PictureList()
{
	PictureNode *node = head;
	while (node != 0) {
		delete node;
	}
}

PictureNode * PictureList::walkToPosition(int position)
{
	int tmp_pos = 0;
	if (head == NULL || head == 0) {
		return 0;
	}
	PictureNode *tmp_node = head;
	while (tmp_pos < position) {
		tmp_pos++;
		if (tmp_node->next != 0) {
			tmp_node = tmp_node->next;
		}
		if (tmp_node->next == 0) {
			break;
		}
	}
	return tmp_node;
}

void PictureList::add(std::string value)// add to the end of the list
{

	insert(size(), value);
}
void PictureList::insert(int pos, std::string value)// Inserts the value at the given index
{
	PictureNode *newNode = new PictureNode;
	newNode->picturePath = value;
	newNode->next = 0;

	PictureNode *pic_at_position = walkToPosition(pos);

	if (pic_at_position == 0)
	{
		head = newNode;
		head->next = 0;
		head->prev = 0;
	}
	else
	{
		newNode->next = pic_at_position->next;
		newNode->prev = pic_at_position;

		if (newNode->next != 0)
		{
			newNode->next->prev = newNode;
		}
		pic_at_position->next = newNode;

	}

}



void PictureList::remove(int pos)// Removes element at given position
{
	
		PictureNode *tmp_node = walkToPosition(pos);
		if (tmp_node->next)
		{
			PictureNode *to_delete = tmp_node->next;
			tmp_node->next = to_delete->next;
			tmp_node->next->prev = tmp_node;
			delete to_delete;
		}
		else if (!tmp_node->next)
		{
			PictureNode *to_delete = tmp_node->prev;
			tmp_node->prev = to_delete->prev;
			tmp_node->prev->next = tmp_node;
			delete to_delete;
			
		}
		else {

		}
		
	

	
	
}
std::string PictureList::get(int pos) //returns element at that position
{
	PictureNode *pic = walkToPosition(pos);
	return pic->picturePath;
}
void PictureList::set(int pos, double value)// sets position in list
{
	throw gcnew System::NotImplementedException();
}
int PictureList::size() //the number of elements stored in the list
{
	
	int number_nodes = 0;
	if (head != NULL && head != 0) {
		PictureNode *start = head;
		number_nodes++;
		while (start->next != 0) {
			number_nodes++;
			start = start->next;
		}
	}

	return number_nodes;
}