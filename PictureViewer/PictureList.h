#pragma once
#include <iostream>
struct PictureNode
{
	PictureNode *next;
	PictureNode *prev;
};
ref class PictureList
{
private:
	PictureNode *head;
	PictureNode *tail;
	
public:
	PictureList();
	~PictureList();
	void add(std::string value); // add to the end of the list
	void insert(int pos, std::string value);// Inserts the value at the given index
	void remove(int pos);// Removes element at given position
	void get(int pos); //returns element at that position
	void set(int pos, double value);// sets position in list
	int size(); //the number of elements stored in the list
};

