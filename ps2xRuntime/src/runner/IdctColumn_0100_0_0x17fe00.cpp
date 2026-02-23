#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_0100_0
// Address: 0x17fe00 - 0x17fed0
void IdctColumn_0100_0_0x17fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_0100_0");


    ctx->pc = 0x17fe00u;

    // 0x17fe00: 0x80302d
    ctx->pc = 0x17fe00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe04: 0x3c09fffe
    ctx->pc = 0x17fe04u;
    SET_GPR_U32(ctx, 9, ((uint32_t)65534 << 16));
    // 0x17fe08: 0x84c50020
    ctx->pc = 0x17fe08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x17fe0c: 0x352995f6
    ctx->pc = 0x17fe0cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 38390));
    // 0x17fe10: 0x3c080020
    ctx->pc = 0x17fe10u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32 << 16));
    // 0x17fe14: 0x240a0007
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17fe18: 0xa0382d
    ctx->pc = 0x17fe18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe1c: 0xa92818
    ctx->pc = 0x17fe1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x17fe20: 0x71400
    ctx->pc = 0x17fe20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 16));
    // 0x17fe24: 0x1022023
    ctx->pc = 0x17fe24u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17fe28: 0x481821
    ctx->pc = 0x17fe28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17fe2c: 0x43d83
    ctx->pc = 0x17fe2cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fe30: 0x31d83
    ctx->pc = 0x17fe30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fe34: 0xa4c30070
    ctx->pc = 0x17fe34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 112), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fe38: 0xa22821
    ctx->pc = 0x17fe38u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17fe3c: 0xa4c70040
    ctx->pc = 0x17fe3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 64), (uint16_t)GPR_U32(ctx, 7));
    // 0x17fe40: 0x1051023
    ctx->pc = 0x17fe40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17fe44: 0xa82021
    ctx->pc = 0x17fe44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x17fe48: 0x21583
    ctx->pc = 0x17fe48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17fe4c: 0x42d83
    ctx->pc = 0x17fe4cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fe50: 0xa4c20060
    ctx->pc = 0x17fe50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fe54: 0xa4c50050
    ctx->pc = 0x17fe54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x17fe58: 0xa4c30000
    ctx->pc = 0x17fe58u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fe5c: 0xa4c20010
    ctx->pc = 0x17fe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fe60: 0xa4c50020
    ctx->pc = 0x17fe60u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17fe64: 0xa4c70030
    ctx->pc = 0x17fe64u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 7));
label_17fe68:
    // 0x17fe68: 0x24c60002
    ctx->pc = 0x17fe68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
    // 0x17fe6c: 0x254affff
    ctx->pc = 0x17fe6cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x17fe70: 0x84c50020
    ctx->pc = 0x17fe70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x17fe74: 0xa0382d
    ctx->pc = 0x17fe74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe78: 0xa92818
    ctx->pc = 0x17fe78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x17fe7c: 0x71400
    ctx->pc = 0x17fe7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 16));
    // 0x17fe80: 0x1021823
    ctx->pc = 0x17fe80u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17fe84: 0x482021
    ctx->pc = 0x17fe84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17fe88: 0x33d83
    ctx->pc = 0x17fe88u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fe8c: 0x42583
    ctx->pc = 0x17fe8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fe90: 0xa4c40070
    ctx->pc = 0x17fe90u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 112), (uint16_t)GPR_U32(ctx, 4));
    // 0x17fe94: 0xa22821
    ctx->pc = 0x17fe94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17fe98: 0xa4c70040
    ctx->pc = 0x17fe98u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 64), (uint16_t)GPR_U32(ctx, 7));
    // 0x17fe9c: 0x1051023
    ctx->pc = 0x17fe9cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17fea0: 0xa81821
    ctx->pc = 0x17fea0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x17fea4: 0x21583
    ctx->pc = 0x17fea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17fea8: 0x32d83
    ctx->pc = 0x17fea8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17feac: 0xa4c20060
    ctx->pc = 0x17feacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x17feb0: 0xa4c50050
    ctx->pc = 0x17feb0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x17feb4: 0xa4c40000
    ctx->pc = 0x17feb4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17feb8: 0xa4c20010
    ctx->pc = 0x17feb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x17febc: 0xa4c50020
    ctx->pc = 0x17febcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17fec0: 0x1540ffe9
    ctx->pc = 0x17FEC0u;
    {
        const bool branch_taken_0x17fec0 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x17FEC4u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 7));
        if (branch_taken_0x17fec0) {
            ctx->pc = 0x17FE68u;
            goto label_17fe68;
        }
    }
    ctx->pc = 0x17FEC8u;
    // 0x17fec8: 0x3e00008
    ctx->pc = 0x17FEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FE68u: goto label_17fe68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FED0u;
}
