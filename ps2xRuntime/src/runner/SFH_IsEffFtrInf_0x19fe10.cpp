#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_IsEffFtrInf
// Address: 0x19fe10 - 0x19fec0
void SFH_IsEffFtrInf_0x19fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_IsEffFtrInf");


    ctx->pc = 0x19fe10u;

    // 0x19fe10: 0x27bdffc0
    ctx->pc = 0x19fe10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19fe14: 0xffb20020
    ctx->pc = 0x19fe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19fe18: 0xffb10010
    ctx->pc = 0x19fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19fe1c: 0xc0902d
    ctx->pc = 0x19fe1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe20: 0xffb00000
    ctx->pc = 0x19fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fe24: 0x80882d
    ctx->pc = 0x19fe24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe28: 0xffbf0030
    ctx->pc = 0x19fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19fe2c: 0x8e22000c
    ctx->pc = 0x19fe2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19fe30: 0x2842006e
    ctx->pc = 0x19fe30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 110));
    // 0x19fe34: 0x14400009
    ctx->pc = 0x19FE34u;
    {
        const bool branch_taken_0x19fe34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19FE38u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 5), 255));
        if (branch_taken_0x19fe34) {
            ctx->pc = 0x19FE5Cu;
            goto label_19fe5c;
        }
    }
    ctx->pc = 0x19FE3Cu;
    // 0x19fe3c: 0xc0683c8
    ctx->pc = 0x19FE3Cu;
    SET_GPR_U32(ctx, 31, 0x19FE44u);
    ctx->pc = 0x19FE40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE44u; }
        else if (ctx->pc != 0x19FE44u) { ctx->pc = 0x19FE44u; }
    }
    if (ctx->pc != 0x19FE44u) { return; }
    ctx->pc = 0x19FE44u;
    // 0x19fe44: 0x40182d
    ctx->pc = 0x19fe44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe48: 0x240200c0
    ctx->pc = 0x19fe48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
    // 0x19fe4c: 0x10620005
    ctx->pc = 0x19FE4Cu;
    {
        const bool branch_taken_0x19fe4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19FE50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x19fe4c) {
            ctx->pc = 0x19FE64u;
            goto label_19fe64;
        }
    }
    ctx->pc = 0x19FE54u;
    // 0x19fe54: 0x1062000c
    ctx->pc = 0x19FE54u;
    {
        const bool branch_taken_0x19fe54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19FE58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fe54) {
            ctx->pc = 0x19FE88u;
            goto label_19fe88;
        }
    }
    ctx->pc = 0x19FE5Cu;
label_19fe5c:
    // 0x19fe5c: 0x10000012
    ctx->pc = 0x19FE5Cu;
    {
        const bool branch_taken_0x19fe5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FE60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fe5c) {
            ctx->pc = 0x19FEA8u;
            goto label_19fea8;
        }
    }
    ctx->pc = 0x19FE64u;
label_19fe64:
    // 0x19fe64: 0x220202d
    ctx->pc = 0x19fe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe68: 0xc0681d0
    ctx->pc = 0x19FE68u;
    SET_GPR_U32(ctx, 31, 0x19FE70u);
    ctx->pc = 0x19FE6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE70u; }
        else if (ctx->pc != 0x19FE70u) { ctx->pc = 0x19FE70u; }
    }
    if (ctx->pc != 0x19FE70u) { return; }
    ctx->pc = 0x19FE70u;
    // 0x19fe70: 0x1040fffa
    ctx->pc = 0x19FE70u;
    {
        const bool branch_taken_0x19fe70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FE74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fe70) {
            ctx->pc = 0x19FE5Cu;
            goto label_19fe5c;
        }
    }
    ctx->pc = 0x19FE78u;
    // 0x19fe78: 0xc0683a8
    ctx->pc = 0x19FE78u;
    SET_GPR_U32(ctx, 31, 0x19FE80u);
    ctx->pc = 0x19FE7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEnableAudFtr_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE80u; }
        else if (ctx->pc != 0x19FE80u) { ctx->pc = 0x19FE80u; }
    }
    if (ctx->pc != 0x19FE80u) { return; }
    ctx->pc = 0x19FE80u;
    // 0x19fe80: 0x10000008
    ctx->pc = 0x19FE80u;
    {
        const bool branch_taken_0x19fe80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FE84u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x19fe80) {
            ctx->pc = 0x19FEA4u;
            goto label_19fea4;
        }
    }
    ctx->pc = 0x19FE88u;
label_19fe88:
    // 0x19fe88: 0xc0681d0
    ctx->pc = 0x19FE88u;
    SET_GPR_U32(ctx, 31, 0x19FE90u);
    ctx->pc = 0x19FE8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE90u; }
        else if (ctx->pc != 0x19FE90u) { ctx->pc = 0x19FE90u; }
    }
    if (ctx->pc != 0x19FE90u) { return; }
    ctx->pc = 0x19FE90u;
    // 0x19fe90: 0x1040fff2
    ctx->pc = 0x19FE90u;
    {
        const bool branch_taken_0x19fe90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FE94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fe90) {
            ctx->pc = 0x19FE5Cu;
            goto label_19fe5c;
        }
    }
    ctx->pc = 0x19FE98u;
    // 0x19fe98: 0xc0683b8
    ctx->pc = 0x19FE98u;
    SET_GPR_U32(ctx, 31, 0x19FEA0u);
    ctx->pc = 0x19FE9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEnableVidFtr_0x1a0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FEA0u; }
        else if (ctx->pc != 0x19FEA0u) { ctx->pc = 0x19FEA0u; }
    }
    if (ctx->pc != 0x19FEA0u) { return; }
    ctx->pc = 0x19FEA0u;
    // 0x19fea0: 0xae420000
    ctx->pc = 0x19fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_19fea4:
    // 0x19fea4: 0x24020001
    ctx->pc = 0x19fea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19fea8:
    // 0x19fea8: 0xdfbf0030
    ctx->pc = 0x19fea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19feac: 0xdfb20020
    ctx->pc = 0x19feacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19feb0: 0xdfb10010
    ctx->pc = 0x19feb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19feb4: 0xdfb00000
    ctx->pc = 0x19feb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19feb8: 0x3e00008
    ctx->pc = 0x19FEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FEBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FE5Cu: goto label_19fe5c;
            case 0x19FE64u: goto label_19fe64;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FEA4u: goto label_19fea4;
            case 0x19FEA8u: goto label_19fea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FEC0u;
}
