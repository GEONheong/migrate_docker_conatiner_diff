CC =gcc

all: controller user vm1 vm2

controller:./host_controller/controller.c
	$(CC) -o ./host_controller/controller ./host_controller/controller.c

user: ./host_user/user.c
	$(CC) -o ./host_user/user ./host_user/user.c
	
vm1: ./host_vm1/vm1.c ./host_vm1/sendfile.c ./host_vm1/parsing.c ./parson/parson.c
	$(CC) -o ./host_vm1/vm1 ./host_vm1/vm1.c ./host_vm1/sendfile.c ./host_vm1/parsing.c ./parson/parson.c

vm2: ./host_vm2/vm2.c ./host_vm2/recvfile.c ./host_vm2/parsing.c ./parson/parson.c
	$(CC) -o ./host_vm2/vm2 ./host_vm2/vm2.c ./host_vm2/recvfile.c ./host_vm2/parsing.c ./parson/parson.c