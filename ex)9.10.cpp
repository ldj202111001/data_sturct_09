#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX_WORD_SIZE 40
#define MAX_MEANING_SIZE 200

typedef struct DicRecord {
    char word[MAX_WORD_SIZE];
    char meaning[MAX_MEANING_SIZE];
}Record;

typedef Record TElement;
typedef struct BinTrNode {
    TElement data;
    struct BinTrNode* left;
    struct BinTrNode* right;
}TNode;

TNode* root = NULL;

int is_empty_tree()
{ 
    return root = NULL; 
}

TNode* create_tree(TElement val, TNode* l, TNode* r)
{
    TNode
}

TNode* search(TNode* n, char* key)
{

}

void insert(TNode* r, TNode* n)
{

}

void delete_(TNode* parent, TNode* node)
{

}

TNode* search1(TNode* n, char* key)
{

}

void inorder(TNode* n)
{

}

TNode* insert_word(char* key, char* val)
{

}
void delete_word(char* key)
{

}

void search_word(char* word)
{

}

void search_meaning(char* m)
{

}

void print_dic()
{

}

int main()
{
    char command, word[80], meaning;

    /*
    do {
        printf("[사용법] i-추가 d-삭제 w-단어검색 m-의미검색 p-출력 q-종료 =>");
        command = getche();
        printf("\n");

        
        switch (command)
        {
        case 'i':
            printf(" > 삽입 단어: "); 
            gets(word);
            printf(" > 단어 의미: ");
            gets(meaning);
            insert_word(word, meaning);
            break;
         
        }
        
    }
    */
}

//8장 10번, 9장 8번