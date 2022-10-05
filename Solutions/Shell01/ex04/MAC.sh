#!/bin/bash
ifconfig | grep -w ether | tr -d '\t' | tr -d ' ' | cut -c 6-
