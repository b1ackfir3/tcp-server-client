#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{

	int sockfd;
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	
	if(sock==-1)
	{
		printf("socket creation failed");
	}
	else
	{
		printf("socket creation successful");

	}

	return 0;
}
