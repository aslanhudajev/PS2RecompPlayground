#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdExecDecSvrHndl
// Address: 0x18d190 - 0x18d244
void mwSfdExecDecSvrHndl_0x18d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdExecDecSvrHndl");


    ctx->pc = 0x18d190u;

label_18d190:
    // 0x18d190: 0x27bdffd0
    ctx->pc = 0x18d190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_18d194:
    // 0x18d194: 0xffb00000
    ctx->pc = 0x18d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18d198:
    // 0x18d198: 0xffbf0020
    ctx->pc = 0x18d198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18d19c:
    // 0x18d19c: 0x80802d
    ctx->pc = 0x18d19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d1a0:
    // 0x18d1a0: 0xffb10010
    ctx->pc = 0x18d1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_18d1a4:
    // 0x18d1a4: 0x8e030008
    ctx->pc = 0x18d1a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_18d1a8:
    // 0x18d1a8: 0x2c620005
    ctx->pc = 0x18d1a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_18d1ac:
    // 0x18d1ac: 0x1040000d
label_18d1b0:
    if (ctx->pc == 0x18D1B0u) {
        ctx->pc = 0x18D1B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        ctx->pc = 0x18D1B4u;
        goto label_18d1b4;
    }
    ctx->pc = 0x18D1ACu;
    {
        const bool branch_taken_0x18d1ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D1B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x18d1ac) {
            ctx->pc = 0x18D1E4u;
            goto label_18d1e4;
        }
    }
    ctx->pc = 0x18D1B4u;
label_18d1b4:
    // 0x18d1b4: 0x31880
    ctx->pc = 0x18d1b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_18d1b8:
    // 0x18d1b8: 0x2442cdd0
    ctx->pc = 0x18d1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954448));
label_18d1bc:
    // 0x18d1bc: 0x621821
    ctx->pc = 0x18d1bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18d1c0:
    // 0x18d1c0: 0x8c640000
    ctx->pc = 0x18d1c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18d1c4:
    // 0x18d1c4: 0x800008
label_18d1c8:
    if (ctx->pc == 0x18D1C8u) {
        ctx->pc = 0x18D1CCu;
        goto label_18d1cc;
    }
    ctx->pc = 0x18D1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D190u: goto label_18d190;
            case 0x18D194u: goto label_18d194;
            case 0x18D198u: goto label_18d198;
            case 0x18D19Cu: goto label_18d19c;
            case 0x18D1A0u: goto label_18d1a0;
            case 0x18D1A4u: goto label_18d1a4;
            case 0x18D1A8u: goto label_18d1a8;
            case 0x18D1ACu: goto label_18d1ac;
            case 0x18D1B0u: goto label_18d1b0;
            case 0x18D1B4u: goto label_18d1b4;
            case 0x18D1B8u: goto label_18d1b8;
            case 0x18D1BCu: goto label_18d1bc;
            case 0x18D1C0u: goto label_18d1c0;
            case 0x18D1C4u: goto label_18d1c4;
            case 0x18D1C8u: goto label_18d1c8;
            case 0x18D1CCu: goto label_18d1cc;
            case 0x18D1D0u: goto label_18d1d0;
            case 0x18D1D4u: goto label_18d1d4;
            case 0x18D1D8u: goto label_18d1d8;
            case 0x18D1DCu: goto label_18d1dc;
            case 0x18D1E0u: goto label_18d1e0;
            case 0x18D1E4u: goto label_18d1e4;
            case 0x18D1E8u: goto label_18d1e8;
            case 0x18D1ECu: goto label_18d1ec;
            case 0x18D1F0u: goto label_18d1f0;
            case 0x18D1F4u: goto label_18d1f4;
            case 0x18D1F8u: goto label_18d1f8;
            case 0x18D1FCu: goto label_18d1fc;
            case 0x18D200u: goto label_18d200;
            case 0x18D204u: goto label_18d204;
            case 0x18D208u: goto label_18d208;
            case 0x18D20Cu: goto label_18d20c;
            case 0x18D210u: goto label_18d210;
            case 0x18D214u: goto label_18d214;
            case 0x18D218u: goto label_18d218;
            case 0x18D21Cu: goto label_18d21c;
            case 0x18D220u: goto label_18d220;
            case 0x18D224u: goto label_18d224;
            case 0x18D228u: goto label_18d228;
            case 0x18D22Cu: goto label_18d22c;
            case 0x18D230u: goto label_18d230;
            case 0x18D234u: goto label_18d234;
            case 0x18D238u: goto label_18d238;
            case 0x18D23Cu: goto label_18d23c;
            case 0x18D240u: goto label_18d240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D1CCu;
label_18d1cc:
    // 0x18d1cc: 0xc063424
