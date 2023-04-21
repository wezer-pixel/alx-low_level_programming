#!/bin/bash

#get commit message from user
read -p "Enter commit message: " message

#if no message provided, generate reando message
if [ -z "$message" ]; then
	message=$(curl -s https://api.kanye.rest | jq -r '.quote')
fi

#Add all files, commit with message, and pusg changes
git add .
git commit -m "$message"
git push
