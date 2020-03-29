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
	struct Node *next;
} NODEPTR;

/*
 * Function headers
 */
void menu(NODEPTR **List); /* Main Menu */
void clear(int **start, int end);
void insertText(NODEPTR **start, char *value); /* Send the string got by the command line to the insertAtTheEnd function */
int editText(NODEPTR **start, char* value);
int print(NODEPTR *start);
int insertAtTheEnd(NODEPTR **start, char info); /* Receives a char and add it to the end of the list */
int initList(NODEPTR **start); /* Start an empty list */
int empty(NODEPTR **start); /* Checks if the list is empty */

/* ****************************************************************************************** */

int main(int argc, char* argv[]){
	NODEPTR *List;

	int erro = initList(&List);
	if(erro != 0){
		printf("Erro na inicialização!\n\n");
		exit(1);
	}	

	if(argc != 1){
		int args = argc-1, aux=1;
		while(args > 0){
			insertText(&List, argv[aux]);
			args--;
			aux++;
		}
		menu(&List);
	}
	else{
		printf("Incorrect usage\n\n");
	}			
	return 0;
}

/* ****************************************************************************************** */
int initList (NODEPTR **start){
	*start = NULL;
	return 0; /* sem erro */
}

/* ****************************************************************************************** */

/*
 * Allows the insertion of text in the list
 */
void insertText(NODEPTR **start, char *value){
	int i;
	int erro;
	for (i = 0; value[i] != '\0'; ++i){    
		erro = insertAtTheEnd(start, value[i]);
		if(erro > 0){
			printf("Erro ao inserir caracter.\n\n");
		}
	}
	char space = ' ';
	insertAtTheEnd(start, space);
}

/* ****************************************************************************************** */

/*
 * Function that prints a menu of options on the screen.
 */
void menu(NODEPTR **List){
	//TODO: needs to think a little bit of it and implement it
	int option = 0;
	int err = 0;
	do{
		printf("\n AWFUL TEXT EDITOR \n\n");
		printf("Main Menu:\n");
		printf("1 - Insert Text\n");
		printf("2 - Edit Text\n");
		printf("3 - Delete Text\n");
		printf("4 - Print Content\n\n");
		printf("5 - Check whether the list is empty or not\n\n");
		scanf("%d", &option);

		switch(option){
			case 1: 
				printf("Selecionou opcao %d\n\n", option);
				break;
			case 2: 
				printf("Selecionou opcao %d\n\n", option);
				break;
			case 3: 
				printf("Selecionou opcao %d\n\n", option);
				break;
			case 4: 
				printf("Selecionou opcao %d\n\n", option);
				print(*List);
				break;
			case 5: 
				printf("Selecionou opcao %d\n\n", option);
				err = empty(&List);
				if(err = 0){
					printf("There is content saved in the list\n\n");
				}else{
					printf("The list is empty!\n\n");
				}
				break;
			case 9: 
				printf("Selecionou opcao %d\n\n", option);
				return;
				break;
		}
		getchar(); /* limpa buffer */
	} while(option != 9);
}

/* ****************************************************************************************** */

/* Allows the list content to be printed on screen. */
int print(NODEPTR *start){
	if (start == NULL){
		printf("Lista vazia\n\n");
		return 1;  /* lista vazia */
	}
	printf("Content ::::>  ");
	while (start != NULL) {
		printf("%c", start->data);		
		start = start->next;
	}
	printf(" <::::\n\n");
	return 0;
}

/* ****************************************************************************************** */

/* clears the entire list, deallocating pointers and memory. */
void clear(int **start, int end){
	//TODO: needs to think a little bit of it and implement it
}

/* ****************************************************************************************** */

int editText(NODEPTR **start, char* value){
	return 0; //precisa retornar inteiro
	//TODO: Choose a position on the list and edit the content
}

/* ****************************************************************************************** */

int insertAtTheEnd(NODEPTR **start, char info){
	NODEPTR *no_novo, *percorre;

	/* Criacao do novo no - Aloca��o de memoria */
	no_novo = (NODEPTR *) malloc(sizeof(NODEPTR));
	no_novo->data = info;
	no_novo->next = NULL;

	if (*start == NULL){ /* lista vazia. */
		*start = no_novo;
	}
	else { /* lista nao vazia */
		percorre = *start;

		while (percorre->next != NULL){
			percorre = percorre->next;
		}
		percorre->next = no_novo;
	}

	return 0;
}

/* ******************************* To Be Implemented Later ******************************* */

/*
 * Function that searches for the received node via argument and returns
 * 1 if it has found and 0 if it has not found it.
 */
int search(NODEPTR **start, char* value){
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
int empty(NODEPTR **start){
	if(*start == NULL){
		return 1;
	}else{
		return 0;
	}
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
