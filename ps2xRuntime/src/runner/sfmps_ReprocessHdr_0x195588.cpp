#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_ReprocessHdr
// Address: 0x195588 - 0x19563c
void sfmps_ReprocessHdr_0x195588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_ReprocessHdr");


    ctx->pc = 0x195588u;

    // 0x195588: 0x27bdff80
    ctx->pc = 0x195588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19558c: 0xffb50060
    ctx->pc = 0x19558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x195590: 0x3a0382d
    ctx->pc = 0x195590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195594: 0xffb40050
    ctx->pc = 0x195594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x195598: 0x80a82d
    ctx->pc = 0x195598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19559c: 0xffb20030
    ctx->pc = 0x19559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1955a0: 0xc0a02d
    ctx->pc = 0x1955a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955a4: 0xffb10020
    ctx->pc = 0x1955a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1955a8: 0x27b20004
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 4));
    // 0x1955ac: 0xffb00010
    ctx->pc = 0x1955acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1955b0: 0x240402d
    ctx->pc = 0x1955b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955b4: 0xffbf0070
    ctx->pc = 0x1955b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1955b8: 0x26900024
    ctx->pc = 0x1955b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 36));
    // 0x1955bc: 0xffb30040
    ctx->pc = 0x1955bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1955c0: 0x8cb30000
    ctx->pc = 0x1955c0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1955c4: 0x8e060160
    ctx->pc = 0x1955c4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1955c8: 0x200282d
    ctx->pc = 0x1955c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955cc: 0xc060228
    ctx->pc = 0x1955CCu;
    SET_GPR_U32(ctx, 31, 0x1955D4u);
    ctx->pc = 0x1955D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1808A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_DecHd_0x1808a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955D4u; }
        else if (ctx->pc != 0x1955D4u) { ctx->pc = 0x1955D4u; }
    }
    if (ctx->pc != 0x1955D4u) { return; }
    ctx->pc = 0x1955D4u;
    // 0x1955d4: 0x8e060164
    ctx->pc = 0x1955d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1955d8: 0x40882d
    ctx->pc = 0x1955d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955dc: 0x260202d
    ctx->pc = 0x1955dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955e0: 0x268500d4
    ctx->pc = 0x1955e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 212));
    // 0x1955e4: 0x240402d
    ctx->pc = 0x1955e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1955e8: 0xc060228
    ctx->pc = 0x1955E8u;
    SET_GPR_U32(ctx, 31, 0x1955F0u);
    ctx->pc = 0x1955ECu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1808A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_DecHd_0x1808a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1955F0u; }
        else if (ctx->pc != 0x1955F0u) { ctx->pc = 0x1955F0u; }
    }
    if (ctx->pc != 0x1955F0u) { return; }
    ctx->pc = 0x1955F0u;
    // 0x1955f0: 0x16200003
    ctx->pc = 0x1955F0u;
    {
        const bool branch_taken_0x1955f0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1955f0) {
            ctx->pc = 0x195600u;
            goto label_195600;
        }
    }
    ctx->pc = 0x1955F8u;
    // 0x1955f8: 0x10400007
    ctx->pc = 0x1955F8u;
    {
        const bool branch_taken_0x1955f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1955FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1955f8) {
            ctx->pc = 0x195618u;
            goto label_195618;
        }
    }
    ctx->pc = 0x195600u;
label_195600:
    // 0x195600: 0x3c05ff00
    ctx->pc = 0x195600u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x195604: 0x2a0202d
    ctx->pc = 0x195604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195608: 0xc064ea0
    ctx->pc = 0x195608u;
    SET_GPR_U32(ctx, 31, 0x195610u);
    ctx->pc = 0x19560Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3341));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195610u; }
        else if (ctx->pc != 0x195610u) { ctx->pc = 0x195610u; }
    }
    if (ctx->pc != 0x195610u) { return; }
    ctx->pc = 0x195610u;
    // 0x195610: 0x10000002
    ctx->pc = 0x195610u;
    {
        const bool branch_taken_0x195610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195614u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x195610) {
            ctx->pc = 0x19561Cu;
            goto label_19561c;
        }
    }
    ctx->pc = 0x195618u;
label_195618:
    // 0x195618: 0xdfbf0070
    ctx->pc = 0x195618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19561c:
    // 0x19561c: 0xdfb50060
    ctx->pc = 0x19561cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195620: 0xdfb40050
    ctx->pc = 0x195620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195624: 0xdfb30040
    ctx->pc = 0x195624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195628: 0xdfb20030
    ctx->pc = 0x195628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19562c: 0xdfb10020
    ctx->pc = 0x19562cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195630: 0xdfb00010
    ctx->pc = 0x195630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195634: 0x3e00008
    ctx->pc = 0x195634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195600u: goto label_195600;
            case 0x195618u: goto label_195618;
            case 0x19561Cu: goto label_19561c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19563Cu;
}
