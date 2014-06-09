// 这是主 DLL 文件。

#include "stdafx.h"

#include "libplayer.h"

using namespace libplayer;

PlayCtrl::PlayCtrl(){
	
}

String^ PlayCtrl::version(){
	DWORD version_number = PlayM4_GetSdkVersion();
	char version[10];
	sprintf(version, "%p", version_number);
	String^ sver = gcnew String(version);
	return sver;
}
