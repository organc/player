// ������ DLL �ļ���

#include "stdafx.h"

#include "libplayer.h"

using namespace libplayer;

PlayCtrl::PlayCtrl(){
	
}

DWORD PlayCtrl::test(){
	return PlayM4_GetSdkVersion();
}
