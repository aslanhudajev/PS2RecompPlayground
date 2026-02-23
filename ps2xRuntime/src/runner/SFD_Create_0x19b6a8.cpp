#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_Create
// Address: 0x19b6a8 - 0x19b718
void SFD_Create_0x19b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_Create");


    ctx->pc = 0x19b6a8u;

    // 0x19b6a8: 0x27bdffd0
    ctx->pc = 0x19b6a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b6ac: 0xffb00000
    ctx->pc = 0x19b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b6b0: 0xffb10010
    ctx->pc = 0x19b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19b6b4: 0x80802d
    ctx->pc = 0x19b6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6b8: 0xffbf0020
    ctx->pc = 0x19b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b6bc: 0xc066dc6
    ctx->pc = 0x19B6BCu;
    SET_GPR_U32(ctx, 31, 0x19B6C4u);
    ctx->pc = 0x19B6C0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B718u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_ChkCrePara_0x19b718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6C4u; }
        else if (ctx->pc != 0x19B6C4u) { ctx->pc = 0x19B6C4u; }
    }
    if (ctx->pc != 0x19B6C4u) { return; }
    ctx->pc = 0x19B6C4u;
    // 0x19b6c4: 0x10400006
    ctx->pc = 0x19B6C4u;
    {
        const bool branch_taken_0x19b6c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B6C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b6c4) {
            ctx->pc = 0x19B6E0u;
            goto label_19b6e0;
        }
    }
    ctx->pc = 0x19B6CCu;
    // 0x19b6cc: 0x3c05ff00
    ctx->pc = 0x19b6ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19b6d0: 0xc064ea0
    ctx->pc = 0x19B6D0u;
    SET_GPR_U32(ctx, 31, 0x19B6D8u);
    ctx->pc = 0x19B6D4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 515));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6D8u; }
        else if (ctx->pc != 0x19B6D8u) { ctx->pc = 0x19B6D8u; }
    }
    if (ctx->pc != 0x19B6D8u) { return; }
    ctx->pc = 0x19B6D8u;
    // 0x19b6d8: 0x1000000a
    ctx->pc = 0x19B6D8u;
    {
        const bool branch_taken_0x19b6d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B6DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b6d8) {
            ctx->pc = 0x19B704u;
            goto label_19b704;
        }
    }
    ctx->pc = 0x19B6E0u;
label_19b6e0:
    // 0x19b6e0: 0xc066dcc
    ctx->pc = 0x19B6E0u;
    SET_GPR_U32(ctx, 31, 0x19B6E8u);
    ctx->pc = 0x19B730u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_SearchFreeHn_0x19b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B6E8u; }
        else if (ctx->pc != 0x19B6E8u) { ctx->pc = 0x19B6E8u; }
    }
    if (ctx->pc != 0x19B6E8u) { return; }
    ctx->pc = 0x19B6E8u;
    // 0x19b6e8: 0x14400003
    ctx->pc = 0x19B6E8u;
    {
        const bool branch_taken_0x19b6e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B6ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b6e8) {
            ctx->pc = 0x19B6F8u;
            goto label_19b6f8;
        }
    }
    ctx->pc = 0x19B6F0u;
    // 0x19b6f0: 0x10000004
    ctx->pc = 0x19B6F0u;
    {
        const bool branch_taken_0x19b6f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B6F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b6f0) {
            ctx->pc = 0x19B704u;
            goto label_19b704;
        }
    }
    ctx->pc = 0x19B6F8u;
label_19b6f8:
    // 0x19b6f8: 0x200282d
    ctx->pc = 0x19b6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6fc: 0xc066ddc
    ctx->pc = 0x19B6FCu;
    SET_GPR_U32(ctx, 31, 0x19B704u);
    ctx->pc = 0x19B700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_InitHn_0x19b770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B704u; }
        else if (ctx->pc != 0x19B704u) { ctx->pc = 0x19B704u; }
    }
    if (ctx->pc != 0x19B704u) { return; }
    ctx->pc = 0x19B704u;
label_19b704:
    // 0x19b704: 0xdfbf0020
    ctx->pc = 0x19b704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b708: 0xdfb10010
    ctx->pc = 0x19b708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b70c: 0xdfb00000
    ctx->pc = 0x19b70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b710: 0x3e00008
    ctx->pc = 0x19B710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B714u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B6E0u: goto label_19b6e0;
            case 0x19B6F8u: goto label_19b6f8;
            case 0x19B704u: goto label_19b704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B718u;
}
