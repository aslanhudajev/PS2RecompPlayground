#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitAllMoves
// Address: 0x292208 - 0x2922c4
void CritterInitAllMoves_0x292208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292208u;

    // 0x292208: 0x27bdff80
    ctx->pc = 0x292208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29220c: 0xffbf0070
    ctx->pc = 0x29220cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x292210: 0xffb60060
    ctx->pc = 0x292210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x292214: 0xffb50050
    ctx->pc = 0x292214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x292218: 0xffb40040
    ctx->pc = 0x292218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29221c: 0xffb30030
    ctx->pc = 0x29221cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x292220: 0xffb20020
    ctx->pc = 0x292220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x292224: 0xffb10010
    ctx->pc = 0x292224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x292228: 0xffb00000
    ctx->pc = 0x292228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29222c: 0x3c020036
    ctx->pc = 0x29222cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x292230: 0x8c42d5fc
    ctx->pc = 0x292230u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956540)));
    // 0x292234: 0x18400019
    ctx->pc = 0x292234u;
    {
        const bool branch_taken_0x292234 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292238u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292234) {
            ctx->pc = 0x29229Cu;
            goto label_29229c;
        }
    }
    ctx->pc = 0x29223Cu;
    // 0x29223c: 0x24160050
    ctx->pc = 0x29223cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 80));
    // 0x292240: 0x3c020036
    ctx->pc = 0x292240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x292244: 0x2455d600
    ctx->pc = 0x292244u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x292248: 0x3c140036
    ctx->pc = 0x292248u;
    SET_GPR_U32(ctx, 20, ((uint32_t)54 << 16));
    // 0x29224c: 0x2561018
    ctx->pc = 0x29224cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_292250:
    // 0x292250: 0x558821
    ctx->pc = 0x292250u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x292254: 0x8e220010
    ctx->pc = 0x292254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x292258: 0x1840000b
    ctx->pc = 0x292258u;
    {
        const bool branch_taken_0x292258 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29225Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292258) {
            ctx->pc = 0x292288u;
            goto label_292288;
        }
    }
    ctx->pc = 0x292260u;
    // 0x292260: 0x24130140
    ctx->pc = 0x292260u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 320));
    // 0x292264: 0x2131018
    ctx->pc = 0x292264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_292268:
    // 0x292268: 0x8e240014
    ctx->pc = 0x292268u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x29226c: 0xc0a47ea
    ctx->pc = 0x29226Cu;
    SET_GPR_U32(ctx, 31, 0x292274u);
    ctx->pc = 0x292270u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x291FA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitMoves_0x291fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292274u; }
    }
    if (ctx->pc != 0x292274u) { return; }
    ctx->pc = 0x292274u;
    // 0x292274: 0x26100001
    ctx->pc = 0x292274u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x292278: 0x8e220010
    ctx->pc = 0x292278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29227c: 0x202102a
    ctx->pc = 0x29227cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x292280: 0x1440fff9
    ctx->pc = 0x292280u;
    {
        const bool branch_taken_0x292280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x292284u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x292280) {
            ctx->pc = 0x292268u;
            goto label_292268;
        }
    }
    ctx->pc = 0x292288u;
label_292288:
    // 0x292288: 0x26520001
    ctx->pc = 0x292288u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x29228c: 0x8e82d5fc
    ctx->pc = 0x29228cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294956540)));
    // 0x292290: 0x242102a
    ctx->pc = 0x292290u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x292294: 0x1440ffee
    ctx->pc = 0x292294u;
    {
        const bool branch_taken_0x292294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x292298u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x292294) {
            ctx->pc = 0x292250u;
            goto label_292250;
        }
    }
    ctx->pc = 0x29229Cu;
label_29229c:
    // 0x29229c: 0xdfbf0070
    ctx->pc = 0x29229cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2922a0: 0xdfb60060
    ctx->pc = 0x2922a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2922a4: 0xdfb50050
    ctx->pc = 0x2922a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2922a8: 0xdfb40040
    ctx->pc = 0x2922a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2922ac: 0xdfb30030
    ctx->pc = 0x2922acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2922b0: 0xdfb20020
    ctx->pc = 0x2922b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2922b4: 0xdfb10010
    ctx->pc = 0x2922b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2922b8: 0xdfb00000
    ctx->pc = 0x2922b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2922bc: 0x3e00008
    ctx->pc = 0x2922BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2922C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292250u: goto label_292250;
            case 0x292268u: goto label_292268;
            case 0x292288u: goto label_292288;
            case 0x29229Cu: goto label_29229c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2922C4u;
}
