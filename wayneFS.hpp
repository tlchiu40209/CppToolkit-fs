/*
 * wayneFS.hpp
 *
 *  Created on: 2023年10月3日
 *      Author: weich
 */

#ifndef LIB_WAYNEFS_HPP_
#define LIB_WAYNEFS_HPP_

#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include "wayneIO.hpp"

namespace wayne {
	namespace FS {
		bool createDirectory(std::string dirPath, std::string writeType = "d");
		bool createDirectory(const char* dirPath, std::string writeType = "d");
		bool createDirectory(char* dirPath, std::string writeType = "d");

		bool removeDirectory(std::string dirPath);
		bool removeDirectory(const char* dirPath);
		bool removeDirectory(char* dirPath);

		bool copyDirectory(std::string sourcePath, std::string destPath, std::string writeType = "d");
		bool copyDirectory(const char* sourcePath, const char* destPath, const char* writeType = "d");
		bool copyDirectory(char* sourcePath, char* destPath, char* writeType = "d");

		bool moveDirectory(std::string sourcePath, std::string destPath, std::string writeType = "d");
		bool moveDirectory(const char* sourcePath, const char* destPath, const char* writeType = "d");
		bool moveDirectory(char* sourcePath, char* destPath, char* writeType = "d");

		bool createFile(std::string filePath, std::string writeType = "d");
		bool createFile(const char* filePath, const char* writeType = "d");
		bool createFile(char* filePath, char* writeType = "d");

		bool removeFile(std::string filePath);
		bool removeFile(const char* filePath);
		bool removeFile(char* filePath);

		bool copyFile(std::string sourcePath, std::string destPath, std::string writeType = "d");
		bool copyFile(const char* sourcePath, const char* destPath, const char* writeType = "d");
		bool copyFile(char* sourcePath, char* destPath, char* writeType = "d");

		bool moveFile(std::string sourcePath, std::string destPath, std::string writeType = "d");
		bool moveFile(const char* sourcePath, const char* destPath, const char* writeType = "d");
		bool moveFile(char* sourcePath, char* destPath, char* writeType = "d");

		bool isFileExist(std::string filePath);
		bool isFileExist(const char* filePath);
		bool isFileExist(char* filePath);

		bool isFile(std::string filePath);
		bool isFile(const char* filePath);
		bool isFile(char* filePath);

		bool isDirectoryExist(std::string dirPath);
		bool isDirectoryExist(const char* dirPath);
		bool isDirectoryExist(char* dirPath);

		bool isDirectory(std::string dirPath);
		bool isDirectory(const char* dirPath);
		bool isDirectory(char* dirPath);

		int getDirectorySize(std::string dirPath);
		int getDirectorySize(const char* dirPath);
		int getDirectorySize(char* dirPath);

		int getFileSize(std::string filePath);
		int getFileSize(const char* filePath);
		int getFileSize(char* filePath);

		std::vector<std::string> getStringListDir(std::string dirPath);
		std::vector<std::string> getStringListDir(const char* dirPath);
		std::vector<std::string> getStringListDir(char* dirPath);

		std::vector<char*> getCStringListDir(std::string dirPath);
		std::vector<char*> getCStringListDir(const char* dirPath);
		std::vector<char*> getCStringListDir(char* dirPath);

		std::string* getStringListDirStatic(std::string dirPath);
		std::string* getStringListDirStatic(const char* dirPath);
		std::string* getStringListDirStatic(char* dirPath);

		char** getCStringListDirStatic(std::string dirPath);
		char** getCStringListDirStatic(const char* dirPath);
		char** getCStringListDirStatic(char* dirPath);

		std::vector<std::string> getStringContent(std::string filePath, std::string readType = "d", int amountOfLines);
		std::vector<std::string> getStringContent(const char* filePath, const char* readType = "d", int amountOfLines);
		std::vector<std::string> getStringContent(char* filePath, char* readType = "d", int amountOfLines);

