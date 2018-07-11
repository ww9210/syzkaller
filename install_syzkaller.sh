#!/bin/sh
xxx=`pwd`
rm -rf ${GOPATH}/src/github.com/google/syzkaller
cp -r ~/tools/syzkaller ${GOPATH}/src/github.com/google/
cd ${GOPATH}/src/github.com/google/
make
cd ${xxx}
