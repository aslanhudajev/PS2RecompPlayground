#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AddHitPerBonus__Fv
// Address: 0x213570 - 0x21363c
void AddHitPerBonus__Fv_0x213570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AddHitPerBonus__Fv");


    ctx->pc = 0x213570u;

    // 0x213570: 0x27bdffd0
    ctx->pc = 0x213570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213574: 0x7fbf0020
    ctx->pc = 0x213574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x213578: 0x7fb10010
    ctx->pc = 0x213578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21357c: 0x7fb00000
    ctx->pc = 0x21357cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x213580: 0x3c030050
    ctx->pc = 0x213580u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213584: 0x70008628
    ctx->pc = 0x213584u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213588: 0x2471dd20
    ctx->pc = 0x213588u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294958368));
label_21358c:
    // 0x21358c: 0x8e240004
    ctx->pc = 0x21358cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213590: 0x24030005
    ctx->pc = 0x213590u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x213594: 0x10830006
    ctx->pc = 0x213594u;
    {
        const bool branch_taken_0x213594 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x213598u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x213594) {
            ctx->pc = 0x2135B0u;
            goto label_2135b0;
        }
    }
    ctx->pc = 0x21359Cu;
    // 0x21359c: 0x10830004
    ctx->pc = 0x21359Cu;
    {
        const bool branch_taken_0x21359c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2135A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21359c) {
            ctx->pc = 0x2135B0u;
            goto label_2135b0;
        }
    }
    ctx->pc = 0x2135A4u;
    // 0x2135a4: 0x5483001d
    ctx->pc = 0x2135A4u;
    {
        const bool branch_taken_0x2135a4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2135a4) {
            ctx->pc = 0x2135A8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x21361Cu;
            goto label_21361c;
        }
    }
    ctx->pc = 0x2135ACu;
    // 0x2135ac: 0x0
    ctx->pc = 0x2135acu;
    // NOP
label_2135b0:
    // 0x2135b0: 0x8e230064
    ctx->pc = 0x2135b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2135b4: 0x18600018
    ctx->pc = 0x2135B4u;
    {
        const bool branch_taken_0x2135b4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2135b4) {
            ctx->pc = 0x213618u;
            goto label_213618;
        }
    }
    ctx->pc = 0x2135BCu;
    // 0x2135bc: 0xc6210068
    ctx->pc = 0x2135bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2135c0: 0x44830000
    ctx->pc = 0x2135c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2135c4: 0x3c024120
    ctx->pc = 0x2135c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16672 << 16));
    // 0x2135c8: 0x46800020
    ctx->pc = 0x2135c8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2135cc: 0x46800860
    ctx->pc = 0x2135ccu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2135d0: 0x46000843
    ctx->pc = 0x2135d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2135d4: 0x0
    ctx->pc = 0x2135d4u;
    // NOP
    // 0x2135d8: 0x44820000
    ctx->pc = 0x2135d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2135dc: 0xc05316a
    ctx->pc = 0x2135DCu;
    SET_GPR_U32(ctx, 31, 0x2135E4u);
    ctx->pc = 0x2135E0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x14C5A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x14c5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2135E4u; }
        else if (ctx->pc != 0x2135E4u) { ctx->pc = 0x2135E4u; }
    }
    if (ctx->pc != 0x2135E4u) { return; }
    ctx->pc = 0x2135E4u;
    // 0x2135e4: 0x2c41000b
    ctx->pc = 0x2135e4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 11));
    // 0x2135e8: 0x14200004
    ctx->pc = 0x2135E8u;
    {
        const bool branch_taken_0x2135e8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x2135ECu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2135e8) {
            ctx->pc = 0x2135FCu;
            goto label_2135fc;
        }
    }
    ctx->pc = 0x2135F0u;
    // 0x2135f0: 0x2402000a
    ctx->pc = 0x2135f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2135f4: 0x0
    ctx->pc = 0x2135f4u;
    // NOP
    // 0x2135f8: 0x21840
    ctx->pc = 0x2135f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
label_2135fc:
    // 0x2135fc: 0x3c020027
    ctx->pc = 0x2135fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x213600: 0x24423630
    ctx->pc = 0x213600u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13872));
    // 0x213604: 0x431021
    ctx->pc = 0x213604u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213608: 0x84450000
    ctx->pc = 0x213608u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21360c: 0xc084d14
    ctx->pc = 0x21360Cu;
    SET_GPR_U32(ctx, 31, 0x213614u);
    ctx->pc = 0x213610u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213614u; }
        else if (ctx->pc != 0x213614u) { ctx->pc = 0x213614u; }
    }
    if (ctx->pc != 0x213614u) { return; }
    ctx->pc = 0x213614u;
    // 0x213614: 0x0
    ctx->pc = 0x213614u;
    // NOP
label_213618:
    // 0x213618: 0x26100001
    ctx->pc = 0x213618u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_21361c:
    // 0x21361c: 0x2a030002
    ctx->pc = 0x21361cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x213620: 0x1460ffda
    ctx->pc = 0x213620u;
    {
        const bool branch_taken_0x213620 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x213624u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 840));
        if (branch_taken_0x213620) {
            ctx->pc = 0x21358Cu;
            goto label_21358c;
        }
    }
    ctx->pc = 0x213628u;
    // 0x213628: 0x7bbf0020
    ctx->pc = 0x213628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21362c: 0x7bb10010
    ctx->pc = 0x21362cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213630: 0x7bb00000
    ctx->pc = 0x213630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213634: 0x3e00008
    ctx->pc = 0x213634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21358Cu: goto label_21358c;
            case 0x2135B0u: goto label_2135b0;
            case 0x2135FCu: goto label_2135fc;
            case 0x213618u: goto label_213618;
            case 0x21361Cu: goto label_21361c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21363Cu;
}
