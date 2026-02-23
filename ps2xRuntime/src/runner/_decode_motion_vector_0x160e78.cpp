#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _decode_motion_vector
// Address: 0x160e78 - 0x160f00
void _decode_motion_vector_0x160e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_decode_motion_vector");


    ctx->pc = 0x160e78u;

    // 0x160e78: 0x80502d
    ctx->pc = 0x160e78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e7c: 0x24020010
    ctx->pc = 0x160e7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x160e80: 0x8d440000
    ctx->pc = 0x160e80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x160e84: 0xa24804
    ctx->pc = 0x160e84u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x160e88: 0x41843
    ctx->pc = 0x160e88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x160e8c: 0x18c0000c
    ctx->pc = 0x160E8Cu;
    {
        const bool branch_taken_0x160e8c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x160E90u;
        if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x160e8c) {
            ctx->pc = 0x160EC0u;
            goto label_160ec0;
        }
    }
    ctx->pc = 0x160E94u;
    // 0x160e94: 0x24c2ffff
    ctx->pc = 0x160e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x160e98: 0x24840001
    ctx->pc = 0x160e98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x160e9c: 0xa21004
    ctx->pc = 0x160e9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x160ea0: 0x471021
    ctx->pc = 0x160ea0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160ea4: 0x822021
    ctx->pc = 0x160ea4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x160ea8: 0x89182a
    ctx->pc = 0x160ea8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 9)));
    // 0x160eac: 0x14600011
    ctx->pc = 0x160EACu;
    {
        const bool branch_taken_0x160eac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x160EB0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x160eac) {
            ctx->pc = 0x160EF4u;
            goto label_160ef4;
        }
    }
    ctx->pc = 0x160EB4u;
    // 0x160eb4: 0x91040
    ctx->pc = 0x160eb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
    // 0x160eb8: 0x1000000d
    ctx->pc = 0x160EB8u;
    {
        const bool branch_taken_0x160eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160EBCu;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x160eb8) {
            ctx->pc = 0x160EF0u;
            goto label_160ef0;
        }
    }
    ctx->pc = 0x160EC0u;
label_160ec0:
    // 0x160ec0: 0x4c1000c
    ctx->pc = 0x160EC0u;
    {
        const bool branch_taken_0x160ec0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x160EC4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x160ec0) {
            ctx->pc = 0x160EF4u;
            goto label_160ef4;
        }
    }
    ctx->pc = 0x160EC8u;
    // 0x160ec8: 0x61027
    ctx->pc = 0x160ec8u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x160ecc: 0x2484ffff
    ctx->pc = 0x160eccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x160ed0: 0xa21004
    ctx->pc = 0x160ed0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x160ed4: 0x91823
    ctx->pc = 0x160ed4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x160ed8: 0x471021
    ctx->pc = 0x160ed8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160edc: 0x822023
    ctx->pc = 0x160edcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x160ee0: 0x83182a
    ctx->pc = 0x160ee0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x160ee4: 0x10600002
    ctx->pc = 0x160EE4u;
    {
        const bool branch_taken_0x160ee4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x160EE8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x160ee4) {
            ctx->pc = 0x160EF0u;
            goto label_160ef0;
        }
    }
    ctx->pc = 0x160EECu;
    // 0x160eec: 0x822021
    ctx->pc = 0x160eecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_160ef0:
    // 0x160ef0: 0x41040
    ctx->pc = 0x160ef0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
label_160ef4:
    // 0x160ef4: 0x88100a
    ctx->pc = 0x160ef4u;
    if (GPR_U32(ctx, 8) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x160ef8: 0x3e00008
    ctx->pc = 0x160EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160EFCu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x160EC0u: goto label_160ec0;
            case 0x160EF0u: goto label_160ef0;
            case 0x160EF4u: goto label_160ef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160F00u;
}
