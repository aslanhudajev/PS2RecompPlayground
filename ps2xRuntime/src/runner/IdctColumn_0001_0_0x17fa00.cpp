#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_0001_0
// Address: 0x17fa00 - 0x17facc
void IdctColumn_0001_0_0x17fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_0001_0");


    ctx->pc = 0x17fa00u;

    // 0x17fa00: 0x80302d
    ctx->pc = 0x17fa00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa04: 0x3c090001
    ctx->pc = 0x17fa04u;
    SET_GPR_U32(ctx, 9, ((uint32_t)1 << 16));
    // 0x17fa08: 0x84c70060
    ctx->pc = 0x17fa08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x17fa0c: 0x35296a0a
    ctx->pc = 0x17fa0cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 27146));
    // 0x17fa10: 0x3c080020
    ctx->pc = 0x17fa10u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32 << 16));
    // 0x17fa14: 0x240a0007
    ctx->pc = 0x17fa14u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17fa18: 0xe92818
    ctx->pc = 0x17fa18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x17fa1c: 0x71400
    ctx->pc = 0x17fa1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 16));
    // 0x17fa20: 0x1022023
    ctx->pc = 0x17fa20u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17fa24: 0x481821
    ctx->pc = 0x17fa24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17fa28: 0x43d83
    ctx->pc = 0x17fa28u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fa2c: 0x31d83
    ctx->pc = 0x17fa2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fa30: 0xa4c30070
    ctx->pc = 0x17fa30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 112), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fa34: 0xa22821
    ctx->pc = 0x17fa34u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17fa38: 0xa4c70040
    ctx->pc = 0x17fa38u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 64), (uint16_t)GPR_U32(ctx, 7));
    // 0x17fa3c: 0x1051023
    ctx->pc = 0x17fa3cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17fa40: 0xa82021
    ctx->pc = 0x17fa40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x17fa44: 0x21583
    ctx->pc = 0x17fa44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17fa48: 0x42d83
    ctx->pc = 0x17fa48u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fa4c: 0xa4c20060
    ctx->pc = 0x17fa4cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fa50: 0xa4c50050
    ctx->pc = 0x17fa50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x17fa54: 0xa4c30000
    ctx->pc = 0x17fa54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fa58: 0xa4c20010
    ctx->pc = 0x17fa58u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fa5c: 0xa4c50020
    ctx->pc = 0x17fa5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17fa60: 0xa4c70030
    ctx->pc = 0x17fa60u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 7));
    // 0x17fa64: 0x0
    ctx->pc = 0x17fa64u;
    // NOP
label_17fa68:
    // 0x17fa68: 0x24c60002
    ctx->pc = 0x17fa68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
    // 0x17fa6c: 0x254affff
    ctx->pc = 0x17fa6cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x17fa70: 0x84c70060
    ctx->pc = 0x17fa70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x17fa74: 0xe92818
    ctx->pc = 0x17fa74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x17fa78: 0x71400
    ctx->pc = 0x17fa78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 16));
    // 0x17fa7c: 0x1021823
    ctx->pc = 0x17fa7cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17fa80: 0x482021
    ctx->pc = 0x17fa80u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17fa84: 0x33d83
    ctx->pc = 0x17fa84u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fa88: 0x42583
    ctx->pc = 0x17fa88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fa8c: 0xa4c40070
    ctx->pc = 0x17fa8cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 112), (uint16_t)GPR_U32(ctx, 4));
    // 0x17fa90: 0xa22821
    ctx->pc = 0x17fa90u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17fa94: 0xa4c70040
    ctx->pc = 0x17fa94u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 64), (uint16_t)GPR_U32(ctx, 7));
    // 0x17fa98: 0x1051023
    ctx->pc = 0x17fa98u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17fa9c: 0xa81821
    ctx->pc = 0x17fa9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x17faa0: 0x21583
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17faa4: 0x32d83
    ctx->pc = 0x17faa4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17faa8: 0xa4c20060
    ctx->pc = 0x17faa8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x17faac: 0xa4c50050
    ctx->pc = 0x17faacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x17fab0: 0xa4c40000
    ctx->pc = 0x17fab0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17fab4: 0xa4c20010
    ctx->pc = 0x17fab4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fab8: 0xa4c50020
    ctx->pc = 0x17fab8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17fabc: 0x1540ffea
    ctx->pc = 0x17FABCu;
    {
        const bool branch_taken_0x17fabc = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x17FAC0u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 7));
        if (branch_taken_0x17fabc) {
            ctx->pc = 0x17FA68u;
            goto label_17fa68;
        }
    }
    ctx->pc = 0x17FAC4u;
    // 0x17fac4: 0x3e00008
    ctx->pc = 0x17FAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FA68u: goto label_17fa68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FACCu;
}
