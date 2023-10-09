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
  
  - Creates an empty directory at given absolute path <code>dirPath</code>
  
  - <code>writeType</code> is an optional parameter that regulates the behavior of <code>createDirectory</code>, here is the list of supported <code>writeType</code>
    
    - Default - <code>"d"</code>: Default behavior of <code>createDirectory</code> if no <code>writeType</code> were given. In this function, it is redirected to <code>"s"</code>
    
    - Safe - <code>"s"</code>: If the given path <code>dirPath</code> existed, no action will be taken.
    
    - Overwrite - <code>"o"</code>: If the given path <code>dirPath</code> existed, it will delete everything and remove the directory of <code>dirPath</code>, and create a new directory at the same place.

- <code>removeDirectory(std::string/char* dirPath)</code>
  
  - Removes the directory at given absolute path <code>dirPath</code>

- <code>copyDirectory(std::string/char* sourcePath, std::string/char* destPath, std::string/char* writeType)</code>
  
  - Copies the directory (including all files and subdirectories) at given absolute path <code>dirPath</code> to the destination absolute path <code>destPath</code>
  
  - <code>writeType</code> is an optional parameter that regulates the behavior of <code>copyDirectory</code>, here is the list of supported <code>writeType</code>
    
    - Default - <code>"d"</code>: Default behavior of <code>copyDirectory</code> if no <code>writeType</code> were given. In this function, it is redirected to <code>"s"</code>
    
    - Mirror - <code>"m"</code>: This will make sure that every file and directory in <code>destPath</code> is identical as the <code>sourcePath</code>. All files and directories in the <code>destPath</code> will be removed.
    
    - Overwrite - <code>"o"</code> : If the <code>destPath</code> contains any files or directories that have the same name of files or directories in <code>sourcePath</code>, they will be overwritten. Files that does not exist in the <code>destPath</code> will be copied, and files do not share same names as files in the <code>sourcePath</code> will be untouched.
    
    - Safe -  <code>"s"</code>: If the <code>destPath</code> existed, no action will be taken.

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

- <code>getStringContent(std::string/char* filePath, int amountOfLines, std::string/char* readType)</code>

- <code>getCStringContent(std::string/char* filePath, int amountOfLines, std::string/char* readType)</code>

- <code>getByteContent(std::string/char* filePath, int amountOfBytes, std::string/char* readType)</code>

- <code>getStringContentStatic(std::string/char* filePath, int amountOfLines, std::string/char* readType)</code>

- <code>getCStringContentStatic(std::string/char* filePath, int amountOfLines, std::string/char* readType)</code>

- <code>getByteContentStatic(std::string/char* filePath, int amountOfBytes, std::string/char* readType)</code>

- <code>writeStringContent(std::string/char* filePath, std::vector\<std::string\>fileContent, std::string/char* writeType)</code>

- <code>writeCStringContent(std::string/char* filePath, std::vector\<char\*\>fileContent, std::string/char* writeType)</code>

- <code>writeByteContent(std::string/char* filePath, std::vector\<char\>fileContent, std::string/char* writeType)</code>

- <code>writeStringContentStatic(std::string/char* filePath, std::string* fileContent, int fileLines, std::string/char* writeType)</code>

- <code>writeCStringContentStatic(std::string/char* filePath, char\*\*  fileContent, int fileLines, std::string/char* writeType)</code>

- <code>writeByteContentStatic(std::string/char* filePath, char* fileContent, int fileBytes, std::string/char* writeType)</code>
