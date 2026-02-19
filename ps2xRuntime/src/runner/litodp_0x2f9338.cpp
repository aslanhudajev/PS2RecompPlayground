#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: litodp
// Address: 0x2f9338 - 0x2f93f0
void litodp_0x2f9338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9338u;

    // 0x2f9338: 0x27bdffd0
    ctx->pc = 0x2f9338u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f933c: 0x24020003
    ctx->pc = 0x2f933cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9340: 0x41fc2
    ctx->pc = 0x2f9340u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x2f9344: 0xffbf0020
    ctx->pc = 0x2f9344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f9348: 0xafa20000
    ctx->pc = 0x2f9348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f934c: 0x14800004
    ctx->pc = 0x2F934Cu;
    {
        const bool branch_taken_0x2f934c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9350u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x2f934c) {
            ctx->pc = 0x2F9360u;
            goto label_2f9360;
        }
    }
    ctx->pc = 0x2F9354u;
    // 0x2f9354: 0x24020002
    ctx->pc = 0x2f9354u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9358: 0x10000020
    ctx->pc = 0x2F9358u;
    {
        const bool branch_taken_0x2f9358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F935Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9358) {
            ctx->pc = 0x2F93DCu;
            goto label_2f93dc;
        }
    }
    ctx->pc = 0x2F9360u;
label_2f9360:
    // 0x2f9360: 0x2402003c
    ctx->pc = 0x2f9360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2f9364: 0x1060000a
    ctx->pc = 0x2F9364u;
    {
        const bool branch_taken_0x2f9364 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9368u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9364) {
            ctx->pc = 0x2F9390u;
            goto label_2f9390;
        }
    }
    ctx->pc = 0x2F936Cu;
    // 0x2f936c: 0x3c028000
    ctx->pc = 0x2f936cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x2f9370: 0x14820005
    ctx->pc = 0x2F9370u;
    {
        const bool branch_taken_0x2f9370 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F9374u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x2f9370) {
            ctx->pc = 0x2F9388u;
            goto label_2f9388;
        }
    }
    ctx->pc = 0x2F9378u;
    // 0x2f9378: 0x3402c1e0
    ctx->pc = 0x2f9378u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 49632));
    // 0x2f937c: 0x2143c
    ctx->pc = 0x2f937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2f9380: 0x10000019
    ctx->pc = 0x2F9380u;
    {
        const bool branch_taken_0x2f9380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9384u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2f9380) {
            ctx->pc = 0x2F93E8u;
            goto label_2f93e8;
        }
    }
    ctx->pc = 0x2F9388u;
label_2f9388:
    // 0x2f9388: 0x10000002
    ctx->pc = 0x2F9388u;
    {
        const bool branch_taken_0x2f9388 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F938Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x2f9388) {
            ctx->pc = 0x2F9394u;
            goto label_2f9394;
        }
    }
    ctx->pc = 0x2F9390u;
label_2f9390:
    // 0x2f9390: 0xffa40010
    ctx->pc = 0x2f9390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_2f9394:
    // 0x2f9394: 0xdfa50010
    ctx->pc = 0x2f9394u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9398: 0x2402ffff
    ctx->pc = 0x2f9398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f939c: 0x2113a
    ctx->pc = 0x2f939cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2f93a0: 0x45102b
    ctx->pc = 0x2f93a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f93a4: 0x1440000d
    ctx->pc = 0x2F93A4u;
    {
        const bool branch_taken_0x2f93a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F93A8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x2f93a4) {
            ctx->pc = 0x2F93DCu;
            goto label_2f93dc;
        }
    }
    ctx->pc = 0x2F93ACu;
    // 0x2f93ac: 0x2406ffff
    ctx->pc = 0x2f93acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f93b0: 0x6313a
    ctx->pc = 0x2f93b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x2f93b4: 0x0
    ctx->pc = 0x2f93b4u;
    // NOP
label_2f93b8:
    // 0x2f93b8: 0x51878
    ctx->pc = 0x2f93b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x2f93bc: 0x2484ffff
    ctx->pc = 0x2f93bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f93c0: 0x60282d
    ctx->pc = 0x2f93c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f93c4: 0xc3102b
    ctx->pc = 0x2f93c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f93c8: 0x0
    ctx->pc = 0x2f93c8u;
    // NOP
    // 0x2f93cc: 0x1040fffa
    ctx->pc = 0x2F93CCu;
    {
        const bool branch_taken_0x2f93cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f93cc) {
            ctx->pc = 0x2F93B8u;
            goto label_2f93b8;
        }
    }
    ctx->pc = 0x2F93D4u;
    // 0x2f93d4: 0xafa40008
    ctx->pc = 0x2f93d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2f93d8: 0xffa30010
    ctx->pc = 0x2f93d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_2f93dc:
    // 0x2f93dc: 0xc0be23c
    ctx->pc = 0x2F93DCu;
    SET_GPR_U32(ctx, 31, 0x2F93E4u);
    ctx->pc = 0x2F93E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F88F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x2f88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F93E4u; }
    }
    if (ctx->pc != 0x2F93E4u) { return; }
    ctx->pc = 0x2F93E4u;
    // 0x2f93e4: 0xdfbf0020
    ctx->pc = 0x2f93e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f93e8:
    // 0x2f93e8: 0x3e00008
    ctx->pc = 0x2F93E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F93ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F9360u: goto label_2f9360;
            case 0x2F9388u: goto label_2f9388;
            case 0x2F9390u: goto label_2f9390;
            case 0x2F9394u: goto label_2f9394;
            case 0x2F93B8u: goto label_2f93b8;
            case 0x2F93DCu: goto label_2f93dc;
            case 0x2F93E8u: goto label_2f93e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F93F0u;
}
