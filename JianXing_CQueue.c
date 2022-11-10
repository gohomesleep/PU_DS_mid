#include <stdio.h>
#include <stdlib.h>

#define NUM 5           //�w�q���Φ�C�j�p
void Enqueue(int);      //�ŧiEnqueue�Ƶ{��
int Dequeue(void);      //�ŧiDequeue�Ƶ{��
void PrintQueue(void);  //�ŧi�C�L�ثe���Φ�C�����e���Ƶ{��
typedef struct queue {
  int CQueue[NUM];
  int Rear;
  int Front;
} Queue;
Queue qu;
int main(void)  //�D�{��
{
  int op=0,item;
  qu.Rear = 0;
  qu.Front = 0;
  printf("===============�{���y�z=======================\n");
    printf("= �{���W�١Gch4-3.2.c                        =\n");
    printf("= �{���ت��G���Φ�C�i��Enqueue�H��Dequeue   =\n"); 
    printf("==============================================\n");   
  while(1)
  {
    printf("==============================================\n");
    printf("=   1.Enqueue(�[�J)                          =\n");
    printf("=   2.Dequeue(�R��)                          =\n");
    printf("=   3.��ܥثe���Φ�C�����e                 =\n");
    printf("=   4.����                                   =\n");    
    printf("==============================================\n");
    printf("�п�J�A���ާ@�G");
    scanf("%d",&op);
    switch(op)
    {
      case 1: printf("�п�J�A�n�[�J�����:");
              scanf("%d",&item);
              Enqueue(item);        //�I�sEnqueue�Ƶ{��
              break;
      case 2: item = Dequeue( );   //�I�sDequeue�Ƶ{��
              if(item != -1)
               printf("%d �O�q���Φ�C�R�������\n",item);
              break;
      case 3: PrintQueue( );  //�I�s�C�L���Φ�C�����e���Ƶ{��
              break;
      case 4: printf("\n");       //����
              return (0);  
    }
  }
  system("pause");     //�ϵ{���Ȱ��b����e�����ڭ̬ݨ쵲�G
  return 0;
}
void Enqueue(int item)  //�[�Jitem���C�����Ƶ{��
{
  //qu.Rear = (qu.Rear+1)%NUM;
  if((qu.Rear+1)%NUM == qu.Front){
    printf("���Φ�C�O����!\n");
    // system("pause");
    // exit(1);
  } else
  { qu.Rear=(qu.Rear+1)%NUM; 
    qu.CQueue[qu.Rear] = item;
  }
}
int Dequeue(void)  //�q��C���R��item
{
  if(qu.Front == qu.Rear) {
    printf("���Φ�C�O�Ū�!\n");
    // system("pause");
    // exit(1);
    return -1;
  } else {
    qu.Front = (qu.Front+1)%NUM;
    return qu.CQueue[qu.Front];
  }  
}
void PrintQueue(void)   //��ܥثe���Φ�C�����e���Ƶ{��
{
  int i;
  printf("�ثe���Φ�C�����e�G");
  for(i=qu.Rear;i!=qu.Front;i=(i+NUM-1)%NUM)
    printf("%d ",qu.CQueue[i]);
  printf("\n");  
}
