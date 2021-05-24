#!/bin/sh

echo -e "Input controller port : c"
read port1
echo -e "Input host port : c"
read port2
echo -n '876700' | sudo -S ./host_controller/controller $port1 &
sleep 1
./host_vm1/vm1 $port1 $port2 &
sleep 1
