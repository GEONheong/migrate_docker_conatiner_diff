#!/bin/sh

echo "Input controller port : "
read port1
echo "Input host port : "
read port2
echo -n '876700' | sudo -S ./host_controller/controller $port1 &
sleep 1
./host_vm1/vm1 $port1 $port2 &
sleep 1
