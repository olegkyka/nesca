#ifndef BASICAUTH_H
#define BASICAUTH_H

#include "Utils.h"
#include "Connector.h"
#include "externData.h"
#include "mainResources.h"

class BA {
private:
	static lopaStr BABrute(const char *ip, const int port, bool digestMode);

public:
	static bool checkOutput(const string *buffer, const char *ip, const int port);
	static lopaStr BALobby(const char *ip, const int port, bool digestMode);
};

#endif // BASICAUTH_H
