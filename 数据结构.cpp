List MakeEmpty()
{
	List L;
	L = (List)malloc(sizeof(struct LNode));
	L->last=-1;
	return 0;
}
typedef struct LNode * List//˳��洢 
struct LNode
{
	element Data[MAXIZIE];
	int Last;
}
struct L;
List Prtl;
int find(element x,list prtl)
{
	int i=0;
	while(i<=prtl->last&&prtl->data[i]!=x)
	{
		i++;
	}
	if(i>prtl->last)
	 return -1;
	else
	 return i;
}
void insert(element x,int i,list prtl)
{
	if(prtl->last==MAXIZE-1)
	 printf("");
	return;
	if(i<1||i>prtl->last+2)
	{
		printf("λ�ò��Ϸ�");
		return 0; 
	}
	for(j=prtl->last;j>i-1;j--)
	{
		prtl->Data[j+1]=prtl->Data[j];
	}
	prtl->last++;
	prtl->Data[i-1]=x;
	return;
}
void delect(element x,int i,list prtl)
{
	int i;
	if(i<1||i>last+1)
	{
		printf("λ�ò���ȷ")��
		return; 
	}
	for(j=i;j<=prtl->last-1;j++)
	{
		prtl->Data[j-1]=prtl->Data[j];
	}
	prtl->last--;
	prtl->Data[i-1]=x;
	return;
}
//���Ա���ʽ�洢 
typedef struct LNode *List;
struct LNode
{
	element Data;
	list next;
}
list L;
int Length(List PrtL)//��� 
{
	List p=PrtL;
	int cnt=0;
	while(p)
	{
		p=p->next;
		cnt++;
	}
	return cnt;
}
List FindKth(int k,List L)//��Ų��ң� 
{
	List p=L;
	i = 0;
	while(p!=NULL&&i<k)
	{
		p=p->next;
		i++;
	}
	if(i==k)
	 return p;
	else
	 return NULL;
}
List Find(elementType k,List L)//��ֵ���ң� 
{
	List p=L;
	while(p!=NULL&&p->Data!=k)
	{
		p=p->next;
	}
	return p;
}
List insert(elmentTpye x,int i,List L)
{
	List p,s;
	if(i==1)
	{
		s=(List)malloc(sizeof(struct LNode));
		s->next=L;
		s->Data=x;
	}
	p = FindKth(i,List L);
	if(p==NULL)
	{
		printf("wrong\n");
		return NULL;
	}
	else
	{
		s = (List)malloc(sizeof(struct LNode));
		s->Data = x;
		s->next = p->next;
		p->next = s;
		return L;
	}
}
List delect(int i,List L)
{
	List p,s;
	if(i==1)
	{
		s = L;
		if(L!=NULL)
		 L=L->next;
		else
		 return NULL;
		free(s);
		return L;
	}
	p=FindKth(i-1;List L);
	if(p==NULL)
	{
		printf("�ý�㲻����"��)
	}
	s = p->next;
	p->next=s->next;
	free(s);
	return L;
}
//��ջ��˳ʽ��ʾ 
#define MAXIZE 10
typedef struct SNode *strack;
struct SNode
{
	elementtype Data[MAXIZE];
	int top;
 } 
 //��ջ
 void push(strack PtrS,ElementType x)
 {
 	if(PtrS->==MAXIZE-1)
 	{
 		printf("ջ��")��
		return; 
	 }
	 else
	 {
	 	PtrS->Data[==(PtrS->top)]=x;
	 	return 0;
	 }
  } 
void pop(strack PrtS,ElementTpye)
{
	if(PtrS->top==-1)
	{
		printf("ջ��")��
		return; 
	  }
	else
	{
		PtrS->Data[(PrtS->top)++]=x;
		return;
	}
}
  //��һ������ʵ�ֶ�ջ
  #define MAXIZE 100
  typedef struct SNode *strack;
  struct SNode
  {
  	ElememtType Data[MAXIZE];
  	int top1;
  	int top2;
   } S;
   S.top1=-1;
   S.top2=MAXIZE;
void push(strack PtrS,ElementType item,int tag)//��ջ 
{
	if(PtrS->top2-PtrS->top1==1)
	{
		printf("ջ��")��
		return ; 
	}
	if(tag==1)
	{
		PtrS->Data[++(PtrS->top1)]=item; 
	}
	if(tag==2)
	{
		PtrS->Data[--(PtrS->top2)];
	}
}
ElementType pop(strack PtrS,ElementTpye item,int tag)//��ջ 
{
	if(tag==1)
	{
		if(PtrS->top1==-1)
		{
			printf("ջ��");
			return NULL;
		}
		else
		return PtrS->Data[(PtrS->top1)--]=item;
	
	}
	if(tag==2)
	{
		if(PtrS->top2==MAXIZE)
	{
		printf("ջ��");
		return NULL; 
	}
		else
		return PtrS->Data[(PtrS->top2)++]=item;
	}
}
//��ջ����ʽ��ʾ
typedef struct SNode *strack;
struct SNode 
{
	ElementType Data;
	struct SNode * Next;
 } *S;
strack CreatStrack()//������ջ��ͷ��� 
{
	strack S;
	S=(strack)malloc(sizeof(struct SNode));
	S->Next=NULL;
	return S;
}
int IsEmpty(strack S)//�ж϶�ջ�Ƿ�Ϊ�� 
{
	return(S->Next==NULL);
}
void push(ElementType item,strack S)//ѹջ������һ����ʱ�Ľ������ݣ��ٲ���ͷ��㡣 
{
	strack TmpCell;
	TmpCell=(struct SNode*)malloc(sizeof(struct SNode));//����
	TmpCell->Data=item;
	TmpCell->Next=S->Next;
	S->Next=TmpCell; 
}
ElementType pop(strack S)
{
	strack FirstCell;
	Element TopElem;
	if(IsEmpty(S))
	{
		printf("��ջ��"); 
		return NULL;
	}
	FirstCell=(struct SNode *)malloc(sizeof(struct SNode));
	FirstCell=S->Next;
	S->Next=FirstCell->Next;
	TopElem=FirstCell->Data;
	free(FirstCell);
	return TopElem;
}
