:loop
	
	:: Navigate to the directory you wish to push to GitHub
	::Change <path> as needed. Eg. C:\Users\rich\Desktop\Writings
	cd "C:\Users\Nam Tran\Desktop\Coding\C++\textbook\"
	
	::Initialize GitHub
	git init
	
	::Pull any external changes (maybe you deleted a file from your repo?)
    git pull
	
	::Add all files in the directory
    git branch -m Main
    git config --global user.email "tommyalbert899@gmail.com"
	git add .
	
	::Commit all changes with the message "auto push". 
	::Change as needed.
	git commit -m "auto push"
	
	::Push all changes to GitHub 
	git remote add origin "https://github.com/23132143252246477785366541342/textbook.git"
	git push -u origin Main
	::Alert user to script completion and relaunch.
	echo Complete. Relaunching...
	
	::Wait 300 seconds until going to the start of the loop.
	::Change as needed.
	TIMEOUT 5
	
::Restart from the top.	
goto loop
