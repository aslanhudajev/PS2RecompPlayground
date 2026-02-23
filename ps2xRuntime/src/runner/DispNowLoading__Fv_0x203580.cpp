#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispNowLoading__Fv
// Address: 0x203580 - 0x203618
void DispNowLoading__Fv_0x203580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispNowLoading__Fv");


    ctx->pc = 0x203580u;

    // 0x203580: 0x27bdfff0
    ctx->pc = 0x203580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203584: 0x7fbf0000
    ctx->pc = 0x203584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x203588: 0x97838bf4
    ctx->pc = 0x203588u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x20358c: 0x1060001f
    ctx->pc = 0x20358Cu;
    {
        const bool branch_taken_0x20358c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20358c) {
            ctx->pc = 0x20360Cu;
            goto label_20360c;
        }
    }
    ctx->pc = 0x203594u;
    // 0x203594: 0x8f838cb0
    ctx->pc = 0x203594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x203598: 0x30630004
    ctx->pc = 0x203598u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
    // 0x20359c: 0x14600019
    ctx->pc = 0x20359Cu;
    {
        const bool branch_taken_0x20359c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2035A0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x20359c) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035A4u;
    // 0x2035a4: 0x8424e504
    ctx->pc = 0x2035a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x2035a8: 0x10800016
    ctx->pc = 0x2035A8u;
    {
        const bool branch_taken_0x2035a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2035ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967282));
        if (branch_taken_0x2035a8) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035B0u;
    // 0x2035b0: 0x2c610002
    ctx->pc = 0x2035b0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x2035b4: 0x14200013
    ctx->pc = 0x2035B4u;
    {
        const bool branch_taken_0x2035b4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x2035B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x2035b4) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035BCu;
    // 0x2035bc: 0x10830011
    ctx->pc = 0x2035BCu;
    {
        const bool branch_taken_0x2035bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2035C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967290));
        if (branch_taken_0x2035bc) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035C4u;
    // 0x2035c4: 0x2c610003
    ctx->pc = 0x2035c4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 3));
    // 0x2035c8: 0x1420000e
    ctx->pc = 0x2035C8u;
    {
        const bool branch_taken_0x2035c8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x2035CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967285));
        if (branch_taken_0x2035c8) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035D0u;
    // 0x2035d0: 0x2c610002
    ctx->pc = 0x2035d0u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x2035d4: 0x1420000b
    ctx->pc = 0x2035D4u;
    {
        const bool branch_taken_0x2035d4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x2035D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x2035d4) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035DCu;
    // 0x2035dc: 0x1483000b
    ctx->pc = 0x2035DCu;
    {
        const bool branch_taken_0x2035dc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2035dc) {
            ctx->pc = 0x20360Cu;
            goto label_20360c;
        }
    }
    ctx->pc = 0x2035E4u;
    // 0x2035e4: 0x83848ba8
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x2035e8: 0x24030007
    ctx->pc = 0x2035e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2035ec: 0x10830005
    ctx->pc = 0x2035ECu;
    {
        const bool branch_taken_0x2035ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x2035ec) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035F4u;
    // 0x2035f4: 0x8f848bcc
    ctx->pc = 0x2035f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x2035f8: 0x24030002
    ctx->pc = 0x2035f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2035fc: 0x14830003
    ctx->pc = 0x2035FCu;
    {
        const bool branch_taken_0x2035fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2035fc) {
            ctx->pc = 0x20360Cu;
            goto label_20360c;
        }
    }
    ctx->pc = 0x203604u;
label_203604:
    // 0x203604: 0xc080d10
    ctx->pc = 0x203604u;
    SET_GPR_U32(ctx, 31, 0x20360Cu);
    ctx->pc = 0x203440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispNowLoading_ALL__Fv_0x203440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20360Cu; }
        else if (ctx->pc != 0x20360Cu) { ctx->pc = 0x20360Cu; }
    }
    if (ctx->pc != 0x20360Cu) { return; }
    ctx->pc = 0x20360Cu;
label_20360c:
    // 0x20360c: 0x7bbf0000
    ctx->pc = 0x20360cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203610: 0x3e00008
    ctx->pc = 0x203610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203614u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203604u: goto label_203604;
            case 0x20360Cu: goto label_20360c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203618u;
}
