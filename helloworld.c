#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// lets make some confilict
#include<iostream>


#include<netdb.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netinet.h>

#define MAX 80
#define PORT 8080

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
