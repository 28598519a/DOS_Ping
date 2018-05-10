#include<windows.h>

int main(){
	for(int i=0;i<100;i++){
		system("start DDOS_T01.exe");  //不能一次開，否則瞬間CPU值過高
		Sleep(100);                     //降低瞬間值 
	}
}
