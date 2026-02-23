#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_0010_0
// Address: 0x17fc18 - 0x17fccc
void IdctColumn_0010_0_0x17fc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_0010_0");


    ctx->pc = 0x17fc18u;

    // 0x17fc18: 0x80282d
    ctx->pc = 0x17fc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc1c: 0x3c070020
    ctx->pc = 0x17fc1cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)32 << 16));
    // 0x17fc20: 0x84a20040
    ctx->pc = 0x17fc20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x17fc24: 0x24080007
    ctx->pc = 0x17fc24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 7));
    // 0x17fc28: 0x21400
    ctx->pc = 0x17fc28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x17fc2c: 0x23023
    ctx->pc = 0x17fc2cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x17fc30: 0xc0182d
    ctx->pc = 0x17fc30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc34: 0x471021
    ctx->pc = 0x17fc34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17fc38: 0x672021
    ctx->pc = 0x17fc38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17fc3c: 0x21583
    ctx->pc = 0x17fc3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17fc40: 0x80182d
    ctx->pc = 0x17fc40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc44: 0xa4a20040
    ctx->pc = 0x17fc44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fc48: 0x33583
    ctx->pc = 0x17fc48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fc4c: 0xa4a20000
    ctx->pc = 0x17fc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fc50: 0x41d83
    ctx->pc = 0x17fc50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fc54: 0xa4a60060
    ctx->pc = 0x17fc54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 96), (uint16_t)GPR_U32(ctx, 6));
    // 0x17fc58: 0xa4a30050
    ctx->pc = 0x17fc58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fc5c: 0xa4a20070
    ctx->pc = 0x17fc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fc60: 0xa4a60010
    ctx->pc = 0x17fc60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x17fc64: 0xa4a30020
    ctx->pc = 0x17fc64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fc68: 0xa4a20030
    ctx->pc = 0x17fc68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fc6c: 0x0
    ctx->pc = 0x17fc6cu;
    // NOP
label_17fc70:
    // 0x17fc70: 0x24a50002
    ctx->pc = 0x17fc70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x17fc74: 0x2508ffff
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x17fc78: 0x84a20040
    ctx->pc = 0x17fc78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x17fc7c: 0x21400
    ctx->pc = 0x17fc7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x17fc80: 0x23023
    ctx->pc = 0x17fc80u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x17fc84: 0xc0182d
    ctx->pc = 0x17fc84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc88: 0x471021
    ctx->pc = 0x17fc88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17fc8c: 0x672021
    ctx->pc = 0x17fc8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17fc90: 0x21583
    ctx->pc = 0x17fc90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17fc94: 0x80182d
    ctx->pc = 0x17fc94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc98: 0xa4a20040
    ctx->pc = 0x17fc98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fc9c: 0x33583
    ctx->pc = 0x17fc9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fca0: 0xa4a20000
    ctx->pc = 0x17fca0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fca4: 0x41d83
    ctx->pc = 0x17fca4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fca8: 0xa4a60060
    ctx->pc = 0x17fca8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 96), (uint16_t)GPR_U32(ctx, 6));
    // 0x17fcac: 0xa4a30050
    ctx->pc = 0x17fcacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fcb0: 0xa4a20070
    ctx->pc = 0x17fcb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fcb4: 0xa4a60010
    ctx->pc = 0x17fcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x17fcb8: 0xa4a30020
    ctx->pc = 0x17fcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x17fcbc: 0x1500ffec
    ctx->pc = 0x17FCBCu;
    {
        const bool branch_taken_0x17fcbc = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x17FCC0u;
        WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x17fcbc) {
            ctx->pc = 0x17FC70u;
            goto label_17fc70;
        }
    }
    ctx->pc = 0x17FCC4u;
    // 0x17fcc4: 0x3e00008
    ctx->pc = 0x17FCC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FC70u: goto label_17fc70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FCCCu;
}
