#!/bin/bash
ifconfig | grep "ether" | grep -v "autoselect" | sed -e 's/ether//' -e 's/^[[:space:]]*//' -e 's/[[:space:]]*$//'
