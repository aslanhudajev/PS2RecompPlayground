#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_SeekEndWait__13EnVtxMgrClassFP11DATAENT_REQ
// Address: 0x1e1ff0 - 0x1e2048
void entryExec_SeekEndWait__13EnVtxMgrClassFP11DATAENT_REQ_0x1e1ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_SeekEndWait__13EnVtxMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e1ff0u;

    // 0x1e1ff0: 0x27bdffe0
    ctx->pc = 0x1e1ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1ff4: 0x7fbf0010
    ctx->pc = 0x1e1ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e1ff8: 0x7fb00000
    ctx->pc = 0x1e1ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1ffc: 0x3c010030
    ctx->pc = 0x1e1ffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1e2000: 0x8c227ca0
    ctx->pc = 0x1e2000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31904)));
    // 0x1e2004: 0x70a08628
    ctx->pc = 0x1e2004u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e2008: 0x4410003
    ctx->pc = 0x1E2008u;
    {
        const bool branch_taken_0x1e2008 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E200Cu;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        if (branch_taken_0x1e2008) {
            ctx->pc = 0x1E2018u;
            goto label_1e2018;
        }
    }
    ctx->pc = 0x1E2010u;
    // 0x1e2010: 0x244207ff
    ctx->pc = 0x1e2010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1e2014: 0x22ac3
    ctx->pc = 0x1e2014u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_1e2018:
    // 0x1e2018: 0x3c010030
    ctx->pc = 0x1e2018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1e201c: 0x8c267c98
    ctx->pc = 0x1e201cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 31896)));
    // 0x1e2020: 0x3c010050
    ctx->pc = 0x1e2020u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2024: 0xc05aeba
    ctx->pc = 0x1E2024u;
    SET_GPR_U32(ctx, 31, 0x1E202Cu);
    ctx->pc = 0x1E2028u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3204)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E202Cu; }
        else if (ctx->pc != 0x1E202Cu) { ctx->pc = 0x1E202Cu; }
    }
    if (ctx->pc != 0x1E202Cu) { return; }
    ctx->pc = 0x1E202Cu;
    // 0x1e202c: 0x24020002
    ctx->pc = 0x1e202cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2030: 0xae02000c
    ctx->pc = 0x1e2030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e2034: 0x7bbf0010
    ctx->pc = 0x1e2034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2038: 0x7bb00000
    ctx->pc = 0x1e2038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e203c: 0x24020001
    ctx->pc = 0x1e203cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2040: 0x3e00008
    ctx->pc = 0x1E2040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2044u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2018u: goto label_1e2018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2048u;
}
