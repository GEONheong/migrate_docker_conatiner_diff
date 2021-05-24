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

int sendfile(int sock)
{
    FILE *file = NULL;
    char buf[BUFSIZ];

    size_t filesize, sendsize = 0;
    int file_pointer_size;

    char *diff_path;
    char diff_command[1024];

    system("docker inspect ub > info.json");
    diff_path = parsing();
    sprintf(diff_command, "sudo tar cvf ub2.tar -C %s .", diff_path);
    system(diff_command);
    system("sudo chmod 777 ub2.tar");

    char *line;

    if ((file = fopen("ub2.tar", "rb")) == NULL)
    {
        perror("file open error");
    }

    fseek(file, 0, SEEK_END);
    filesize = ftell(file);
    printf("filesize :%ld\n", filesize);
    fseek(file, 0, SEEK_SET);

    while (sendsize != filesize)
    {
        memset(buf, '\0', sizeof(buf));
        file_pointer_size = fread(buf, sizeof(char), sizeof(buf), file);
        sendsize += file_pointer_size;
        send(sock, buf, file_pointer_size, 0);
        printf("sendsize:%ld\n", sendsize);
    }

    sleep(2);

    fclose(file);

    //system("sudo rm nx2.tar");

    return 0;
}