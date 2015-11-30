#pragma once
#include <iostream>
struct PictureNode
{
	std::string picturePath;
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
	void add(std::string value); // Adds to the end of the list
	void insert(int pos, std::string value); // Inserts the value at the given index
	void remove(int pos); // Removes element at given pos
	std::string get(int pos); // Returns element at that pos
	void set(int pos, double value); // Sets a position in list
	int size(); // The number of elements stored in the list
	PictureNode * walkToPosition(int position);
};

