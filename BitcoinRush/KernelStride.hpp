
#pragma once
#include "stdafx.h"
#include <stdint.h>


#include "Helper.h"


class stride_class
{
public:
	data_class* dt;
public:

	stride_class(data_class* data)
	{
		dt = data;
	}

private:

public:

	int bruteforce_mnemonic(uint64_t grid, uint64_t block);
	int memsetGlobalMnemonic();
	int init();
	int start(uint64_t grid, uint64_t block);
	int end();

	int bruteforce_mnemonic_for_save(uint64_t grid, uint64_t block);
	int memsetGlobalMnemonicSave();
	int start_for_save(uint64_t grid, uint64_t block);
	int end_for_save();
};

