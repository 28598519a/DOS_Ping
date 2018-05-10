#include <stdio.h> 
#include <pthread.h> 
	 
	void *thread_1(void* a) 
	{ 
	       system("ping -l 2950 -t 127.0.1.1");  //最高可以65500位元組   
	} 
 
/*
	void *thread_2(void* b)                        //新增指令用;主程式需增加對應值 
	{ 
	        system("ping -l 2950 -t 127.0.1.1");  
	} 
*/	 
int main(){ 
	    pthread_t th;                  //, th2 指令增加時加入 
        pthread_create(&th, NULL, thread_1, (void *)NULL);
        pthread_create(&th, NULL, thread_1, (void *)NULL); 
        //pthread_create(&th2, NULL, thread_2, (void *)NULL); 
        while(1){}                     //維持程式執行緒(不可包含創建執行緒；可參考附產物) 
	    return 0; 
	} 
