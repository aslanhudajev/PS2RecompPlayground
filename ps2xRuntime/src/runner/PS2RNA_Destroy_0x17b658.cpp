#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_Destroy
// Address: 0x17b658 - 0x17b72c
void PS2RNA_Destroy_0x17b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_Destroy");


    ctx->pc = 0x17b658u;

    // 0x17b658: 0x27bdffb0
    ctx->pc = 0x17b658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b65c: 0xffb10020
    ctx->pc = 0x17b65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x17b660: 0xffb00010
    ctx->pc = 0x17b660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17b664: 0x80882d
    ctx->pc = 0x17b664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b668: 0xffbf0040
    ctx->pc = 0x17b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17b66c: 0xffb20030
    ctx->pc = 0x17b66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17b670: 0x8e230004
    ctx->pc = 0x17b670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17b674: 0x1860000e
    ctx->pc = 0x17B674u;
    {
        const bool branch_taken_0x17b674 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17B678u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b674) {
            ctx->pc = 0x17B6B0u;
            goto label_17b6b0;
        }
    }
    ctx->pc = 0x17B67Cu;
    // 0x17b67c: 0x26320010
    ctx->pc = 0x17b67cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 16));
    // 0x17b680: 0x101080
    ctx->pc = 0x17b680u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x17b684: 0x0
    ctx->pc = 0x17b684u;
    // NOP
label_17b688:
    // 0x17b688: 0x2421021
    ctx->pc = 0x17b688u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17b68c: 0x8c440000
    ctx->pc = 0x17b68cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b690: 0x10800004
    ctx->pc = 0x17B690u;
    {
        const bool branch_taken_0x17b690 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B694u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x17b690) {
            ctx->pc = 0x17B6A4u;
            goto label_17b6a4;
        }
    }
    ctx->pc = 0x17B698u;
    // 0x17b698: 0xc05dace
    ctx->pc = 0x17B698u;
    SET_GPR_U32(ctx, 31, 0x17B6A0u);
    ctx->pc = 0x176B38u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTR_Destroy_0x176b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6A0u; }
        else if (ctx->pc != 0x17B6A0u) { ctx->pc = 0x17B6A0u; }
    }
    if (ctx->pc != 0x17B6A0u) { return; }
    ctx->pc = 0x17B6A0u;
    // 0x17b6a0: 0x8e230004
    ctx->pc = 0x17b6a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17b6a4:
    // 0x17b6a4: 0x203102a
    ctx->pc = 0x17b6a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x17b6a8: 0x1440fff7
    ctx->pc = 0x17B6A8u;
    {
        const bool branch_taken_0x17b6a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B6ACu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x17b6a8) {
            ctx->pc = 0x17B688u;
            goto label_17b688;
        }
    }
    ctx->pc = 0x17B6B0u;
label_17b6b0:
    // 0x17b6b0: 0x8e220020
    ctx->pc = 0x17b6b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x17b6b4: 0x24040009
    ctx->pc = 0x17b6b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x17b6b8: 0x3a0282d
    ctx->pc = 0x17b6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6bc: 0x24060001
    ctx->pc = 0x17b6bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b6c0: 0xafa20000
    ctx->pc = 0x17b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17b6c4: 0x382d
    ctx->pc = 0x17b6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6c8: 0x402d
    ctx->pc = 0x17b6c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b6cc: 0xc05dcd2
    ctx->pc = 0x17B6CCu;
    SET_GPR_U32(ctx, 31, 0x17B6D4u);
    ctx->pc = 0x17B6D0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6D4u; }
        else if (ctx->pc != 0x17B6D4u) { ctx->pc = 0x17B6D4u; }
    }
    if (ctx->pc != 0x17B6D4u) { return; }
    ctx->pc = 0x17B6D4u;
    // 0x17b6d4: 0x8e230004
    ctx->pc = 0x17b6d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17b6d8: 0x1860000d
    ctx->pc = 0x17B6D8u;
    {
        const bool branch_taken_0x17b6d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17B6DCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x17b6d8) {
            ctx->pc = 0x17B710u;
            goto label_17b710;
        }
    }
    ctx->pc = 0x17B6E0u;
    // 0x17b6e0: 0x101080
    ctx->pc = 0x17b6e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x17b6e4: 0x0
    ctx->pc = 0x17b6e4u;
    // NOP
label_17b6e8:
    // 0x17b6e8: 0x2421021
    ctx->pc = 0x17b6e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17b6ec: 0x8c440000
    ctx->pc = 0x17b6ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b6f0: 0x10800004
    ctx->pc = 0x17B6F0u;
    {
        const bool branch_taken_0x17b6f0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B6F4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x17b6f0) {
            ctx->pc = 0x17B704u;
            goto label_17b704;
        }
    }
    ctx->pc = 0x17B6F8u;
    // 0x17b6f8: 0xc05ec18
    ctx->pc = 0x17B6F8u;
    SET_GPR_U32(ctx, 31, 0x17B700u);
    ctx->pc = 0x17B060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2rna_release_psj_0x17b060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B700u; }
        else if (ctx->pc != 0x17B700u) { ctx->pc = 0x17B700u; }
    }
    if (ctx->pc != 0x17B700u) { return; }
    ctx->pc = 0x17B700u;
    // 0x17b700: 0x8e230004
    ctx->pc = 0x17b700u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17b704:
    // 0x17b704: 0x203102a
    ctx->pc = 0x17b704u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x17b708: 0x1440fff7
    ctx->pc = 0x17B708u;
    {
        const bool branch_taken_0x17b708 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B70Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x17b708) {
            ctx->pc = 0x17B6E8u;
            goto label_17b6e8;
        }
    }
    ctx->pc = 0x17B710u;
label_17b710:
    // 0x17b710: 0xa2200000
    ctx->pc = 0x17b710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b714: 0xdfbf0040
    ctx->pc = 0x17b714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b718: 0xdfb20030
    ctx->pc = 0x17b718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b71c: 0xdfb10020
    ctx->pc = 0x17b71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b720: 0xdfb00010
    ctx->pc = 0x17b720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b724: 0x3e00008
    ctx->pc = 0x17B724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B688u: goto label_17b688;
            case 0x17B6A4u: goto label_17b6a4;
            case 0x17B6B0u: goto label_17b6b0;
            case 0x17B6E8u: goto label_17b6e8;
            case 0x17B704u: goto label_17b704;
            case 0x17B710u: goto label_17b710;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B72Cu;
}
