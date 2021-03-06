#!/usr/bin/env bash

out=./misc.img

pad()
{
	busybox dd if=/dev/zero bs=$1 count=1
}

echo_pad()
{
	echo -n "$1" | busybox dd bs=$2 conv=sync;
}

{
	pad 16k
	echo_pad boot-recovery 8k
	echo_pad gentoo-linux 8k
	pad 16k
} > $out
