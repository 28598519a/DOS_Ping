#include <stdio.h> 
#include <windows.h>
#include <pthread.h> 
	 
	void *thread_1(void* a) 
	{ 
	       system("ping -l 2950 -t 127.0.1.1");  //�̰��i�H65500�줸��   
	} 
 
/*
	void *thread_2(void* b)                        //�s�W���O��;�D�{���ݼW�[������ 
	{ 
	        system("ping -l 2950 -t 127.0.1.1");  
	} 
*/	 
int main(){ 
	    pthread_t th;                  //, th2 ���O�W�[�ɥ[�J 
	for(int pl=0;pl<320;pl++){         //�@���}��320�u�{ 
        pthread_create(&th, NULL, thread_1, (void *)NULL); 
        //pthread_create(&th2, NULL, thread_2, (void *)NULL); 
        Sleep(30);                     //���C������(�C0.03��W�[1�u�{) 
    }
        while(1){}                     //�����{�������(���i�]�t�Ыذ����) 
	    return 0; 
	} 
