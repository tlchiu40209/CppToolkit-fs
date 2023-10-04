# Filesystem Utility (FS) for C++

wayne::FS is a bunch of tools related to file system operation.

**Please note: This library is still under alpha stage and not tested properly yet.**

**It might be buggy.**

It might take a while for me to provide a full list of function usages.



Access these functions by adding namespace:

<code>wayne::FS</code>

This utility also relies on the following libraries

- <code>wayne::IO::</code>, [Click Here](https://github.com/tlchiu40209/CppToolkit-io)

- <code>wayne::strUtil::</code>, [Click Here](https://github.com/tlchiu40209/CppToolkit-strUtil)

This utility has some limitation due to the following:

- This library is written under the C++ 17 / 2a standard. If you tried to compile the library with compilers that do not have built-in support for the above standard, it may cause problems and errors.

- Some functions utilized in <code>wayne::IO::</code> may require to access built-in functions that might be exclusively available to <code>gcc</code>. This may result in compile errors when using on other compilers than <code>gcc</code>.



## Usage

#### Directory Operation

- <code>createDirectory(std::string/char* dirPath, std::string/char* writeType)</code>

- <code>removeDirectory(std::string/char* dirPath)</code>

- <code>copyDirectory(std::string/char* sourcePath, std::string/char* destPath, std::string/char* writeType)</code>

- <code>moveDirectory(std::string/char* sourcePath, std::string/char* destPath, std::string/char* writeType)</code>

- <code>isDirectory(std::string/char* dirPath)</code>

- <code>isDirectoryExist(std::string/char* dirPath)</code>

- <code>getDirectorySize(std::string/char* dirPath)</code>

- <code>getStringListDir(std::string/char* dirPath)</code>

- <code>getCStringListDir(std::string/char* dirPath)</code>

- <code>getStringListDirStatic(std::string/char* dirPath)</code>

- <code>getCStringListDirStatic(std::string/char* dirPath)</code>



#### File Operation

- <code>createFile(std::string/char* filePath, std::string/char* writeType)</code>

- <code>removeFile(std::string/char* filePath)</code>

- <code>copyFile(std::string/char* sourcePath, std::string/char* destPath, std::string/char* writeType)</code>

- <code>moveFile(std::string/char* sourcePath, std::string/char* destPath, std::string/char* writeType)</code>

- <code>isFile(std::string/char* filePath)</code>

- <code>isFileExist(std::string/char* filePath)</code>

- <code>getFileSize(std::string/char* filePath)</code>

- <code>getStringContent(std::string/char* filePath, std::string/char* readType, int amountOfLines)</code>

- <code>getCStringContent(std::string/char* filePath, std::string/char* readType, int amountOfLines)</code>

- <code>getByteContent(std::string/char* filePath, std::string/char* readType, int amountOfBytes)</code>

- <code>getStringContentStatic(std::string/char* filePath, std::string/char* readType, int amountOfLines)</code>

- <code>getCStringContentStatic(std::string/char* filePath, std::string/char* readType, int amountOfLines)</code>

- <code>getByteContentStatic(std::string/char* filePath, std::string/char* readType, int amountOfBytes)</code>

- <code>writeStringContent(std::string/char* filePath, std::vector\<std::string\>fileContent, std::string/char* writeType)</code>

- <code>writeCStringContent(std::string/char* filePath, std::vector\<char\*\>fileContent, std::string/char* writeType)</code>

- <code>writeByteContent(std::string/char* filePath, std::vector\<char\>fileContent, std::string/char* writeType)</code>

- <code>writeStringContentStatic(std::string/char* filePath, std::string* fileContent, int fileLines, std::string/char* writeType)</code>

- <code>writeCStringContentStatic(std::string/char* filePath, char\*\*  fileContent, int fileLines, std::string/char* writeType)</code>

- <code>writeByteContentStatic(std::string/char* filePath, char* fileContent, int fileBytes, std::string/char* writeType)</code>


