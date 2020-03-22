/*
 * Unicamp Faculty of Technology - FT
 *
 * SI010 - Data Structures II - 1st HALF 2020
 *
 * Programmers:
 * 	Gustavo Adrien Polli	217357
 * 	Victor Gomes Sampaio	225133
 *
 * Description:
 * Command line simple text editor program with functions to type,
 * print on screen, insert text, delete text, save to file and load
 * file.
 */

/*
 * Libraries
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Data structures
 */
typedef struct Node{
	char data;
	struct Node* next;
} *NODEPTR;

/*
 * Function headers
 */
void insertText(NODEPTR *ptr, char* value);
NODEPTR search(NODEPTR *ptr, char* value);
void print();
void insertContent(int pos);
void clear(int start, int end);
void saveToFile(char* name);
void loadFile();
void menu();

/*
 * Main program
 */
int main(int argc, char* argv[]){

	return 0;
}

/*
 * Function that allows the insertion of text in the list given a
 * position as a starting point.
 */
void insertText(NODEPTR *ptr, char* value){
	
}

/*
 * Function that allows you to search for a piece of text in the list.
 */
NODEPTR search(NODEPTR *ptr, char* value){
	
}

/*
 * Function that allows the list contents to be printed on screen.
 */
void print(){
	
}

/*
 * ?
 */
void insertContent(int pos){
	
}

/*
 * Function that clears the entire list, deallocating pointers and
 * memory.
 */
void clear(int start, int end){
	
}

/*
 * Function that allows saving all the contents of the list to file.
 */
void saveToFile(char* name){
	
}

/*
 * Function that allows a previously saved text file to be loaded into
 * the list. The user will be asked to enter the file name (with
 * extension).
 */
void loadFile(){
	
}

/*
 * Function that prints a menu of options on the screen.
 */
void menu(){
	
}
