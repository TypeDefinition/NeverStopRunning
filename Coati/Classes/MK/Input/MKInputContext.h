#ifndef MK_INPUTCONTEXT_H
#define MK_INPUTCONTEXT_H

// Include MK
#include "../Common/MKMacros.h"

NS_MK_BEGIN

#define MK_INPUT_CONTEXT_NONE 0x0000
#define MK_INPUT_CONTEXT_ALL 0xFFFF

// THERE CAN ONLY BE A MAXIMUM OF 16 UNIQUE CONTEXTS DUE TO A 16 BIT LIMIT!
enum MKInputContext
{
	MK_INPUT_CONTEXT_1  = 0x0001,
	MK_INPUT_CONTEXT_2  = 0x0002,
	MK_INPUT_CONTEXT_3  = 0x0004,
	MK_INPUT_CONTEXT_4  = 0x0008,
	MK_INPUT_CONTEXT_5  = 0x0010,
	MK_INPUT_CONTEXT_6  = 0x0020,
	MK_INPUT_CONTEXT_7  = 0x0040,
	MK_INPUT_CONTEXT_8  = 0x0080,

	MK_INPUT_CONTEXT_9  = 0x0100,
	MK_INPUT_CONTEXT_10 = 0x0200,
	MK_INPUT_CONTEXT_11 = 0x0400,
	MK_INPUT_CONTEXT_12 = 0x0800,
	MK_INPUT_CONTEXT_13 = 0x1000,
	MK_INPUT_CONTEXT_14 = 0x2000,
	MK_INPUT_CONTEXT_15 = 0x4000,
	MK_INPUT_CONTEXT_16 = 0x8000,

    MK_INPUT_CONTEXT_DEFAULT = MK_INPUT_CONTEXT_1,

    // Game Specific Contexts
    MK_INPUT_CONTEXT_STARTSCENE = MK_INPUT_CONTEXT_2,
    MK_INPUT_CONTEXT_GAMEPLAY = MK_INPUT_CONTEXT_3,
};

NS_MK_END

#endif