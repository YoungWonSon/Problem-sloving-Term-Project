#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

struct DATA {
	int tag;
	int year;
	int month;
	int day;
	char answer[5];
	char name[25];
	int age;
	char university[30];
	char job[25];
} data[MAX];

struct node {
	int tag;
	int year;
	int month;
	int day;
	char answer[5];
	char name[25];
	int age;
	char university[30];
	char job[25];
	struct node* next;
};

struct node* createNewNode(struct DATA);

int main(void) {
	FILE* inFile;
	int i = 0;

	inFile = fopen("c:\\test\\registration_data.txt", "r");
	if (inFile == NULL)
		printf("\nFile Could Not Be Opened");
	else {
		while (fscanf(inFile, "%d/%d-%d-%d/%[^/]/%[^/]/%d/%[^/]/%s", &data[i].tag, &data[i].year, &data[i].month, &data[i].day, data[i].answer, data[i].name, &data[i].age, data[i].university, data[i].job) != EOF) {
			//printf("%d/%d-%d-%d/%s/%s/%d/%s/%s\n", data[i].tag, data[i].year, data[i].month, data[i].day, data[i].answer, data[i].name, data[i].age, data[i].university, data[i].job);
			i++;
		}
	}

	struct node* node0 = createNewNode(data[0]);
	struct node* node1 = createNewNode(data[1]);
	struct node* node2 = createNewNode(data[2]);
	struct node* node3 = createNewNode(data[3]);
	struct node* node4 = createNewNode(data[4]);
	struct node* node5 = createNewNode(data[5]);
	struct node* node6 = createNewNode(data[6]);
	struct node* node7 = createNewNode(data[7]);
	struct node* node8 = createNewNode(data[8]);
	struct node* node9 = createNewNode(data[9]);
	struct node* node10 = createNewNode(data[10]);
	struct node* node11 = createNewNode(data[11]);
	struct node* node12 = createNewNode(data[12]);
	struct node* node13 = createNewNode(data[13]);
	struct node* node14 = createNewNode(data[14]);
	struct node* node15 = createNewNode(data[15]);
	struct node* node16 = createNewNode(data[16]);
	struct node* node17 = createNewNode(data[17]);
	struct node* node18 = createNewNode(data[18]);
	struct node* node19 = createNewNode(data[19]);
	struct node* node20 = createNewNode(data[20]);
	struct node* node21 = createNewNode(data[21]);
	struct node* node22 = createNewNode(data[22]);
	struct node* node23 = createNewNode(data[23]);
	struct node* node24 = createNewNode(data[24]);
	struct node* node25 = createNewNode(data[25]);
	struct node* node26 = createNewNode(data[26]);
	struct node* node27 = createNewNode(data[27]);
	struct node* node28 = createNewNode(data[28]);
	struct node* node29 = createNewNode(data[29]);

	struct node* head = node0;
	node0->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = node6;
	node6->next = node7;
	node7->next = node8;
	node8->next = node9;
	node9->next = node10;
	node10->next = node11;
	node11->next = node12;
	node12->next = node13;
	node13->next = node14;
	node14->next = node15;
	node15->next = node16;
	node16->next = node17;
	node17->next = node18;
	node18->next = node19;
	node19->next = node20;
	node20->next = node21;
	node21->next = node22;
	node22->next = node23;
	node23->next = node24;
	node24->next = node25;
	node25->next = node26;
	node26->next = node27;
	node27->next = node28;
	node28->next = node29;
	
	fclose(inFile);
	free(head);
}

struct node* createNewNode(struct DATA original) {
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->tag = original.tag;
	newNode->year = original.year;
	newNode->month = original.month;
	newNode->day = original.day;
	strcpy(newNode->answer, original.answer);
	strcpy(newNode->name, original.name);
	newNode->age = original.age;
	strcpy(newNode->university, original.university);
	strcpy(newNode->job, original.job);
	newNode->next = NULL;

	printf("%d/%d-%d-%d/%s/%s/%d/%s/%s\n", newNode->tag, newNode->year, newNode->month, newNode->day, newNode->answer, newNode->name, newNode->age, newNode->university, newNode->job);

	return newNode;
}