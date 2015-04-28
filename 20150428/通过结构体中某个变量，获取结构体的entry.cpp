//比如如下的结构体，假如我们知道next成员的地址，如何知道该结构体的首地址？ 

typedef struct node
{
    int data;
    struct node *next;
}Node;

//以下宏定义出自linux原码的list.h

/**

* list_entry - get the struct for this entry

* @ptr: the &struct list_head pointer.

* @type: the type of the struct this is embedded in.

* @member: the name of the list_struct within the struct.

*/

#define list_entry(ptr, type, member) /

((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))  

//理解：比如我知道一个结构体n的next成员的地址 &n.next，带入到上面的宏，得出：
//((Node *)((char *)(&n.next)-(unsigned long)(&((Node *)0)->next))) 
//
//(char *)(&n.next)把n.next地址的指针转化为char*(字节计数)形式，便于减去后面的 unsigned long的类型，否则会有步长。
//(Node *)0，产生指向0地址的Node指针，&(((Node *)0)->next) 对它取next， 得出的地址就是next的偏移量，但此时这个偏移量的类型是 Node **
//把上一行产生的结果进行强制类型转化为unsigned long，得出的就是next的偏移量（字节计数） 

