#!/bin/bash

# this macro exists just to mkae pushing easier.
# if reusing, change accordingly
REPO_PATH="../42_piscine/$1"

git remote add $1 "$REPO_PATH"
git fetch $1
git subtree add --prefix=$1 $1 master --squash

# test message.
echo "$1 || $REPO_PATH."