label_18d1d0:
    if (ctx->pc == 0x18D1D0u) {
        ctx->pc = 0x18D1D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D1D4u;
        goto label_18d1d4;
    }
    ctx->pc = 0x18D1CCu;
    SET_GPR_U32(ctx, 31, 0x18D1D4u);
    ctx->pc = 0x18D1D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18D090u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwlSfdExecDecSvrPrep_0x18d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D1D4u; }
        else if (ctx->pc != 0x18D1D4u) { ctx->pc = 0x18D1D4u; }
    }
    if (ctx->pc != 0x18D1D4u) { return; }
    ctx->pc = 0x18D1D4u;
label_18d1d4:
    // 0x18d1d4: 0x10000004
label_18d1d8:
    if (ctx->pc == 0x18D1D8u) {
        ctx->pc = 0x18D1D8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x18D1DCu;
        goto label_18d1dc;
    }
    ctx->pc = 0x18D1D4u;
    {
        const bool branch_taken_0x18d1d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D1D8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        if (branch_taken_0x18d1d4) {
            ctx->pc = 0x18D1E8u;
            goto label_18d1e8;
        }
    }
    ctx->pc = 0x18D1DCu;
label_18d1dc:
    // 0x18d1dc: 0xc06343a
label_18d1e0:
    if (ctx->pc == 0x18D1E0u) {
        ctx->pc = 0x18D1E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D1E4u;
        goto label_18d1e4;
    }
    ctx->pc = 0x18D1DCu;
    SET_GPR_U32(ctx, 31, 0x18D1E4u);
    ctx->pc = 0x18D1E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18D0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwlSfdExecDecSvrPlaying_0x18d0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D1E4u; }
        else if (ctx->pc != 0x18D1E4u) { ctx->pc = 0x18D1E4u; }
    }
    if (ctx->pc != 0x18D1E4u) { return; }
    ctx->pc = 0x18D1E4u;
label_18d1e4:
    // 0x18d1e4: 0x8e040034
    ctx->pc = 0x18d1e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_18d1e8:
    // 0x18d1e8: 0x10800011
label_18d1ec:
    if (ctx->pc == 0x18D1ECu) {
        ctx->pc = 0x18D1ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x18D1F0u;
        goto label_18d1f0;
    }
    ctx->pc = 0x18D1E8u;
    {
        const bool branch_taken_0x18d1e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D1ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18d1e8) {
            ctx->pc = 0x18D230u;
            goto label_18d230;
        }
    }
    ctx->pc = 0x18D1F0u;
label_18d1f0:
    // 0x18d1f0: 0xc063e6e
label_18d1f4:
    if (ctx->pc == 0x18D1F4u) {
        ctx->pc = 0x18D1F8u;
        goto label_18d1f8;
    }
    ctx->pc = 0x18D1F0u;
    SET_GPR_U32(ctx, 31, 0x18D1F8u);
    ctx->pc = 0x18F9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_IsFsStatErr_0x18f9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D1F8u; }
        else if (ctx->pc != 0x18D1F8u) { ctx->pc = 0x18D1F8u; }
    }
    if (ctx->pc != 0x18D1F8u) { return; }
    ctx->pc = 0x18D1F8u;
label_18d1f8:
    // 0x18d1f8: 0x1040000d
label_18d1fc:
    if (ctx->pc == 0x18D1FCu) {
        ctx->pc = 0x18D1FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x18D200u;
        goto label_18d200;
    }
    ctx->pc = 0x18D1F8u;
    {
        const bool branch_taken_0x18d1f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D1FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18d1f8) {
            ctx->pc = 0x18D230u;
            goto label_18d230;
        }
    }
    ctx->pc = 0x18D200u;
label_18d200:
    // 0x18d200: 0xc063188
label_18d204:
    if (ctx->pc == 0x18D204u) {
        ctx->pc = 0x18D204u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->pc = 0x18D208u;
        goto label_18d208;
    }
    ctx->pc = 0x18D200u;
    SET_GPR_U32(ctx, 31, 0x18D208u);
    ctx->pc = 0x18D204u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x18C620u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLock_0x18c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D208u; }
        else if (ctx->pc != 0x18D208u) { ctx->pc = 0x18D208u; }
    }
    if (ctx->pc != 0x18D208u) { return; }
    ctx->pc = 0x18D208u;
label_18d208:
    // 0x18d208: 0x24030004
    ctx->pc = 0x18d208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_18d20c:
    // 0x18d20c: 0xae000034
    ctx->pc = 0x18d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_18d210:
    // 0x18d210: 0xae030008
    ctx->pc = 0x18d210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_18d214:
    // 0x18d214: 0xc063190
