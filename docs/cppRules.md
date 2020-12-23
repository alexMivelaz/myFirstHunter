# where I create a file

If your file is an include, you have to put it on the include folder. Don't be afraid to create subfolder.
If your file is a file where you contains config, you have to put it in the config folder. Don't be afraid to create subfolder.
If your file is a test file, you have to put it in the test folder. Don't be afraid to create subfolder. If your test file use a config file, put the config file in a folder crate in the test folder and name it "testFileNameConfig/".
If your file is a asset, you have to put it on the asset folder. Don't be afraid to create subfolder.
If your file is a source file, you have to put it on the src folder. Don't be afraid to create subfolder.

# Name your file/folder

To name your file/folder, always use a english name without number and follow the camel case.
This is a link to the description of the Camel case: [https://techterms.com/definition/camelcase](https://techterms.com/definition/camelcase)
Make sure that your file/folder name is understanble and make a first description of what your file/folder do/contains.
Exempla: the main.ccp only contains the main() function and the src/SFMLGLib only contains the files who define the SFML graphical lib function.

# Headers

Always add a header at your files. For all the lines, you have to start with "** " except for the first and the last line.
The first line you just put "/*\n".
In second line, you write the name of the project, the year of the project, ":", and who write it. If a name is already write, just add yours next to it.
In third line , you write the name of the file.
In the fourth line, you write "file description:".
After you describe all the function in the file, one file by line.
In the last line, you put "*/\n"
If you are in the Makefile or in any language that use "#" to comment, put "##" instead of "/*, **, */".

# The function variable

You can give a function only up to four variables as argument.
The variable, like the branch, like the folder and like the file, follow the Camel case and don't have number in there name.
If you use one iterator in the function, you can name it "i".
An argument can't be named "i".
If you use multiple iterator, named there "i" followed by what they iterate.
Exemple: iterator for the lenght of a string is named iLenght.

# The return of a function

A function have to return a variable and only a variable.
You can't return a function return.

# Some numbers for the function

You can create only up to four variable in each function.
Your function can do up to twentyth line.
Each line can do up to one undread colunms except the variable that can reach one undread twentyth colunms.
Your function can go up to two indentation and can't have double loop.

# How to right your function

You have to add a space after this sign: ",", "+", "=", ">", "<", "-", "|", "&", ";".
If you have an operation, you have to add a space before the operator sign.

# About the namespace

If you create a lib, you have to create the namespace named like the lib.
Don't be afraid to create subnamespace