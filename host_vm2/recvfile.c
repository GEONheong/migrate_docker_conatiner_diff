#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

extern char *parsing();

int recvfile(int sock)
{
    FILE *file = NULL;
    char buf[BUFSIZ];

    size_t filesize, recvsize = 0;
    size_t totalrecvsize = 0;

    char *diff_path;
    char diff_command[1024];

    if ((file = fopen("ub2.tar", "wb")) == NULL)
    {
        perror("file open error");
    }

    recvsize = sizeof(buf);

    while (recvsize != 0)
    {
        memset(buf, '\0', sizeof(buf));
        recvsize = recv(sock, buf, sizeof(buf), 0);
        totalrecvsize += recvsize;
        printf("recvsize:%ld\n", totalrecvsize);
        fwrite(buf, sizeof(char), recvsize, file);
        if (recvsize < sizeof(buf))
        {
            break;
        }
    }

    fclose(file);

    system("docker run -itd --name ub2 ubuntu");
    system("docker inspect ub2 > info.json");
    diff_path = parsing();
    sprintf(diff_command, "sudo tar xvf ub2.tar -C %s", diff_path);
    system(diff_command);
    system("docker restart ub2");

    return 0;
}