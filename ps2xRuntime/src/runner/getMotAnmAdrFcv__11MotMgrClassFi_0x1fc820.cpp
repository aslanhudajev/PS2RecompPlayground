#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getMotAnmAdrFcv__11MotMgrClassFi
// Address: 0x1fc820 - 0x1fc890
void getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getMotAnmAdrFcv__11MotMgrClassFi");


    ctx->pc = 0x1fc820u;

    // 0x1fc820: 0x27bdffe0
    ctx->pc = 0x1fc820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc824: 0x7fbf0010
    ctx->pc = 0x1fc824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fc828: 0x7fb00000
    ctx->pc = 0x1fc828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc82c: 0x3c020050
    ctx->pc = 0x1fc82cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fc830: 0x580c0
    ctx->pc = 0x1fc830u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1fc834: 0x24420e30
    ctx->pc = 0x1fc834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3632));
    // 0x1fc838: 0x501021
    ctx->pc = 0x1fc838u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc83c: 0x8c430000
    ctx->pc = 0x1fc83cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc840: 0x3c028000
    ctx->pc = 0x1fc840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1fc844: 0x621024
    ctx->pc = 0x1fc844u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc848: 0x14400009
    ctx->pc = 0x1FC848u;
    {
        const bool branch_taken_0x1fc848 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fc848) {
            ctx->pc = 0x1FC870u;
            goto label_1fc870;
        }
    }
    ctx->pc = 0x1FC850u;
    // 0x1fc850: 0x51040
    ctx->pc = 0x1fc850u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fc854: 0x3c0101fb
    ctx->pc = 0x1fc854u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x1fc858: 0x410821
    ctx->pc = 0x1fc858u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fc85c: 0x94233000
    ctx->pc = 0x1fc85cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 12288)));
    // 0x1fc860: 0x3c020051
    ctx->pc = 0x1fc860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fc864: 0x244437a0
    ctx->pc = 0x1fc864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1fc868: 0xc0863f4
    ctx->pc = 0x1FC868u;
    SET_GPR_U32(ctx, 31, 0x1FC870u);
    ctx->pc = 0x1FC86Cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 9));
    ctx->pc = 0x218FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankMotImm__13EntryDatClassFi_0x218fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC870u; }
        else if (ctx->pc != 0x1FC870u) { ctx->pc = 0x1FC870u; }
    }
    if (ctx->pc != 0x1FC870u) { return; }
    ctx->pc = 0x1FC870u;
label_1fc870:
    // 0x1fc870: 0x3c020050
    ctx->pc = 0x1fc870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fc874: 0x24420e34
    ctx->pc = 0x1fc874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3636));
    // 0x1fc878: 0x501021
    ctx->pc = 0x1fc878u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fc87c: 0x7bbf0010
    ctx->pc = 0x1fc87cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc880: 0x7bb00000
    ctx->pc = 0x1fc880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc884: 0x8c420000
    ctx->pc = 0x1fc884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc888: 0x3e00008
    ctx->pc = 0x1FC888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC88Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC870u: goto label_1fc870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC890u;
}
