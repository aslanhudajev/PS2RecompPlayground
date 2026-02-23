#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: waitEntryBankObjImm__13EntryDatClassFi
// Address: 0x218f30 - 0x218fcc
void waitEntryBankObjImm__13EntryDatClassFi_0x218f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("waitEntryBankObjImm__13EntryDatClassFi");


    ctx->pc = 0x218f30u;

    // 0x218f30: 0x27bdffd0
    ctx->pc = 0x218f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218f34: 0x7fbf0020
    ctx->pc = 0x218f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x218f38: 0x7fb10010
    ctx->pc = 0x218f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218f3c: 0x70808e28
    ctx->pc = 0x218f3cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x218f40: 0x3c030050
    ctx->pc = 0x218f40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x218f44: 0x7fb00000
    ctx->pc = 0x218f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218f48: 0x52100
    ctx->pc = 0x218f48u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x218f4c: 0x2463ea20
    ctx->pc = 0x218f4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x218f50: 0x10000013
    ctx->pc = 0x218F50u;
    {
        const bool branch_taken_0x218f50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218F54u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x218f50) {
            ctx->pc = 0x218FA0u;
            goto label_218fa0;
        }
    }
    ctx->pc = 0x218F58u;
label_218f58:
    // 0x218f58: 0x86241000
    ctx->pc = 0x218f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4096)));
    // 0x218f5c: 0x86231002
    ctx->pc = 0x218f5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4098)));
    // 0x218f60: 0x64082a
    ctx->pc = 0x218f60u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x218f64: 0x14200004
    ctx->pc = 0x218F64u;
    {
        const bool branch_taken_0x218f64 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x218F68u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x218f64) {
            ctx->pc = 0x218F78u;
            goto label_218f78;
        }
    }
    ctx->pc = 0x218F6Cu;
    // 0x218f6c: 0x10000002
    ctx->pc = 0x218F6Cu;
    {
        const bool branch_taken_0x218f6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218F70u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218f6c) {
            ctx->pc = 0x218F78u;
            goto label_218f78;
        }
    }
    ctx->pc = 0x218F74u;
    // 0x218f74: 0x24050100
    ctx->pc = 0x218f74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
label_218f78:
    // 0x218f78: 0x86231002
    ctx->pc = 0x218f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4098)));
    // 0x218f7c: 0x651821
    ctx->pc = 0x218f7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x218f80: 0x10830005
    ctx->pc = 0x218F80u;
    {
        const bool branch_taken_0x218f80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x218F84u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218f80) {
            ctx->pc = 0x218F98u;
            goto label_218f98;
        }
    }
    ctx->pc = 0x218F88u;
    // 0x218f88: 0xc0863a8
    ctx->pc = 0x218F88u;
    SET_GPR_U32(ctx, 31, 0x218F90u);
    ctx->pc = 0x218EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flushCur__13EntryDatClassFv_0x218ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F90u; }
        else if (ctx->pc != 0x218F90u) { ctx->pc = 0x218F90u; }
    }
    if (ctx->pc != 0x218F90u) { return; }
    ctx->pc = 0x218F90u;
    // 0x218f90: 0x10000004
    ctx->pc = 0x218F90u;
    {
        const bool branch_taken_0x218f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218F94u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x218f90) {
            ctx->pc = 0x218FA4u;
            goto label_218fa4;
        }
    }
    ctx->pc = 0x218F98u;
label_218f98:
    // 0x218f98: 0xd
    ctx->pc = 0x218f98u;
    runtime->handleBreak(rdram, ctx);
    // 0x218f9c: 0x0
    ctx->pc = 0x218f9cu;
    // NOP
label_218fa0:
    // 0x218fa0: 0x8e050000
    ctx->pc = 0x218fa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_218fa4:
    // 0x218fa4: 0x3c046000
    ctx->pc = 0x218fa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)24576 << 16));
    // 0x218fa8: 0x3c034000
    ctx->pc = 0x218fa8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x218fac: 0xa42024
    ctx->pc = 0x218facu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x218fb0: 0x1483ffe9
    ctx->pc = 0x218FB0u;
    {
        const bool branch_taken_0x218fb0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x218fb0) {
            ctx->pc = 0x218F58u;
            goto label_218f58;
        }
    }
    ctx->pc = 0x218FB8u;
    // 0x218fb8: 0x7bbf0020
    ctx->pc = 0x218fb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218fbc: 0x7bb10010
    ctx->pc = 0x218fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218fc0: 0x7bb00000
    ctx->pc = 0x218fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218fc4: 0x3e00008
    ctx->pc = 0x218FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218FC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218F58u: goto label_218f58;
            case 0x218F78u: goto label_218f78;
            case 0x218F98u: goto label_218f98;
            case 0x218FA0u: goto label_218fa0;
            case 0x218FA4u: goto label_218fa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218FCCu;
}
