/*
 * Unicamp Faculty of Technology - FT
 *
 * SI010 - Data Structures II - 1st Half 2020
 *
 * Developers:
 * 	Gustavo Adrien Polli	217357
 * 	Victor Gomes Sampaio	225133
 *
 * Description:
 * Simple CLI text editor with functions to type,
 * print on screen, insert text, delete text, save to file and load
 * file.
 */

/*
 * Libraries
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
// int search(NODEPTR ptr, char* value);
// int empty(NODEPTR ptr);
// void insertContent(int pos);
// void saveToFile(char* name);
// void loadFile();

void menu(NODEPTR *List);
void clear(int start, int end);
void insertText(NODEPTR *ptr, char* value);
int editText(NODEPTR *List, char* value);
int print(NODEPTR start);
char *getln();

/*
 * Main program
 */
int main(int argc, char* argv[]){
	NODEPTR *List = malloc(sizeof(NODEPTR));

		printf("num de args: %d \n\n", argc);
	if(argc != 1){
		int args = argc-1, aux=1;
		while(args != 0){
			printf("arg: %s \n\n", argv[1]);
			insertText(List, argv[aux]);
			args--;
			aux++;
		}
		insertText(List, " ");
		menu(List);
	}
	else{
		printf("Incorrect usage\n\n");
	}		
	

	printf("ATE esta rodando...\n\n");
	return 0;
}

/*
 * Allows the insertion of text in the list
 */
void insertText(NODEPTR *ptr, char* value){
	NODEPTR newPtr;
	printf("insertText: %s \n", value);
	newPtr = malloc(sizeof(NODEPTR));
	
	/*
	 * Code block that allocates a new node and fills it with the
	 * arguments received.
	 */
	if(newPtr != NULL){
		strcpy(&newPtr->data, value);
		newPtr->next = NULL;
		newPtr->next = *ptr;
		*ptr = newPtr;
	}
	else{
		exit(EXIT_FAILURE);
	}
}


/*
 * Function that prints a menu of options on the screen.
 */
void menu(NODEPTR *List){
	//TODO: needs to think a little bit of it and implement it
	int option = 0;
	//char info; //variável não usada
	do{
		printf("\n AWFUL TEXT EDITOR \n\n");
		printf("Main Menu:\n");
		printf("1- Insert Text\n");
		printf("2- Edit Text\n");
		printf("3- Delete Text\n");
		printf("4- Print Content\n\n");
		scanf("%d", &option);

		switch(option){
			case 1: 
				// insertText();
				printf("Dado para insercao na lista: ");
				// info = getln();
				// insertText(&&List, &info);
				break;
			case 2: 
				printf("Selecionou opcao %d\n", option);
				break;
			case 3: 
				printf("Selecionou opcao %d\n", option);
				break;
			case 4: 
				printf("Selecionou opcao %d\n", option);
				print(*List);
				break;
			case 9: 
				printf("Selecionou opcao %d\n", option);
				return;
				break;
		}

	} while(option != 9);
}

/*
 * Function that allows the list contents to be printed on screen.
 */
int print(NODEPTR start){
	printf("Executou print \n\n");

	if (start == NULL){
		return 1;  /* lista vazia */
	}
	printf("LISTA ::  ");
//  && !strcmp((*start)->data, "\0"
	while (start != NULL) {

		printf("%c", start->data);		
		start = start->next;
	}

	printf("\nChegou no final da func \n\n");
	return 0;
}

/*
 * Function that clears the entire list, deallocating pointers and
 * memory.
 */
void clear(int start, int end){
	//TODO: needs to think a little bit of it and implement it
}

int editText(NODEPTR *ptr, char* value){
	return 0; //precisa retornar inteiro
	//TODO: Choose a position on the list and edit the content
}

// char *getln(){
//     char *line = NULL, *tmp = NULL;
//     size_t size = 0, index = 0;
//     int ch = EOF;

//     while (ch) {
//         ch = getc(stdin);

//         /* Check if we need to stop. */
//         if (ch == EOF || ch == '\n')
//             ch = 0;

//         /* Check if we need to expand. */
//         if (size <= index) {
//             size += CHUNK;
//             tmp = realloc(line, size);
//             if (!tmp) {
//                 free(line);
//                 line = NULL;
//                 break;
//             }
//             line = tmp;
//         }

//         /* Actually store the thing. */
//         line[index++] = ch;
//     }

//     return line;
// }


/* ******************************* To Be Implemented Later ******************************* */

/*
 * Function that searches for the received node via argument and returns
 * 1 if it has found and 0 if it has not found it.
 */
int search(NODEPTR ptr, char* value){
	return 0; //precisa retornar inteiro
	// NODEPTR currentPtr = ptr;
	// if(empty(ptr)){
	// 	return 0;
	// }
	// while(currentPtr != NULL && strcmp(&currentPtr->data, value)){
	// 	currentPtr = currentPtr->next;
	// }
	// if(currentPtr != NULL){
	// 	return 1;
	// }
	// else{
	// 	return 0;
	// }
}

/*
 * Function that returns 1 if the list is empty and 0 if it is not.
 */
int empty(NODEPTR ptr){
	return ptr == NULL;
}

/*
 * ?
 */
void insertContent(int pos){
	//TODO: needs to think a little bit of it and implement it
}

/*
 * Function that allows saving all the contents of the list to file.
 */
void saveToFile(char* name){
	//TODO: needs to think a little bit of it and implement it
}

/*
 * Function that allows a previously saved text file to be loaded into
 * the list. The user will be asked to enter the file name (with
 * extension).
 */
void loadFile(){
	//TODO: needs to think a little bit of it and implement it
}
