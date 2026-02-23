#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_SkipNext
// Address: 0x194208 - 0x1942dc
void sfmps_SkipNext_0x194208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_SkipNext");


    ctx->pc = 0x194208u;

    // 0x194208: 0x27bdff90
    ctx->pc = 0x194208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19420c: 0xffb30030
    ctx->pc = 0x19420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x194210: 0xffb50050
    ctx->pc = 0x194210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x194214: 0xe0982d
    ctx->pc = 0x194214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194218: 0xffb10010
    ctx->pc = 0x194218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19421c: 0x80a82d
    ctx->pc = 0x19421cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194220: 0xffb00000
    ctx->pc = 0x194220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194224: 0xffbf0060
    ctx->pc = 0x194224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x194228: 0xc0802d
    ctx->pc = 0x194228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19422c: 0xffb40040
    ctx->pc = 0x19422cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x194230: 0xffb20020
    ctx->pc = 0x194230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x194234: 0xae600000
    ctx->pc = 0x194234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x194238: 0x8eb20028
    ctx->pc = 0x194238u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x19423c: 0x26420003
    ctx->pc = 0x19423cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 3));
    // 0x194240: 0x202102a
    ctx->pc = 0x194240u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x194244: 0x14400006
    ctx->pc = 0x194244u;
    {
        const bool branch_taken_0x194244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194248u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194244) {
            ctx->pc = 0x194260u;
            goto label_194260;
        }
    }
    ctx->pc = 0x19424Cu;
    // 0x19424c: 0x220202d
    ctx->pc = 0x19424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194250: 0xc0650b8
    ctx->pc = 0x194250u;
    SET_GPR_U32(ctx, 31, 0x194258u);
    ctx->pc = 0x194254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1942E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_IsZero_0x1942e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194258u; }
        else if (ctx->pc != 0x194258u) { ctx->pc = 0x194258u; }
    }
    if (ctx->pc != 0x194258u) { return; }
    ctx->pc = 0x194258u;
    // 0x194258: 0x54400017
    ctx->pc = 0x194258u;
    {
        const bool branch_taken_0x194258 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x194258) {
            ctx->pc = 0x19425Cu;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->pc = 0x1942B8u;
            goto label_1942b8;
        }
    }
    ctx->pc = 0x194260u;
label_194260:
    // 0x194260: 0x2a020004
    ctx->pc = 0x194260u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x194264: 0x1440000b
    ctx->pc = 0x194264u;
    {
        const bool branch_taken_0x194264 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194268u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194264) {
            ctx->pc = 0x194294u;
            goto label_194294;
        }
    }
    ctx->pc = 0x19426Cu;
    // 0x19426c: 0x3c14000d
    ctx->pc = 0x19426cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)13 << 16));
label_194270:
    // 0x194270: 0xc060864
    ctx->pc = 0x194270u;
    SET_GPR_U32(ctx, 31, 0x194278u);
    ctx->pc = 0x194274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182190u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_CheckDelim_0x182190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194278u; }
        else if (ctx->pc != 0x194278u) { ctx->pc = 0x194278u; }
    }
    if (ctx->pc != 0x194278u) { return; }
    ctx->pc = 0x194278u;
    // 0x194278: 0x541024
    ctx->pc = 0x194278u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19427c: 0x1440000d
    ctx->pc = 0x19427Cu;
    {
        const bool branch_taken_0x19427c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194280u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x19427c) {
            ctx->pc = 0x1942B4u;
            goto label_1942b4;
        }
    }
    ctx->pc = 0x194284u;
    // 0x194284: 0x26520001
    ctx->pc = 0x194284u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x194288: 0x2a020004
    ctx->pc = 0x194288u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x19428c: 0x1040fff8
    ctx->pc = 0x19428Cu;
    {
        const bool branch_taken_0x19428c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194290u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x19428c) {
            ctx->pc = 0x194270u;
            goto label_194270;
        }
    }
    ctx->pc = 0x194294u;
label_194294:
    // 0x194294: 0x2602ffff
    ctx->pc = 0x194294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x194298: 0x2c420003
    ctx->pc = 0x194298u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x19429c: 0x10400005
    ctx->pc = 0x19429Cu;
    {
        const bool branch_taken_0x19429c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1942A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19429c) {
            ctx->pc = 0x1942B4u;
            goto label_1942b4;
        }
    }
    ctx->pc = 0x1942A4u;
    // 0x1942a4: 0xc0650c6
    ctx->pc = 0x1942A4u;
    SET_GPR_U32(ctx, 31, 0x1942ACu);
    ctx->pc = 0x1942A8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x194318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_IsEndOfRingBuf_0x194318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1942ACu; }
        else if (ctx->pc != 0x1942ACu) { ctx->pc = 0x1942ACu; }
    }
    if (ctx->pc != 0x1942ACu) { return; }
    ctx->pc = 0x1942ACu;
    // 0x1942ac: 0x2501821
    ctx->pc = 0x1942acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1942b0: 0x62900b
    ctx->pc = 0x1942b0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_1942b4:
    // 0x1942b4: 0xae720000
    ctx->pc = 0x1942b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_1942b8:
    // 0x1942b8: 0xdfbf0060
    ctx->pc = 0x1942b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1942bc: 0xdfb50050
    ctx->pc = 0x1942bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1942c0: 0xdfb40040
    ctx->pc = 0x1942c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1942c4: 0xdfb30030
    ctx->pc = 0x1942c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1942c8: 0xdfb20020
    ctx->pc = 0x1942c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1942cc: 0xdfb10010
    ctx->pc = 0x1942ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1942d0: 0xdfb00000
    ctx->pc = 0x1942d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1942d4: 0x3e00008
    ctx->pc = 0x1942D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1942D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194260u: goto label_194260;
            case 0x194270u: goto label_194270;
            case 0x194294u: goto label_194294;
            case 0x1942B4u: goto label_1942b4;
            case 0x1942B8u: goto label_1942b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1942DCu;
}
