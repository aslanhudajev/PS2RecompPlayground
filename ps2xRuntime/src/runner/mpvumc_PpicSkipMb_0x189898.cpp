#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvumc_PpicSkipMb
// Address: 0x189898 - 0x189b70
void mpvumc_PpicSkipMb_0x189898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvumc_PpicSkipMb");


    ctx->pc = 0x189898u;

    // 0x189898: 0x84c3000c
    ctx->pc = 0x189898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x18989c: 0x240bffff
    ctx->pc = 0x18989cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1898a0: 0x8c8a0000
    ctx->pc = 0x1898a0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1898a4: 0x8ca80000
    ctx->pc = 0x1898a4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1898a8: 0x163382a
    ctx->pc = 0x1898a8u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 3)));
    // 0x1898ac: 0x24620007
    ctx->pc = 0x1898acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 7));
    // 0x1898b0: 0x8cc90000
    ctx->pc = 0x1898b0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1898b4: 0x10a6021
    ctx->pc = 0x1898b4u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1898b8: 0x67100b
    ctx->pc = 0x1898b8u;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x1898bc: 0xdd880000
    ctx->pc = 0x1898bcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1898c0: 0x210c3
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1898c4: 0x12a4821
    ctx->pc = 0x1898c4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1898c8: 0x210c0
    ctx->pc = 0x1898c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1898cc: 0xfd280000
    ctx->pc = 0x1898ccu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 8));
    // 0x1898d0: 0x1826021
    ctx->pc = 0x1898d0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1898d4: 0x1224821
    ctx->pc = 0x1898d4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1898d8: 0x8ca80004
    ctx->pc = 0x1898d8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1898dc: 0xdd830000
    ctx->pc = 0x1898dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1898e0: 0x1826021
    ctx->pc = 0x1898e0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1898e4: 0x8cc70004
    ctx->pc = 0x1898e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1898e8: 0xfd230000
    ctx->pc = 0x1898e8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x1898ec: 0x1224821
    ctx->pc = 0x1898ecu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1898f0: 0xdd830000
    ctx->pc = 0x1898f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1898f4: 0x1826021
    ctx->pc = 0x1898f4u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1898f8: 0xfd230000
    ctx->pc = 0x1898f8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x1898fc: 0x1224821
    ctx->pc = 0x1898fcu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189900: 0xdd830000
    ctx->pc = 0x189900u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189904: 0x1826021
    ctx->pc = 0x189904u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189908: 0xfd230000
    ctx->pc = 0x189908u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18990c: 0x1224821
    ctx->pc = 0x18990cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189910: 0xdd830000
    ctx->pc = 0x189910u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189914: 0x1826021
    ctx->pc = 0x189914u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189918: 0xfd230000
    ctx->pc = 0x189918u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18991c: 0x1224821
    ctx->pc = 0x18991cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189920: 0xdd830000
    ctx->pc = 0x189920u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189924: 0x1826021
    ctx->pc = 0x189924u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189928: 0xfd230000
    ctx->pc = 0x189928u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18992c: 0x1224821
    ctx->pc = 0x18992cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189930: 0xdd830000
    ctx->pc = 0x189930u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189934: 0x1826021
    ctx->pc = 0x189934u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189938: 0xfd230000
    ctx->pc = 0x189938u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18993c: 0x1224821
    ctx->pc = 0x18993cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189940: 0xdd830000
    ctx->pc = 0x189940u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189944: 0x10a6021
    ctx->pc = 0x189944u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x189948: 0xfd230000
    ctx->pc = 0x189948u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18994c: 0xea4821
    ctx->pc = 0x18994cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x189950: 0xdd830000
    ctx->pc = 0x189950u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189954: 0x1826021
    ctx->pc = 0x189954u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189958: 0xfd230000
    ctx->pc = 0x189958u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18995c: 0x1224821
    ctx->pc = 0x18995cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189960: 0xdd830000
    ctx->pc = 0x189960u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189964: 0x1826021
    ctx->pc = 0x189964u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189968: 0xfd230000
    ctx->pc = 0x189968u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18996c: 0x1224821
    ctx->pc = 0x18996cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189970: 0xdd830000
    ctx->pc = 0x189970u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189974: 0x1826021
    ctx->pc = 0x189974u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189978: 0xfd230000
    ctx->pc = 0x189978u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18997c: 0x1224821
    ctx->pc = 0x18997cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189980: 0xdd830000
    ctx->pc = 0x189980u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189984: 0x1826021
    ctx->pc = 0x189984u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189988: 0xfd230000
    ctx->pc = 0x189988u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18998c: 0x1224821
    ctx->pc = 0x18998cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189990: 0xdd830000
    ctx->pc = 0x189990u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189994: 0x1826021
    ctx->pc = 0x189994u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189998: 0xfd230000
    ctx->pc = 0x189998u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18999c: 0x1224821
    ctx->pc = 0x18999cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1899a0: 0xdd830000
    ctx->pc = 0x1899a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1899a4: 0x1826021
    ctx->pc = 0x1899a4u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1899a8: 0xfd230000
    ctx->pc = 0x1899a8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x1899ac: 0xdd870000
    ctx->pc = 0x1899acu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1899b0: 0x1224821
    ctx->pc = 0x1899b0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1899b4: 0x8c880004
    ctx->pc = 0x1899b4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1899b8: 0x1826021
    ctx->pc = 0x1899b8u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1899bc: 0xfd270000
    ctx->pc = 0x1899bcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 7));
    // 0x1899c0: 0x8ca30008
    ctx->pc = 0x1899c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1899c4: 0x1224821
    ctx->pc = 0x1899c4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1899c8: 0xdd840000
    ctx->pc = 0x1899c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1899cc: 0x686021
    ctx->pc = 0x1899ccu;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1899d0: 0x8cc20008
    ctx->pc = 0x1899d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1899d4: 0xfd240000
    ctx->pc = 0x1899d4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x1899d8: 0x484821
    ctx->pc = 0x1899d8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1899dc: 0xdd840000
    ctx->pc = 0x1899dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1899e0: 0x84c3000e
    ctx->pc = 0x1899e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1899e4: 0xfd240000
    ctx->pc = 0x1899e4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x1899e8: 0x163582a
    ctx->pc = 0x1899e8u;
    SET_GPR_U32(ctx, 11, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 3)));
    // 0x1899ec: 0x24620007
    ctx->pc = 0x1899ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 7));
    // 0x1899f0: 0xdd840008
    ctx->pc = 0x1899f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1899f4: 0x6b100b
    ctx->pc = 0x1899f4u;
    if (GPR_U32(ctx, 11) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x1899f8: 0x210c3
    ctx->pc = 0x1899f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1899fc: 0x218c0
    ctx->pc = 0x1899fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x189a00: 0xfd240008
    ctx->pc = 0x189a00u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189a04: 0x1836021
    ctx->pc = 0x189a04u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189a08: 0x1234821
    ctx->pc = 0x189a08u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189a0c: 0xdd820000
    ctx->pc = 0x189a0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189a10: 0xfd220000
    ctx->pc = 0x189a10u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189a14: 0xdd840008
    ctx->pc = 0x189a14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189a18: 0x1836021
    ctx->pc = 0x189a18u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189a1c: 0xfd240008
    ctx->pc = 0x189a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189a20: 0x1234821
    ctx->pc = 0x189a20u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189a24: 0xdd820000
    ctx->pc = 0x189a24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189a28: 0xfd220000
    ctx->pc = 0x189a28u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189a2c: 0xdd840008
    ctx->pc = 0x189a2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189a30: 0x1836021
    ctx->pc = 0x189a30u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189a34: 0xfd240008
    ctx->pc = 0x189a34u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189a38: 0x1234821
    ctx->pc = 0x189a38u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189a3c: 0xdd820000
    ctx->pc = 0x189a3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189a40: 0xfd220000
    ctx->pc = 0x189a40u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189a44: 0xdd840008
    ctx->pc = 0x189a44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189a48: 0x1836021
    ctx->pc = 0x189a48u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189a4c: 0xfd240008
    ctx->pc = 0x189a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189a50: 0x1234821
    ctx->pc = 0x189a50u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189a54: 0xdd820000
    ctx->pc = 0x189a54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189a58: 0xfd220000
    ctx->pc = 0x189a58u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189a5c: 0xdd840008
    ctx->pc = 0x189a5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189a60: 0x1836021
    ctx->pc = 0x189a60u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189a64: 0xfd240008
    ctx->pc = 0x189a64u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189a68: 0x1234821
    ctx->pc = 0x189a68u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189a6c: 0xdd820000
    ctx->pc = 0x189a6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189a70: 0xfd220000
    ctx->pc = 0x189a70u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189a74: 0xdd840008
    ctx->pc = 0x189a74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189a78: 0x1836021
    ctx->pc = 0x189a78u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189a7c: 0xfd240008
    ctx->pc = 0x189a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189a80: 0x1234821
    ctx->pc = 0x189a80u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189a84: 0xdd820000
    ctx->pc = 0x189a84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189a88: 0xfd220000
    ctx->pc = 0x189a88u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189a8c: 0xdd840008
    ctx->pc = 0x189a8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189a90: 0x1836021
    ctx->pc = 0x189a90u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189a94: 0xfd240008
    ctx->pc = 0x189a94u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189a98: 0x1234821
    ctx->pc = 0x189a98u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189a9c: 0xdd820000
    ctx->pc = 0x189a9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189aa0: 0xfd220000
    ctx->pc = 0x189aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189aa4: 0xdd840008
    ctx->pc = 0x189aa4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189aa8: 0x1836021
    ctx->pc = 0x189aa8u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189aac: 0xfd240008
    ctx->pc = 0x189aacu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189ab0: 0x1234821
    ctx->pc = 0x189ab0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189ab4: 0xdd820000
    ctx->pc = 0x189ab4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189ab8: 0xfd220000
    ctx->pc = 0x189ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189abc: 0xdd840008
    ctx->pc = 0x189abcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189ac0: 0x1836021
    ctx->pc = 0x189ac0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189ac4: 0xfd240008
    ctx->pc = 0x189ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189ac8: 0x1234821
    ctx->pc = 0x189ac8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189acc: 0xdd820000
    ctx->pc = 0x189accu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189ad0: 0xfd220000
    ctx->pc = 0x189ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189ad4: 0xdd840008
    ctx->pc = 0x189ad4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189ad8: 0x1836021
    ctx->pc = 0x189ad8u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189adc: 0xfd240008
    ctx->pc = 0x189adcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189ae0: 0x1234821
    ctx->pc = 0x189ae0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189ae4: 0xdd820000
    ctx->pc = 0x189ae4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189ae8: 0xfd220000
    ctx->pc = 0x189ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189aec: 0xdd840008
    ctx->pc = 0x189aecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189af0: 0x1836021
    ctx->pc = 0x189af0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189af4: 0xfd240008
    ctx->pc = 0x189af4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189af8: 0x1234821
    ctx->pc = 0x189af8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189afc: 0xdd820000
    ctx->pc = 0x189afcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189b00: 0xfd220000
    ctx->pc = 0x189b00u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189b04: 0xdd840008
    ctx->pc = 0x189b04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189b08: 0x1836021
    ctx->pc = 0x189b08u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189b0c: 0xfd240008
    ctx->pc = 0x189b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189b10: 0x1234821
    ctx->pc = 0x189b10u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189b14: 0xdd820000
    ctx->pc = 0x189b14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189b18: 0xfd220000
    ctx->pc = 0x189b18u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189b1c: 0xdd840008
    ctx->pc = 0x189b1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189b20: 0x1836021
    ctx->pc = 0x189b20u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189b24: 0xfd240008
    ctx->pc = 0x189b24u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189b28: 0x1234821
    ctx->pc = 0x189b28u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189b2c: 0xdd820000
    ctx->pc = 0x189b2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189b30: 0xfd220000
    ctx->pc = 0x189b30u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189b34: 0xdd840008
    ctx->pc = 0x189b34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189b38: 0x1836021
    ctx->pc = 0x189b38u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189b3c: 0xfd240008
    ctx->pc = 0x189b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189b40: 0x1234821
    ctx->pc = 0x189b40u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189b44: 0xdd820000
    ctx->pc = 0x189b44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189b48: 0xfd220000
    ctx->pc = 0x189b48u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x189b4c: 0xdd840008
    ctx->pc = 0x189b4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189b50: 0x1836021
    ctx->pc = 0x189b50u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189b54: 0xfd240008
    ctx->pc = 0x189b54u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x189b58: 0xdd850000
    ctx->pc = 0x189b58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x189b5c: 0x1234821
    ctx->pc = 0x189b5cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x189b60: 0xfd250000
    ctx->pc = 0x189b60u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 5));
    // 0x189b64: 0xdd820008
    ctx->pc = 0x189b64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x189b68: 0x3e00008
    ctx->pc = 0x189B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189B6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189B70u;
}
