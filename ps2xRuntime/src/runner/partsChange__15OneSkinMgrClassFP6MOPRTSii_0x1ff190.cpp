#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: partsChange__15OneSkinMgrClassFP6MOPRTSii
// Address: 0x1ff190 - 0x1ff210
void partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("partsChange__15OneSkinMgrClassFP6MOPRTSii");


    ctx->pc = 0x1ff190u;

    // 0x1ff190: 0x27bdffe0
    ctx->pc = 0x1ff190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff194: 0x7fbf0010
    ctx->pc = 0x1ff194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ff198: 0x28e1038e
    ctx->pc = 0x1ff198u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), 910));
    // 0x1ff19c: 0x10200018
    ctx->pc = 0x1FF19Cu;
    {
        const bool branch_taken_0x1ff19c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF1A0u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1ff19c) {
            ctx->pc = 0x1FF200u;
            goto label_1ff200;
        }
    }
    ctx->pc = 0x1FF1A4u;
    // 0x1ff1a4: 0x61900
    ctx->pc = 0x1ff1a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1ff1a8: 0x661823
    ctx->pc = 0x1ff1a8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ff1ac: 0x31900
    ctx->pc = 0x1ff1acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff1b0: 0xa31821
    ctx->pc = 0x1ff1b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ff1b4: 0xac670000
    ctx->pc = 0x1ff1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1ff1b8: 0x3c030052
    ctx->pc = 0x1ff1b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x1ff1bc: 0x246394d0
    ctx->pc = 0x1ff1bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939856));
    // 0x1ff1c0: 0x678021
    ctx->pc = 0x1ff1c0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ff1c4: 0x82050000
    ctx->pc = 0x1ff1c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff1c8: 0x24030001
    ctx->pc = 0x1ff1c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff1cc: 0x14a3000c
    ctx->pc = 0x1FF1CCu;
    {
        const bool branch_taken_0x1ff1cc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ff1cc) {
            ctx->pc = 0x1FF200u;
            goto label_1ff200;
        }
    }
    ctx->pc = 0x1FF1D4u;
    // 0x1ff1d4: 0x3c020051
    ctx->pc = 0x1ff1d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ff1d8: 0x71880
    ctx->pc = 0x1ff1d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ff1dc: 0x244225f0
    ctx->pc = 0x1ff1dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9712));
    // 0x1ff1e0: 0x431021
    ctx->pc = 0x1ff1e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff1e4: 0x8c430000
    ctx->pc = 0x1ff1e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff1e8: 0x2402ffc0
    ctx->pc = 0x1ff1e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1ff1ec: 0x2463003f
    ctx->pc = 0x1ff1ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1ff1f0: 0xc07fc28
    ctx->pc = 0x1FF1F0u;
    SET_GPR_U32(ctx, 31, 0x1FF1F8u);
    ctx->pc = 0x1FF1F4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1FF0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        weight100_cut__15OneSkinMgrClassFPA0_ii_0x1ff0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF1F8u; }
        else if (ctx->pc != 0x1FF1F8u) { ctx->pc = 0x1FF1F8u; }
    }
    if (ctx->pc != 0x1FF1F8u) { return; }
    ctx->pc = 0x1FF1F8u;
    // 0x1ff1f8: 0x24030002
    ctx->pc = 0x1ff1f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff1fc: 0xa2030000
    ctx->pc = 0x1ff1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_1ff200:
    // 0x1ff200: 0x7bbf0010
    ctx->pc = 0x1ff200u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff204: 0x7bb00000
    ctx->pc = 0x1ff204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff208: 0x3e00008
    ctx->pc = 0x1FF208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF20Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF200u: goto label_1ff200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF210u;
}
