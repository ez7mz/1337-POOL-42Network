#!/bin/bash
find . -type f -iname "*.sh" | xargs basename -s .sh
