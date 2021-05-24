#!/bin/sh

echo -e "Input controller port : c"
read port1
echo -e "Input host port : c"
read port2
echo -n '876700' | sudo -S ./host_vm2/vm2 $port1 $port2 &
sleep1