label_18d218:
    if (ctx->pc == 0x18D218u) {
        ctx->pc = 0x18D218u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D21Cu;
        goto label_18d21c;
    }
    ctx->pc = 0x18D214u;
    SET_GPR_U32(ctx, 31, 0x18D21Cu);
    ctx->pc = 0x18D218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C640u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyUnlock_0x18c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D21Cu; }
        else if (ctx->pc != 0x18D21Cu) { ctx->pc = 0x18D21Cu; }
    }
    if (ctx->pc != 0x18D21Cu) { return; }
    ctx->pc = 0x18D21Cu;
label_18d21c:
    // 0x18d21c: 0x12200004
label_18d220:
    if (ctx->pc == 0x18D220u) {
        ctx->pc = 0x18D220u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x18D224u;
        goto label_18d224;
    }
    ctx->pc = 0x18D21Cu;
    {
        const bool branch_taken_0x18d21c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D220u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18d21c) {
            ctx->pc = 0x18D230u;
            goto label_18d230;
        }
    }
    ctx->pc = 0x18D224u;
label_18d224:
    // 0x18d224: 0xc063e18
label_18d228:
    if (ctx->pc == 0x18D228u) {
        ctx->pc = 0x18D228u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D22Cu;
        goto label_18d22c;
    }
    ctx->pc = 0x18D224u;
    SET_GPR_U32(ctx, 31, 0x18D22Cu);
    ctx->pc = 0x18D228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F860u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_Close_0x18f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D22Cu; }
        else if (ctx->pc != 0x18D22Cu) { ctx->pc = 0x18D22Cu; }
    }
    if (ctx->pc != 0x18D22Cu) { return; }
    ctx->pc = 0x18D22Cu;
label_18d22c:
    // 0x18d22c: 0xdfbf0020
    ctx->pc = 0x18d22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18d230:
    // 0x18d230: 0x102d
    ctx->pc = 0x18d230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d234:
    // 0x18d234: 0xdfb10010
    ctx->pc = 0x18d234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d238:
    // 0x18d238: 0xdfb00000
    ctx->pc = 0x18d238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18d23c:
    // 0x18d23c: 0x3e00008
label_18d240:
    if (ctx->pc == 0x18D240u) {
        ctx->pc = 0x18D240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x18D244u;
        goto label_fallthrough_0x18d23c;
    }
    ctx->pc = 0x18D23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D240u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D190u: goto label_18d190;
            case 0x18D194u: goto label_18d194;
            case 0x18D198u: goto label_18d198;
            case 0x18D19Cu: goto label_18d19c;
            case 0x18D1A0u: goto label_18d1a0;
            case 0x18D1A4u: goto label_18d1a4;
            case 0x18D1A8u: goto label_18d1a8;
            case 0x18D1ACu: goto label_18d1ac;
            case 0x18D1B0u: goto label_18d1b0;
            case 0x18D1B4u: goto label_18d1b4;
            case 0x18D1B8u: goto label_18d1b8;
            case 0x18D1BCu: goto label_18d1bc;
            case 0x18D1C0u: goto label_18d1c0;
            case 0x18D1C4u: goto label_18d1c4;
            case 0x18D1C8u: goto label_18d1c8;
            case 0x18D1CCu: goto label_18d1cc;
            case 0x18D1D0u: goto label_18d1d0;
            case 0x18D1D4u: goto label_18d1d4;
            case 0x18D1D8u: goto label_18d1d8;
            case 0x18D1DCu: goto label_18d1dc;
            case 0x18D1E0u: goto label_18d1e0;
            case 0x18D1E4u: goto label_18d1e4;
            case 0x18D1E8u: goto label_18d1e8;
            case 0x18D1ECu: goto label_18d1ec;
            case 0x18D1F0u: goto label_18d1f0;
            case 0x18D1F4u: goto label_18d1f4;
            case 0x18D1F8u: goto label_18d1f8;
            case 0x18D1FCu: goto label_18d1fc;
            case 0x18D200u: goto label_18d200;
            case 0x18D204u: goto label_18d204;
            case 0x18D208u: goto label_18d208;
            case 0x18D20Cu: goto label_18d20c;
            case 0x18D210u: goto label_18d210;
            case 0x18D214u: goto label_18d214;
            case 0x18D218u: goto label_18d218;
            case 0x18D21Cu: goto label_18d21c;
            case 0x18D220u: goto label_18d220;
            case 0x18D224u: goto label_18d224;
            case 0x18D228u: goto label_18d228;
            case 0x18D22Cu: goto label_18d22c;
            case 0x18D230u: goto label_18d230;
            case 0x18D234u: goto label_18d234;
            case 0x18D238u: goto label_18d238;
            case 0x18D23Cu: goto label_18d23c;
            case 0x18D240u: goto label_18d240;
            default: break;
        }
        return;
    }
label_fallthrough_0x18d23c:
    ctx->pc = 0x18D244u;
}
