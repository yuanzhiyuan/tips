//�������µĽṹ�壬��������֪��next��Ա�ĵ�ַ�����֪���ýṹ����׵�ַ�� 

typedef struct node
{
    int data;
    struct node *next;
}Node;

//���º궨�����linuxԭ���list.h

/**

* list_entry - get the struct for this entry

* @ptr: the &struct list_head pointer.

* @type: the type of the struct this is embedded in.

* @member: the name of the list_struct within the struct.

*/

#define list_entry(ptr, type, member) /

((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))  

//��⣺������֪��һ���ṹ��n��next��Ա�ĵ�ַ &n.next�����뵽����ĺ꣬�ó���
//((Node *)((char *)(&n.next)-(unsigned long)(&((Node *)0)->next))) 
//
//(char *)(&n.next)��n.next��ַ��ָ��ת��Ϊchar*(�ֽڼ���)��ʽ�����ڼ�ȥ����� unsigned long�����ͣ�������в�����
//(Node *)0������ָ��0��ַ��Nodeָ�룬&(((Node *)0)->next) ����ȡnext�� �ó��ĵ�ַ����next��ƫ����������ʱ���ƫ������������ Node **
//����һ�в����Ľ������ǿ������ת��Ϊunsigned long���ó��ľ���next��ƫ�������ֽڼ����� 

