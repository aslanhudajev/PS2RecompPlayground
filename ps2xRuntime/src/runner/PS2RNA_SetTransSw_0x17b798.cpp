#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_SetTransSw
// Address: 0x17b798 - 0x17b89c
void PS2RNA_SetTransSw_0x17b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_SetTransSw");


    ctx->pc = 0x17b798u;

    // 0x17b798: 0x27bdffa0
    ctx->pc = 0x17b798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b79c: 0x24020001
    ctx->pc = 0x17b79cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b7a0: 0xffb30030
    ctx->pc = 0x17b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17b7a4: 0xffbf0050
    ctx->pc = 0x17b7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17b7a8: 0x80982d
    ctx->pc = 0x17b7a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b7ac: 0xffb20020
    ctx->pc = 0x17b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17b7b0: 0xffb10010
    ctx->pc = 0x17b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17b7b4: 0xffb00000
    ctx->pc = 0x17b7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b7b8: 0xffb40040
    ctx->pc = 0x17b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17b7bc: 0x82740026
    ctx->pc = 0x17b7bcu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x17b7c0: 0x14a20011
    ctx->pc = 0x17B7C0u;
    {
        const bool branch_taken_0x17b7c0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x17B7C4u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x17b7c0) {
            ctx->pc = 0x17B808u;
            goto label_17b808;
        }
    }
    ctx->pc = 0x17B7C8u;
    // 0x17b7c8: 0x8e620004
    ctx->pc = 0x17b7c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17b7cc: 0x1840002b
    ctx->pc = 0x17B7CCu;
    {
        const bool branch_taken_0x17b7cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17B7D0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b7cc) {
            ctx->pc = 0x17B87Cu;
            goto label_17b87c;
        }
    }
    ctx->pc = 0x17B7D4u;
    // 0x17b7d4: 0x26720010
    ctx->pc = 0x17b7d4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 16));
    // 0x17b7d8: 0x101080
    ctx->pc = 0x17b7d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x17b7dc: 0x0
    ctx->pc = 0x17b7dcu;
    // NOP
label_17b7e0:
    // 0x17b7e0: 0x2421021
    ctx->pc = 0x17b7e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17b7e4: 0x26100001
    ctx->pc = 0x17b7e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x17b7e8: 0xc05dad8
    ctx->pc = 0x17B7E8u;
    SET_GPR_U32(ctx, 31, 0x17B7F0u);
    ctx->pc = 0x17B7ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x176B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTR_Start_0x176b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7F0u; }
        else if (ctx->pc != 0x17B7F0u) { ctx->pc = 0x17B7F0u; }
    }
    if (ctx->pc != 0x17B7F0u) { return; }
    ctx->pc = 0x17B7F0u;
    // 0x17b7f0: 0x8e620004
    ctx->pc = 0x17b7f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17b7f4: 0x202102a
    ctx->pc = 0x17b7f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x17b7f8: 0x1440fff9
    ctx->pc = 0x17B7F8u;
    {
        const bool branch_taken_0x17b7f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B7FCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x17b7f8) {
            ctx->pc = 0x17B7E0u;
            goto label_17b7e0;
        }
    }
    ctx->pc = 0x17B800u;
    // 0x17b800: 0x1000001f
    ctx->pc = 0x17B800u;
    {
        const bool branch_taken_0x17b800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B804u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x17b800) {
            ctx->pc = 0x17B880u;
            goto label_17b880;
        }
    }
    ctx->pc = 0x17B808u;
label_17b808:
    // 0x17b808: 0x1a80001c
    ctx->pc = 0x17B808u;
    {
        const bool branch_taken_0x17b808 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x17B80Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17b808) {
            ctx->pc = 0x17B87Cu;
            goto label_17b87c;
        }
    }
    ctx->pc = 0x17B810u;
    // 0x17b810: 0x26720010
    ctx->pc = 0x17b810u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 16));
    // 0x17b814: 0x0
    ctx->pc = 0x17b814u;
    // NOP
