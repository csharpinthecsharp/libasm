#!bin/bash

cd ../ && git clone https://github.com/Tripouille/libasmTester.git
cd libasmTester
make
make fclean
cd ../ && rm -rf libasmTester
