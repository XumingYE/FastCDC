# FastCDC
C Implemetation of FastCDC for chunking

FastCDC is an advanced chunking algorithm which has a better speed than Rabin CDC.

### Usage
Compile:
`g++ -I./ -o main main.cpp fastcdc/fastcdc.c -lcrypto`
Execute:
`./main`

### Notification

**This repository that mainly sources its content from https://github.com/wxiacode/FastCDC-c. However, the original code contains numerous issues:**

**For example, files smaller than 1GB are treated as 1GB in size, which leads to illegal memory access during chunking, even though no error is reported.**

**Additionally, the original repository lacks integrity checks and does not save the content of data chunks. We have added these features in our repository.**


### Dependency

- openssl
- zlib
- uthash
