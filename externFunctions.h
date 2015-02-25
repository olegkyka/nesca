extern std::string toLowerStr(const char *str);
extern int recvS(int lSock, char *recvBuffT, int len, int mode);
extern int sendS(int lSock, char *msg, int len, int mode);
extern std::string xcode(LPCSTR src, UINT srcCodePage, UINT dstCodePage);
extern void UserNickInit(SOCKET lSock);
extern void GetNicks();
extern int startScan(char* argv);
extern void BConInc();
extern void BConDec();
extern QString GetNSErrorDefinition(char *str, char *defin);
extern void _SaveBackupToFile();
extern char* strstri(char *_Str, const char *_SubStr);
extern char* _getAttribute(char *str, char *attrib);
extern char *_findFirst(char *str, char *delim);
extern void nCleanup();
extern void getSubStr(char *src, char *startStr, char *endStr, char *dest, int szDest);
extern void getSubStrEx(char *src, char *startStr, char *endStr, char *dest, int szDest);
