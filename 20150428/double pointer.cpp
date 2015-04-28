#include <iostream>
#include <stdio.h>
//using namespace std;
//struct node{
//	struct node* next;
//	int val;
//};
//
//int main(){
//	node n1{NULL,1};
//	node n2{&n1,2};
//	node n3{&n2,3};
//	node head{&n3,4};
//	node** dummy = &head.next;
//	cout << "|sizeof(node)| "<<sizeof(node) << endl;
//	cout << "|head |" << &head << endl;
//	cout << "|head.next |" << &head.next << endl;
//	cout << "|*dummy |" << *dummy << endl;
//	cout << "|**dummy |" << *((node*)*dummy) << endl;
////	cout << "|***dummy |" << ***dummy << endl; 
//	return 0;
//}


typedef struct list_s{
	struct list_s * next;
	int a;
	int b;
} list_t;

main()
{
	list_t lA, lB, lC, lD;
	list_t ** phead = &lA.next;
	lA.next = &lB;
	lA.a = 11;
	lA.b = 12;
	lB.next = &lC;
	lB.a = 21;
	lB.b = 22;
	lC.next = &lD;
	lC.a = 31;
	lC.b = 32;
	lD.next = NULL;
	lD.a = 41;
	lD.b = 42;
	printf("%d\n", ((list_t *)phead)->a);
	printf("%d\n", (**(list_t**)phead).a);
	printf("%d\n", (***(list_t***)phead).a);
	printf("%d\n", (****(list_t****)phead).a);
	printf("%d\n", ((list_t *)phead)->b);
	printf("%d\n", (**(list_t**)phead).b);
	printf("%d\n", (***(list_t***)phead).b);
	printf("%d\n", (****(list_t****)phead).b);
}
