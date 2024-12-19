List MakeEmpty()
{
	List L;
	L = (List)malloc(sizeof(struct LNode));
	L->last=-1;
	return 0;
}
typedef struct LNode * List//顺序存储 
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
		printf("位置不合法");
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
		printf("位置不正确")；
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
//线性表链式存储 
typedef struct LNode *List;
struct LNode
{
	element Data;
	list next;
}
list L;
int Length(List PrtL)//求表长 
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
List FindKth(int k,List L)//序号查找； 
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
List Find(elementType k,List L)//按值查找； 
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
		printf("该结点不存在"；)
	}
	s = p->next;
	p->next=s->next;
	free(s);
	return L;
}
//堆栈的顺式表示 
#define MAXIZE 10
typedef struct SNode *strack;
struct SNode
{
	elementtype Data[MAXIZE];
	int top;
 } 
 //入栈
 void push(strack PtrS,ElementType x)
 {
 	if(PtrS->==MAXIZE-1)
 	{
 		printf("栈满")；
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
		printf("栈空")；
		return; 
	  }
	else
	{
		PtrS->Data[(PrtS->top)++]=x;
		return;
	}
}
  //用一个数组实现堆栈
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
void push(strack PtrS,ElementType item,int tag)//入栈 
{
	if(PtrS->top2-PtrS->top1==1)
	{
		printf("栈满")；
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
ElementType pop(strack PtrS,ElementTpye item,int tag)//出栈 
{
	if(tag==1)
	{
		if(PtrS->top1==-1)
		{
			printf("栈空");
			return NULL;
		}
		else
		return PtrS->Data[(PtrS->top1)--]=item;
	
	}
	if(tag==2)
	{
		if(PtrS->top2==MAXIZE)
	{
		printf("栈空");
		return NULL; 
	}
		else
		return PtrS->Data[(PtrS->top2)++]=item;
	}
}
//堆栈的链式表示
typedef struct SNode *strack;
struct SNode 
{
	ElementType Data;
	struct SNode * Next;
 } *S;
strack CreatStrack()//构建堆栈的头结点 
{
	strack S;
	S=(strack)malloc(sizeof(struct SNode));
	S->Next=NULL;
	return S;
}
int IsEmpty(strack S)//判断堆栈是否为空 
{
	return(S->Next==NULL);
}
void push(ElementType item,strack S)//压栈先申请一块临时的结点存数据，再插入头结点。 
{
	strack TmpCell;
	TmpCell=(struct SNode*)malloc(sizeof(struct SNode));//申请
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
		printf("堆栈空"); 
		return NULL;
	}
	FirstCell=(struct SNode *)malloc(sizeof(struct SNode));
	FirstCell=S->Next;
	S->Next=FirstCell->Next;
	TopElem=FirstCell->Data;
	free(FirstCell);
	return TopElem;
}
