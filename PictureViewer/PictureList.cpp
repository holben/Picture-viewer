#include "PictureList.h"



PictureList::PictureList()
{
}
PictureList::~PictureList()
{
}
void PictureList::add(std::string value)// add to the end of the list
{
	PictureNode *newPicture = new PictureNode;
	newPicture = tail->next;
}
void PictureList::insert(int pos, std::string value)// Inserts the value at the given index
{
	PictureNode *newPicture = new PictureNode;
	PictureNode *position = head;
	int start = 0;
	while (start < pos)
	{
		position = position->next;
	}


	newPicture->next = position->next;

	position->next = newPicture;

}
void PictureList::remove(int pos)// Removes element at given position
{
	PictureNode *deletedPicture;
	PictureNode *position = head;
	int start = 0;
	
	while (start < pos)
	{
		position = position->next;
		start++;
	}
	deletedPicture = position;
	position->prev = position->next;
	delete deletedPicture;

	
	
}
void PictureList::get(int pos) //returns element at that position
{

}
void PictureList::set(int pos, double value)// sets position in list
{

}
int PictureList::size() //the number of elements stored in the list
{
	
	int size = 0;
	while (tail != 0)
	{
		tail = tail->next;
		size++;
	}
	return size;
}