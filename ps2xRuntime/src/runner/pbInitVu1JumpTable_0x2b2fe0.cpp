#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitVu1JumpTable
// Address: 0x2b2fe0 - 0x2b313c
void pbInitVu1JumpTable_0x2b2fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b2fe0u;

    // 0x2b2fe0: 0x3c050037
    ctx->pc = 0x2b2fe0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2b2fe4: 0x24a425e8
    ctx->pc = 0x2b2fe4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 9704));
    // 0x2b2fe8: 0x3c080000
    ctx->pc = 0x2b2fe8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)0 << 16));
    // 0x2b2fec: 0x25080b30
    ctx->pc = 0x2b2fecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2864));
    // 0x2b2ff0: 0x3c0a0000
    ctx->pc = 0x2b2ff0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)0 << 16));
    // 0x2b2ff4: 0x254a0000
    ctx->pc = 0x2b2ff4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 0));
    // 0x2b2ff8: 0x10a4023
    ctx->pc = 0x2b2ff8u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x2b2ffc: 0x25030007
    ctx->pc = 0x2b2ffcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 7));
    // 0x2b3000: 0x2409ffff
    ctx->pc = 0x2b3000u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3004: 0x128102a
    ctx->pc = 0x2b3004u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 8)));
    // 0x2b3008: 0x62400a
    ctx->pc = 0x2b3008u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 3));
    // 0x2b300c: 0x840c3
    ctx->pc = 0x2b300cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
    // 0x2b3010: 0xa4a825e8
    ctx->pc = 0x2b3010u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9704), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b3014: 0x3c070000
    ctx->pc = 0x2b3014u;
    SET_GPR_U32(ctx, 7, ((uint32_t)0 << 16));
    // 0x2b3018: 0x24e707e0
    ctx->pc = 0x2b3018u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2016));
    // 0x2b301c: 0xea3823
    ctx->pc = 0x2b301cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x2b3020: 0x24e30007
    ctx->pc = 0x2b3020u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 7));
    // 0x2b3024: 0x127102a
    ctx->pc = 0x2b3024u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 7)));
    // 0x2b3028: 0x62380a
    ctx->pc = 0x2b3028u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 3));
    // 0x2b302c: 0x738c3
    ctx->pc = 0x2b302cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
    // 0x2b3030: 0xa4870004
    ctx->pc = 0x2b3030u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b3034: 0x3c050000
    ctx->pc = 0x2b3034u;
    SET_GPR_U32(ctx, 5, ((uint32_t)0 << 16));
    // 0x2b3038: 0x24a50520
    ctx->pc = 0x2b3038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1312));
    // 0x2b303c: 0xaa2823
    ctx->pc = 0x2b303cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2b3040: 0x24a30007
    ctx->pc = 0x2b3040u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 7));
    // 0x2b3044: 0x125102a
    ctx->pc = 0x2b3044u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 5)));
    // 0x2b3048: 0x62280a
    ctx->pc = 0x2b3048u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x2b304c: 0x528c3
    ctx->pc = 0x2b304cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x2b3050: 0xa4850008
    ctx->pc = 0x2b3050u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b3054: 0xa485000c
    ctx->pc = 0x2b3054u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b3058: 0x3c020000
    ctx->pc = 0x2b3058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b305c: 0x24420490
    ctx->pc = 0x2b305cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1168));
    // 0x2b3060: 0x4a1023
    ctx->pc = 0x2b3060u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b3064: 0x24460007
    ctx->pc = 0x2b3064u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7));
    // 0x2b3068: 0x122182a
    ctx->pc = 0x2b3068u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 2)));
    // 0x2b306c: 0xc3100a
    ctx->pc = 0x2b306cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x2b3070: 0x210c3
    ctx->pc = 0x2b3070u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2b3074: 0xa4820010
    ctx->pc = 0x2b3074u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3078: 0xa4820014
    ctx->pc = 0x2b3078u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b307c: 0xa4820018
    ctx->pc = 0x2b307cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3080: 0xa482001c
    ctx->pc = 0x2b3080u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3084: 0x3c020000
    ctx->pc = 0x2b3084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b3088: 0x244203b0
    ctx->pc = 0x2b3088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 944));
    // 0x2b308c: 0x4a1023
    ctx->pc = 0x2b308cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b3090: 0x24460007
    ctx->pc = 0x2b3090u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7));
    // 0x2b3094: 0x122182a
    ctx->pc = 0x2b3094u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 2)));
    // 0x2b3098: 0xc3100a
    ctx->pc = 0x2b3098u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x2b309c: 0x210c3
    ctx->pc = 0x2b309cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2b30a0: 0xa4820020
    ctx->pc = 0x2b30a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b30a4: 0xa4820024
    ctx->pc = 0x2b30a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b30a8: 0xa4820028
    ctx->pc = 0x2b30a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b30ac: 0xa482002c
    ctx->pc = 0x2b30acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b30b0: 0x3c020000
    ctx->pc = 0x2b30b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b30b4: 0x24420418
    ctx->pc = 0x2b30b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1048));
    // 0x2b30b8: 0x4a1023
    ctx->pc = 0x2b30b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b30bc: 0x24460007
    ctx->pc = 0x2b30bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7));
    // 0x2b30c0: 0x122182a
    ctx->pc = 0x2b30c0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 2)));
    // 0x2b30c4: 0xc3100a
    ctx->pc = 0x2b30c4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x2b30c8: 0x210c3
    ctx->pc = 0x2b30c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2b30cc: 0xa4820030
    ctx->pc = 0x2b30ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b30d0: 0xa4820034
    ctx->pc = 0x2b30d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b30d4: 0xa4820038
    ctx->pc = 0x2b30d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b30d8: 0xa482003c
    ctx->pc = 0x2b30d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b30dc: 0x3c020000
    ctx->pc = 0x2b30dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x2b30e0: 0x244236e8
    ctx->pc = 0x2b30e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14056));
    // 0x2b30e4: 0x4a1023
    ctx->pc = 0x2b30e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2b30e8: 0x24430007
    ctx->pc = 0x2b30e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7));
    // 0x2b30ec: 0x122482a
    ctx->pc = 0x2b30ecu;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 2)));
    // 0x2b30f0: 0x69100a
    ctx->pc = 0x2b30f0u;
    if (GPR_U32(ctx, 9) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x2b30f4: 0x210c3
    ctx->pc = 0x2b30f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2b30f8: 0xa4820002
    ctx->pc = 0x2b30f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b30fc: 0xa4820006
    ctx->pc = 0x2b30fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3100: 0xa482000a
    ctx->pc = 0x2b3100u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3104: 0xa482000e
    ctx->pc = 0x2b3104u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3108: 0xa4880012
    ctx->pc = 0x2b3108u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b310c: 0xa4870016
    ctx->pc = 0x2b310cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b3110: 0xa485001a
    ctx->pc = 0x2b3110u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b3114: 0xa485001e
    ctx->pc = 0x2b3114u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b3118: 0xa4880022
    ctx->pc = 0x2b3118u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b311c: 0xa4870026
    ctx->pc = 0x2b311cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b3120: 0xa485002a
    ctx->pc = 0x2b3120u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b3124: 0xa485002e
    ctx->pc = 0x2b3124u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b3128: 0xa4880032
    ctx->pc = 0x2b3128u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b312c: 0xa4870036
    ctx->pc = 0x2b312cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b3130: 0xa485003a
    ctx->pc = 0x2b3130u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 58), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b3134: 0x80acbf6
    ctx->pc = 0x2B3134u;
    ctx->pc = 0x2B3138u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x2B2FD8u;
    initVu1Debug_0x2b2fd8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B313Cu;
}
