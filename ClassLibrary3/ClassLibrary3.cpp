#include "pch.h"

#include "ClassLibrary3.h"
#include <string.h>

int ClassLibrary3::WrapperClass::MemCopy(array<int>^ src, array<int>^ dst, int size) {
	// ���������|�C���g
	// ���s���A�K�x�[�W�R���N�V��������Ȃ��悤�ɁApin_ptr���g���ČŒ肷��
	pin_ptr<int> srcPtr = &src[0];
	pin_ptr<int> dstPtr = &dst[0];

	// memcpy���s
	memcpy(dstPtr, srcPtr, sizeof(int) * size);

	// ���������|�C���g
	// �Œ����
	srcPtr = nullptr;
	dstPtr = nullptr;

	return 0;
}