#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecMain
// Address: 0x2de310 - 0x2de3e0
void videoDecMain_0x2de310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de310u;

    // 0x2de310: 0x27bdffc0
    ctx->pc = 0x2de310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de314: 0xffbf0030
    ctx->pc = 0x2de314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2de318: 0xffb10020
    ctx->pc = 0x2de318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2de31c: 0xffb00010
    ctx->pc = 0x2de31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2de320: 0x80882d
    ctx->pc = 0x2de320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de324: 0x3c02003a
    ctx->pc = 0x2de324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2de328: 0x8c4222f8
    ctx->pc = 0x2de328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x2de32c: 0xafa20000
    ctx->pc = 0x2de32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2de330: 0x3c10003a
    ctx->pc = 0x2de330u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2de334: 0x24020001
    ctx->pc = 0x2de334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de338: 0xae022da4
    ctx->pc = 0x2de338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 2));
    // 0x2de33c: 0xc0b7cc4
    ctx->pc = 0x2DE33Cu;
    SET_GPR_U32(ctx, 31, 0x2DE344u);
    ctx->pc = 0x2DE340u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 72));
    ctx->pc = 0x2DF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufReset_0x2df310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE344u; }
    }
    if (ctx->pc != 0x2DE344u) { return; }
    ctx->pc = 0x2DE344u;
    // 0x2de344: 0x24020002
    ctx->pc = 0x2de344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2de348: 0xae022da4
    ctx->pc = 0x2de348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 2));
    // 0x2de34c: 0x3c04003a
    ctx->pc = 0x2de34cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2de350: 0xc0b7a18
    ctx->pc = 0x2DE350u;
    SET_GPR_U32(ctx, 31, 0x2DE358u);
    ctx->pc = 0x2DE354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10736));
    ctx->pc = 0x2DE860u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufReset_0x2de860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE358u; }
    }
    if (ctx->pc != 0x2DE358u) { return; }
    ctx->pc = 0x2DE358u;
    // 0x2de358: 0x24020003
    ctx->pc = 0x2de358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2de35c: 0xae022da4
    ctx->pc = 0x2de35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 2));
    // 0x2de360: 0xc0b78f8
    ctx->pc = 0x2DE360u;
    SET_GPR_U32(ctx, 31, 0x2DE368u);
    ctx->pc = 0x2DE364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        decBs0_0x2de3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE368u; }
    }
    if (ctx->pc != 0x2DE368u) { return; }
    ctx->pc = 0x2DE368u;
    // 0x2de368: 0x24020004
    ctx->pc = 0x2de368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2de36c: 0xae022da4
    ctx->pc = 0x2de36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 2));
    // 0x2de370: 0x3c02003a
    ctx->pc = 0x2de370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2de374: 0x244529f0
    ctx->pc = 0x2de374u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 10736));
label_2de378:
    // 0x2de378: 0x8ca2000c
    ctx->pc = 0x2de378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2de37c: 0x1040000c
    ctx->pc = 0x2DE37Cu;
    {
        const bool branch_taken_0x2de37c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DE380u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2de37c) {
            ctx->pc = 0x2DE3B0u;
            goto label_2de3b0;
        }
    }
    ctx->pc = 0x2DE384u;
    // 0x2de384: 0x8c8322f8
    ctx->pc = 0x2de384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8952)));
    // 0x2de388: 0x8fa20000
    ctx->pc = 0x2de388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de38c: 0x43102b
    ctx->pc = 0x2de38cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2de390: 0x10400008
    ctx->pc = 0x2DE390u;
    {
        const bool branch_taken_0x2de390 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DE394u;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x2de390) {
            ctx->pc = 0x2DE3B4u;
            goto label_2de3b4;
        }
    }
    ctx->pc = 0x2DE398u;
    // 0x2de398: 0x8c8222f8
    ctx->pc = 0x2de398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8952)));
    // 0x2de39c: 0x2442fed4
    ctx->pc = 0x2de39cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966996));
    // 0x2de3a0: 0x8fa30000
    ctx->pc = 0x2de3a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de3a4: 0x43102b
    ctx->pc = 0x2de3a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2de3a8: 0x1440fff3
    ctx->pc = 0x2DE3A8u;
    {
        const bool branch_taken_0x2de3a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2de3a8) {
            ctx->pc = 0x2DE378u;
            goto label_2de378;
        }
    }
    ctx->pc = 0x2DE3B0u;
label_2de3b0:
    // 0x2de3b0: 0x3c10003a
    ctx->pc = 0x2de3b0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2de3b4:
    // 0x2de3b4: 0x24020005
    ctx->pc = 0x2de3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2de3b8: 0xae022da4
    ctx->pc = 0x2de3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 2));
    // 0x2de3bc: 0x220202d
    ctx->pc = 0x2de3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de3c0: 0xc0b7852
    ctx->pc = 0x2DE3C0u;
    SET_GPR_U32(ctx, 31, 0x2DE3C8u);
    ctx->pc = 0x2DE3C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2DE148u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetState_0x2de148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE3C8u; }
    }
    if (ctx->pc != 0x2DE3C8u) { return; }
    ctx->pc = 0x2DE3C8u;
    // 0x2de3c8: 0xae002da4
    ctx->pc = 0x2de3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 0));
    // 0x2de3cc: 0xdfbf0030
    ctx->pc = 0x2de3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de3d0: 0xdfb10020
    ctx->pc = 0x2de3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de3d4: 0xdfb00010
    ctx->pc = 0x2de3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de3d8: 0x3e00008
    ctx->pc = 0x2DE3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE3DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE378u: goto label_2de378;
            case 0x2DE3B0u: goto label_2de3b0;
            case 0x2DE3B4u: goto label_2de3b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE3E0u;
}
