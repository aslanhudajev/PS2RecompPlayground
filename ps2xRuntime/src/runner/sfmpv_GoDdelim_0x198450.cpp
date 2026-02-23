#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_GoDdelim
// Address: 0x198450 - 0x19851c
void sfmpv_GoDdelim_0x198450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_GoDdelim");


    ctx->pc = 0x198450u;

    // 0x198450: 0x27bdffa0
    ctx->pc = 0x198450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x198454: 0xffb40040
    ctx->pc = 0x198454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x198458: 0xffb30030
    ctx->pc = 0x198458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19845c: 0x241400c0
    ctx->pc = 0x19845cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 192));
    // 0x198460: 0xffb20020
    ctx->pc = 0x198460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x198464: 0x24130040
    ctx->pc = 0x198464u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 64));
    // 0x198468: 0xffb10010
    ctx->pc = 0x198468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19846c: 0xc0902d
    ctx->pc = 0x19846cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198470: 0xffb00000
    ctx->pc = 0x198470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198474: 0xa0882d
    ctx->pc = 0x198474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198478: 0xffbf0050
    ctx->pc = 0x198478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19847c: 0x10000016
    ctx->pc = 0x19847Cu;
    {
        const bool branch_taken_0x19847c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198480u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19847c) {
            ctx->pc = 0x1984D8u;
            goto label_1984d8;
        }
    }
    ctx->pc = 0x198484u;
    // 0x198484: 0x0
    ctx->pc = 0x198484u;
    // NOP
label_198488:
    // 0x198488: 0x1654001d
    ctx->pc = 0x198488u;
    {
        const bool branch_taken_0x198488 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 20));
        ctx->pc = 0x19848Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x198488) {
            ctx->pc = 0x198500u;
            goto label_198500;
        }
    }
    ctx->pc = 0x198490u;
    // 0x198490: 0xc061610
    ctx->pc = 0x198490u;
    SET_GPR_U32(ctx, 31, 0x198498u);
    ctx->pc = 0x198494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198498u; }
        else if (ctx->pc != 0x198498u) { ctx->pc = 0x198498u; }
    }
    if (ctx->pc != 0x198498u) { return; }
    ctx->pc = 0x198498u;
    // 0x198498: 0x14530019
    ctx->pc = 0x198498u;
    {
        const bool branch_taken_0x198498 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x19849Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x198498) {
            ctx->pc = 0x198500u;
            goto label_198500;
        }
    }
    ctx->pc = 0x1984A0u;
    // 0x1984a0: 0x8e040000
    ctx->pc = 0x1984a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1984a4: 0xc066348
    ctx->pc = 0x1984A4u;
    SET_GPR_U32(ctx, 31, 0x1984ACu);
    ctx->pc = 0x1984A8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x198D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVD_IsShc_0x198d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984ACu; }
        else if (ctx->pc != 0x1984ACu) { ctx->pc = 0x1984ACu; }
    }
    if (ctx->pc != 0x1984ACu) { return; }
    ctx->pc = 0x1984ACu;
    // 0x1984ac: 0x14400014
    ctx->pc = 0x1984ACu;
    {
        const bool branch_taken_0x1984ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1984B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1984ac) {
            ctx->pc = 0x198500u;
            goto label_198500;
        }
    }
    ctx->pc = 0x1984B4u;
    // 0x1984b4: 0x8e220000
    ctx->pc = 0x1984b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1984b8: 0x8e030000
    ctx->pc = 0x1984b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1984bc: 0x24420004
    ctx->pc = 0x1984bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1984c0: 0xae220000
    ctx->pc = 0x1984c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1984c4: 0x24630004
    ctx->pc = 0x1984c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1984c8: 0xae030000
    ctx->pc = 0x1984c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1984cc: 0x8e020004
    ctx->pc = 0x1984ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1984d0: 0x2442fffc
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1984d4: 0xae020004
    ctx->pc = 0x1984d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1984d8:
    // 0x1984d8: 0x8e020004
    ctx->pc = 0x1984d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1984dc: 0x28420004
    ctx->pc = 0x1984dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1984e0: 0x14400006
    ctx->pc = 0x1984E0u;
    {
        const bool branch_taken_0x1984e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1984E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1984e0) {
            ctx->pc = 0x1984FCu;
            goto label_1984fc;
        }
    }
    ctx->pc = 0x1984E8u;
    // 0x1984e8: 0x220282d
    ctx->pc = 0x1984e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984ec: 0xc066148
    ctx->pc = 0x1984ECu;
    SET_GPR_U32(ctx, 31, 0x1984F4u);
    ctx->pc = 0x1984F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GoDdelimSub_0x198520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984F4u; }
        else if (ctx->pc != 0x1984F4u) { ctx->pc = 0x1984F4u; }
    }
    if (ctx->pc != 0x1984F4u) { return; }
    ctx->pc = 0x1984F4u;
    // 0x1984f4: 0x1440ffe4
    ctx->pc = 0x1984F4u;
    {
        const bool branch_taken_0x1984f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1984f4) {
            ctx->pc = 0x198488u;
            goto label_198488;
        }
    }
    ctx->pc = 0x1984FCu;
label_1984fc:
    // 0x1984fc: 0xdfbf0050
    ctx->pc = 0x1984fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_198500:
    // 0x198500: 0xdfb40040
    ctx->pc = 0x198500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198504: 0xdfb30030
    ctx->pc = 0x198504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198508: 0xdfb20020
    ctx->pc = 0x198508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19850c: 0xdfb10010
    ctx->pc = 0x19850cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198510: 0xdfb00000
    ctx->pc = 0x198510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198514: 0x3e00008
    ctx->pc = 0x198514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198518u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198488u: goto label_198488;
            case 0x1984D8u: goto label_1984d8;
            case 0x1984FCu: goto label_1984fc;
            case 0x198500u: goto label_198500;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19851Cu;
}
