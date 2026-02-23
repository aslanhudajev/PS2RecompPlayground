#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_ExecSvrHndl
// Address: 0x18d330 - 0x18d3cc
void MWSFD_ExecSvrHndl_0x18d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_ExecSvrHndl");


    ctx->pc = 0x18d330u;

    // 0x18d330: 0x27bdffc0
    ctx->pc = 0x18d330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d334: 0xffb00000
    ctx->pc = 0x18d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d338: 0xffbf0030
    ctx->pc = 0x18d338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d33c: 0x80802d
    ctx->pc = 0x18d33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d340: 0xffb20020
    ctx->pc = 0x18d340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18d344: 0x16000006
    ctx->pc = 0x18D344u;
    {
        const bool branch_taken_0x18d344 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D348u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x18d344) {
            ctx->pc = 0x18D360u;
            goto label_18d360;
        }
    }
    ctx->pc = 0x18D34Cu;
    // 0x18d34c: 0x3c04002c
    ctx->pc = 0x18d34cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18d350: 0xc063dda
    ctx->pc = 0x18D350u;
    SET_GPR_U32(ctx, 31, 0x18D358u);
    ctx->pc = 0x18D354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954472));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D358u; }
        else if (ctx->pc != 0x18D358u) { ctx->pc = 0x18D358u; }
    }
    if (ctx->pc != 0x18D358u) { return; }
    ctx->pc = 0x18D358u;
    // 0x18d358: 0x10000016
    ctx->pc = 0x18D358u;
    {
        const bool branch_taken_0x18d358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D35Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d358) {
            ctx->pc = 0x18D3B4u;
            goto label_18d3b4;
        }
    }
    ctx->pc = 0x18D360u;
label_18d360:
    // 0x18d360: 0x3c020024
    ctx->pc = 0x18d360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18d364: 0x8c4328bc
    ctx->pc = 0x18d364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10428)));
    // 0x18d368: 0x24120001
    ctx->pc = 0x18d368u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d36c: 0x14720003
    ctx->pc = 0x18D36Cu;
    {
        const bool branch_taken_0x18d36c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 18));
        ctx->pc = 0x18D370u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        if (branch_taken_0x18d36c) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D374u;
    // 0x18d374: 0xc066b06
    ctx->pc = 0x18D374u;
    SET_GPR_U32(ctx, 31, 0x18D37Cu);
    ctx->pc = 0x18D378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19AC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_ExecOne_0x19ac18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D37Cu; }
        else if (ctx->pc != 0x18D37Cu) { ctx->pc = 0x18D37Cu; }
    }
    if (ctx->pc != 0x18D37Cu) { return; }
    ctx->pc = 0x18D37Cu;
label_18d37c:
    // 0x18d37c: 0x8e020004
    ctx->pc = 0x18d37cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18d380: 0x10400008
    ctx->pc = 0x18D380u;
    {
        const bool branch_taken_0x18d380 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18d380) {
            ctx->pc = 0x18D3A4u;
            goto label_18d3a4;
        }
    }
    ctx->pc = 0x18D388u;
    // 0x18d388: 0x8e020008
    ctx->pc = 0x18d388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18d38c: 0x54400003
    ctx->pc = 0x18D38Cu;
    {
        const bool branch_taken_0x18d38c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18d38c) {
            ctx->pc = 0x18D390u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 18));
            ctx->pc = 0x18D39Cu;
            goto label_18d39c;
        }
    }
    ctx->pc = 0x18D394u;
    // 0x18d394: 0x10000003
    ctx->pc = 0x18D394u;
    {
        const bool branch_taken_0x18d394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D398u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        if (branch_taken_0x18d394) {
            ctx->pc = 0x18D3A4u;
            goto label_18d3a4;
        }
    }
    ctx->pc = 0x18D39Cu;
label_18d39c:
    // 0x18d39c: 0xc063464
    ctx->pc = 0x18D39Cu;
    SET_GPR_U32(ctx, 31, 0x18D3A4u);
    ctx->pc = 0x18D3A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdExecDecSvrHndl_0x18d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D3A4u; }
        else if (ctx->pc != 0x18D3A4u) { ctx->pc = 0x18D3A4u; }
    }
    if (ctx->pc != 0x18D3A4u) { return; }
    ctx->pc = 0x18D3A4u;
label_18d3a4:
    // 0x18d3a4: 0xc066ae0
    ctx->pc = 0x18D3A4u;
    SET_GPR_U32(ctx, 31, 0x18D3ACu);
    ctx->pc = 0x18D3A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19AB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_IsHnSvrWait_0x19ab80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D3ACu; }
        else if (ctx->pc != 0x18D3ACu) { ctx->pc = 0x18D3ACu; }
    }
    if (ctx->pc != 0x18D3ACu) { return; }
    ctx->pc = 0x18D3ACu;
    // 0x18d3ac: 0x38420001
    ctx->pc = 0x18d3acu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x18d3b0: 0x2102b
    ctx->pc = 0x18d3b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_18d3b4:
    // 0x18d3b4: 0xdfbf0030
    ctx->pc = 0x18d3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d3b8: 0xdfb20020
    ctx->pc = 0x18d3b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d3bc: 0xdfb10010
    ctx->pc = 0x18d3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d3c0: 0xdfb00000
    ctx->pc = 0x18d3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d3c4: 0x3e00008
    ctx->pc = 0x18D3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D3C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D360u: goto label_18d360;
            case 0x18D37Cu: goto label_18d37c;
            case 0x18D39Cu: goto label_18d39c;
            case 0x18D3A4u: goto label_18d3a4;
            case 0x18D3B4u: goto label_18d3b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D3CCu;
}
