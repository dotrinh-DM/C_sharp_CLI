#include "pch.h"

#include "ClassLibrary3.h"
#include <string.h>

int ClassLibrary3::WrapperClass::MemCopy(array<int>^ src, array<int>^ dst, int size) {
	// ★ここがポイント
	// 実行中、ガベージコレクションされないように、pin_ptrを使って固定する
	pin_ptr<int> srcPtr = &src[0];
	pin_ptr<int> dstPtr = &dst[0];

	// memcpy実行
	memcpy(dstPtr, srcPtr, sizeof(int) * size);

	// ★ここがポイント
	// 固定解除
	srcPtr = nullptr;
	dstPtr = nullptr;

	return 0;
}