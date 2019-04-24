#!/bin/sh
ldapsearch -Q uid="z*" | grep "cn: z*" | sort -rf | cut -c5-
