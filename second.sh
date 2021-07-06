#!/bin/sh

echo "Input controller port : "
read port1
echo "Input host port : "
read port2
echo -n '876700' | sudo -S ./host_vm2/vm2 $port1 $port2 &
sleep1
