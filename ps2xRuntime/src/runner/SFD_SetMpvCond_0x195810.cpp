#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetMpvCond
// Address: 0x195810 - 0x1958ac
void SFD_SetMpvCond_0x195810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetMpvCond");


    ctx->pc = 0x195810u;

    // 0x195810: 0x27bdffc0
    ctx->pc = 0x195810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195814: 0xffb20020
    ctx->pc = 0x195814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x195818: 0xffb10010
    ctx->pc = 0x195818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19581c: 0xc0902d
    ctx->pc = 0x19581cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195820: 0xffb00000
    ctx->pc = 0x195820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195824: 0xa0882d
    ctx->pc = 0x195824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195828: 0xffbf0030
    ctx->pc = 0x195828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19582c: 0x80802d
    ctx->pc = 0x19582cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195830: 0x1200000b
    ctx->pc = 0x195830u;
    {
        const bool branch_taken_0x195830 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x195834u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195830) {
            ctx->pc = 0x195860u;
            goto label_195860;
        }
    }
    ctx->pc = 0x195838u;
    // 0x195838: 0xc064f1e
    ctx->pc = 0x195838u;
    SET_GPR_U32(ctx, 31, 0x195840u);
    ctx->pc = 0x19583Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195840u; }
        else if (ctx->pc != 0x195840u) { ctx->pc = 0x195840u; }
    }
    if (ctx->pc != 0x195840u) { return; }
    ctx->pc = 0x195840u;
    // 0x195840: 0x10400006
    ctx->pc = 0x195840u;
    {
        const bool branch_taken_0x195840 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195844u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195840) {
            ctx->pc = 0x19585Cu;
            goto label_19585c;
        }
    }
    ctx->pc = 0x195848u;
    // 0x195848: 0x3c05ff00
    ctx->pc = 0x195848u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19584c: 0xc064ea0
    ctx->pc = 0x19584Cu;
    SET_GPR_U32(ctx, 31, 0x195854u);
    ctx->pc = 0x195850u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 385));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195854u; }
        else if (ctx->pc != 0x195854u) { ctx->pc = 0x195854u; }
    }
    if (ctx->pc != 0x195854u) { return; }
    ctx->pc = 0x195854u;
    // 0x195854: 0x10000010
    ctx->pc = 0x195854u;
    {
        const bool branch_taken_0x195854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195858u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x195854) {
            ctx->pc = 0x195898u;
            goto label_195898;
        }
    }
    ctx->pc = 0x19585Cu;
label_19585c:
    // 0x19585c: 0x8e043740
    ctx->pc = 0x19585cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 14144)));
label_195860:
    // 0x195860: 0x3a220005
    ctx->pc = 0x195860u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), 5));
    // 0x195864: 0x302d
    ctx->pc = 0x195864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195868: 0x242300b
    ctx->pc = 0x195868u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 18));
    // 0x19586c: 0xc06210a
    ctx->pc = 0x19586Cu;
    SET_GPR_U32(ctx, 31, 0x195874u);
    ctx->pc = 0x195870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188428u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SetCond_0x188428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195874u; }
        else if (ctx->pc != 0x195874u) { ctx->pc = 0x195874u; }
    }
    if (ctx->pc != 0x195874u) { return; }
    ctx->pc = 0x195874u;
    // 0x195874: 0x10400006
    ctx->pc = 0x195874u;
    {
        const bool branch_taken_0x195874 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195878u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195874) {
            ctx->pc = 0x195890u;
            goto label_195890;
        }
    }
    ctx->pc = 0x19587Cu;
    // 0x19587c: 0x3c05ff00
    ctx->pc = 0x19587cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x195880: 0xc064ea0
    ctx->pc = 0x195880u;
    SET_GPR_U32(ctx, 31, 0x195888u);
    ctx->pc = 0x195884u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3858));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195888u; }
        else if (ctx->pc != 0x195888u) { ctx->pc = 0x195888u; }
    }
    if (ctx->pc != 0x195888u) { return; }
    ctx->pc = 0x195888u;
    // 0x195888: 0x10000003
    ctx->pc = 0x195888u;
    {
        const bool branch_taken_0x195888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19588Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x195888) {
            ctx->pc = 0x195898u;
            goto label_195898;
        }
    }
    ctx->pc = 0x195890u;
label_195890:
    // 0x195890: 0x102d
    ctx->pc = 0x195890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195894: 0xdfbf0030
    ctx->pc = 0x195894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_195898:
    // 0x195898: 0xdfb20020
    ctx->pc = 0x195898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19589c: 0xdfb10010
    ctx->pc = 0x19589cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1958a0: 0xdfb00000
    ctx->pc = 0x1958a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1958a4: 0x3e00008
    ctx->pc = 0x1958A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1958A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19585Cu: goto label_19585c;
            case 0x195860u: goto label_195860;
            case 0x195890u: goto label_195890;
            case 0x195898u: goto label_195898;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1958ACu;
}