label_17b818:
    // 0x17b818: 0x108880
    ctx->pc = 0x17b818u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 16), 2));
    // 0x17b81c: 0x24050001
    ctx->pc = 0x17b81cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b820: 0x2511021
    ctx->pc = 0x17b820u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x17b824: 0x8c430000
    ctx->pc = 0x17b824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b828: 0x80640002
    ctx->pc = 0x17b828u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17b82c: 0x14850009
    ctx->pc = 0x17B82Cu;
    {
        const bool branch_taken_0x17b82c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        ctx->pc = 0x17B830u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x17b82c) {
            ctx->pc = 0x17B854u;
            goto label_17b854;
        }
    }
    ctx->pc = 0x17B834u;
    // 0x17b834: 0x2511021
    ctx->pc = 0x17b834u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_17b838:
    // 0x17b838: 0x8c430000
    ctx->pc = 0x17b838u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b83c: 0xc055320
    ctx->pc = 0x17B83Cu;
    SET_GPR_U32(ctx, 31, 0x17B844u);
    ctx->pc = 0x17B840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->pc = 0x154C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x154c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B844u; }
        else if (ctx->pc != 0x17B844u) { ctx->pc = 0x17B844u; }
    }
    if (ctx->pc != 0x17B844u) { return; }
    ctx->pc = 0x17B844u;
    // 0x17b844: 0x441fffc
    ctx->pc = 0x17B844u;
    {
        const bool branch_taken_0x17b844 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17B848u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        if (branch_taken_0x17b844) {
            ctx->pc = 0x17B838u;
            goto label_17b838;
        }
    }
    ctx->pc = 0x17B84Cu;
    // 0x17b84c: 0x10000002
    ctx->pc = 0x17B84Cu;
    {
        const bool branch_taken_0x17b84c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17B850u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        if (branch_taken_0x17b84c) {
            ctx->pc = 0x17B858u;
            goto label_17b858;
        }
    }
    ctx->pc = 0x17B854u;
label_17b854:
    // 0x17b854: 0x2511821
    ctx->pc = 0x17b854u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_17b858:
    // 0x17b858: 0x8c620000
    ctx->pc = 0x17b858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b85c: 0xa0400002
    ctx->pc = 0x17b85cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b860: 0xc05dadc
    ctx->pc = 0x17B860u;
    SET_GPR_U32(ctx, 31, 0x17B868u);
    ctx->pc = 0x17B864u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x176B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTR_Stop_0x176b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B868u; }
        else if (ctx->pc != 0x17B868u) { ctx->pc = 0x17B868u; }
    }
    if (ctx->pc != 0x17B868u) { return; }
    ctx->pc = 0x17B868u;
    // 0x17b868: 0x24030001
    ctx->pc = 0x17b868u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b86c: 0xa2600048
    ctx->pc = 0x17b86cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b870: 0x214102a
    ctx->pc = 0x17b870u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 20)));
    // 0x17b874: 0x1440ffe8
    ctx->pc = 0x17B874u;
    {
        const bool branch_taken_0x17b874 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B878u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 73), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x17b874) {
            ctx->pc = 0x17B818u;
            goto label_17b818;
        }
    }
    ctx->pc = 0x17B87Cu;
label_17b87c:
    // 0x17b87c: 0xdfbf0050
    ctx->pc = 0x17b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17b880:
    // 0x17b880: 0xdfb40040
    ctx->pc = 0x17b880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b884: 0xdfb30030
    ctx->pc = 0x17b884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b888: 0xdfb20020
    ctx->pc = 0x17b888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b88c: 0xdfb10010
    ctx->pc = 0x17b88cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b890: 0xdfb00000
    ctx->pc = 0x17b890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b894: 0x3e00008
    ctx->pc = 0x17B894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B898u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B7E0u: goto label_17b7e0;
            case 0x17B808u: goto label_17b808;
            case 0x17B818u: goto label_17b818;
            case 0x17B838u: goto label_17b838;
            case 0x17B854u: goto label_17b854;
            case 0x17B858u: goto label_17b858;
            case 0x17B87Cu: goto label_17b87c;
            case 0x17B880u: goto label_17b880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B89Cu;
}