		std::vector<char*> getCStringContent(std::string filePath, std::string readType = "d", int amountOfLines);
		std::vector<char*> getCStringContent(const char* filePath, const char* readType = "d", int amountOfLines);
		std::vector<char*> getCStringContent(char* filePath, char* readType = "d", int amountOfLines);

		std::vector<char> getByteContent(std::string filePath, std::string readType = "d", int amountOfBytes);
		std::vector<char> getByteContent(const char* filePath, const char* readType = "d", int amountOfBytes);
		std::vector<char> getByteContent(char* filePath, char* readType = "d", int amountOfBytes);

		std::string* getStringContentStatic(std::string filePath, std::string readType = "d", int amountOfLines);
		std::string* getStringContentStatic(const char* filePath, const char* readType = "d", int amountOfLines);
		std::string* getStringContentStatic(char* filePath, char* readtype = "d", int amountOfLines);

		char** getCStringContentStatic(std::string filePath, std::string readType = "d", int amountOfLines);
		char** getCStringContentStatic(const char* filePath, const char* readType = "d", int amountOfLines);
		char** getCStringContentStatic(char* filePath, char* readType = "d", int amountOfLines);

		char* getByteContentStatic(std::string filePath, std::string readType = "d", int amountOfBytes);
		char* getByteContentStatic(const char* filePath, const char* readType = "d", int amountOfBytes);
		char* getByteContentStatic(char* filePAth, char* readType = "d", int amountOfBytes);

		bool writeStringContent(std::string filePath, std::vector<std::string> fileContent, std::string writeType = "d");
		bool writeStringContent(const char* filePath, std::vector<std::string> fileContent, const char* writeType = "d");
		bool writeStringContent(char* filePath, std::vector<std::string> fileContent, char* writeType = "d");

		bool writeCStringContent(std::string filePath, std::vector<char*> fileContent, std::string writeType = "d");
		bool writeCStringContent(const char* filePath, std::vector<char*> fileContent, const char* writeType = "d");
		bool writeCStringContent(char* filePath, std::vector<char*> fileContent, char* writeType = "d");

		bool writeByteContent(std::string filePath, std::vector<char> fileContent, std::string writeType = "d");
		bool writeByteContent(const char* filePath, std::vector<char> fileContent, const char* writeType = "d");
		bool writeByteContent(char* filePath, std::vector<char> fileContent, char* writeType = "d");

		bool writeStringContentStatic(std::string filePath, std::string* fileContent, int fileLines, std::string writeType = "d");
		bool writeStringContentStatic(const char* filePath, std::string* fileContent, int fileLines, const char* writeType = "d");
		bool writeStringContentStatic(char* filePath, std::string* fileContent, int fileLines, char* writeType = "d");

		bool writeCStringContentStatic(std::string filePath, char** fileContent, int fileLines, std::string writeType = "d");
		bool writeCStringContentStatic(const char* filePath, char** fileContent, int fileLines, const char* writeType = "d");
		bool writeCStringContentStatic(char* filePath, char** fileContent, int fileLines, char* writeType = "d");

		bool writeByteContentStatic(std::string filePath, char* fileContent, int fileBytes, std::string writeType = "d");
		bool writeByteContentStatic(const char* filePath, char* fileContent, int fileBytes, const char* writeType = "d");
		bool writeByteContentStatic(char* filePath, char* fileContent, int fileBytes, char* writeType = "d");

		bool writeByteContentStatic(std::string filePath, const char* fileContent, int fileBytes, std::string writeType = "d");
		bool writeByteContentStatic(const char* filePath, const char* fileContent, int fileBytes, const char* writeType = "d");
		bool writeByteContentStatic(char* filePath, const char* fileContent, int fileBytes, char* writeType = "d");
	}
} /* namespace wayne */

#endif /* LIB_WAYNEFS_HPP_ */
