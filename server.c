#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<testing.h>

#include<netdb.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netinet.h>


	//welcome to the world of programming

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
	
	// assign the ip address and port

	return 0;
}
