#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_Destroy
// Address: 0x170288 - 0x1702f0
void ADXSJE_Destroy_0x170288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_Destroy");


    ctx->pc = 0x170288u;

    // 0x170288: 0x27bdffe0
    ctx->pc = 0x170288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17028c: 0xffb00000
    ctx->pc = 0x17028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170290: 0x80802d
    ctx->pc = 0x170290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170294: 0x12000012
    ctx->pc = 0x170294u;
    {
        const bool branch_taken_0x170294 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x170298u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x170294) {
            ctx->pc = 0x1702E0u;
            goto label_1702e0;
        }
    }
    ctx->pc = 0x17029Cu;
    // 0x17029c: 0xc05a4e4
    ctx->pc = 0x17029Cu;
    SET_GPR_U32(ctx, 31, 0x1702A4u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702A4u; }
        else if (ctx->pc != 0x1702A4u) { ctx->pc = 0x1702A4u; }
    }
    if (ctx->pc != 0x1702A4u) { return; }
    ctx->pc = 0x1702A4u;
    // 0x1702a4: 0x8e040080
    ctx->pc = 0x1702a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1702a8: 0x50800004
    ctx->pc = 0x1702A8u;
    {
        const bool branch_taken_0x1702a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1702a8) {
            ctx->pc = 0x1702ACu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->pc = 0x1702BCu;
            goto label_1702bc;
        }
    }
    ctx->pc = 0x1702B0u;
    // 0x1702b0: 0xc05bb52
    ctx->pc = 0x1702B0u;
    SET_GPR_U32(ctx, 31, 0x1702B8u);
    ctx->pc = 0x16ED48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_destroy_0x16ed48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702B8u; }
        else if (ctx->pc != 0x1702B8u) { ctx->pc = 0x1702B8u; }
    }
    if (ctx->pc != 0x1702B8u) { return; }
    ctx->pc = 0x1702B8u;
    // 0x1702b8: 0x8e040084
    ctx->pc = 0x1702b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1702bc:
    // 0x1702bc: 0x50800004
    ctx->pc = 0x1702BCu;
    {
        const bool branch_taken_0x1702bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1702bc) {
            ctx->pc = 0x1702C0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x1702D0u;
            goto label_1702d0;
        }
    }
    ctx->pc = 0x1702C4u;
    // 0x1702c4: 0xc05bb52
    ctx->pc = 0x1702C4u;
    SET_GPR_U32(ctx, 31, 0x1702CCu);
    ctx->pc = 0x16ED48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_destroy_0x16ed48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702CCu; }
        else if (ctx->pc != 0x1702CCu) { ctx->pc = 0x1702CCu; }
    }
    if (ctx->pc != 0x1702CCu) { return; }
    ctx->pc = 0x1702CCu;
    // 0x1702cc: 0xae000000
    ctx->pc = 0x1702ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1702d0:
    // 0x1702d0: 0xdfbf0010
    ctx->pc = 0x1702d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1702d4: 0xdfb00000
    ctx->pc = 0x1702d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1702d8: 0x805a4f0
    ctx->pc = 0x1702D8u;
    ctx->pc = 0x1702DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1702E0u;
label_1702e0:
    // 0x1702e0: 0xdfbf0010
    ctx->pc = 0x1702e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1702e4: 0xdfb00000
    ctx->pc = 0x1702e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1702e8: 0x3e00008
    ctx->pc = 0x1702E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1702ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1702BCu: goto label_1702bc;
            case 0x1702D0u: goto label_1702d0;
            case 0x1702E0u: goto label_1702e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1702F0u;
}
