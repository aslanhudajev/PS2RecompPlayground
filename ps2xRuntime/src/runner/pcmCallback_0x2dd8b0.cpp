#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pcmCallback
// Address: 0x2dd8b0 - 0x2dd994
void pcmCallback_0x2dd8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd8b0u;

    // 0x2dd8b0: 0x27bdff90
    ctx->pc = 0x2dd8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dd8b4: 0xffbf0060
    ctx->pc = 0x2dd8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2dd8b8: 0xffb40050
    ctx->pc = 0x2dd8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2dd8bc: 0xffb30040
    ctx->pc = 0x2dd8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2dd8c0: 0xffb20030
    ctx->pc = 0x2dd8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2dd8c4: 0xffb10020
    ctx->pc = 0x2dd8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2dd8c8: 0xffb00010
    ctx->pc = 0x2dd8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dd8cc: 0x8cb30008
    ctx->pc = 0x2dd8ccu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2dd8d0: 0xc0a02d
    ctx->pc = 0x2dd8d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd8d4: 0x26730004
    ctx->pc = 0x2dd8d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x2dd8d8: 0x3c020005
    ctx->pc = 0x2dd8d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2dd8dc: 0x2821021
    ctx->pc = 0x2dd8dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2dd8e0: 0x8c430008
    ctx->pc = 0x2dd8e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dd8e4: 0x2831021
    ctx->pc = 0x2dd8e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2dd8e8: 0x262102b
    ctx->pc = 0x2dd8e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2dd8ec: 0x50400001
    ctx->pc = 0x2DD8ECu;
    {
        const bool branch_taken_0x2dd8ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dd8ec) {
            ctx->pc = 0x2DD8F0u;
            SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
            ctx->pc = 0x2DD8F4u;
            goto label_2dd8f4;
        }
    }
    ctx->pc = 0x2DD8F4u;
label_2dd8f4:
    // 0x2dd8f4: 0x8cb1000c
    ctx->pc = 0x2dd8f4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2dd8f8: 0x2631fffc
    ctx->pc = 0x2dd8f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2dd8fc: 0xc0a02d
    ctx->pc = 0x2dd8fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd900: 0x3c020005
    ctx->pc = 0x2dd900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2dd904: 0x2821021
    ctx->pc = 0x2dd904u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2dd908: 0x8c500008
    ctx->pc = 0x2dd908u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dd90c: 0x2908021
    ctx->pc = 0x2dd90cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2dd910: 0x2138023
    ctx->pc = 0x2dd910u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2dd914: 0x230102a
    ctx->pc = 0x2dd914u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x2dd918: 0x222800b
    ctx->pc = 0x2dd918u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 17));
    // 0x2dd91c: 0x2308823
    ctx->pc = 0x2dd91cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2dd920: 0x3c12003a
    ctx->pc = 0x2dd920u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2dd924: 0x26442af8
    ctx->pc = 0x2dd924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 11000));
    // 0x2dd928: 0x3a0282d
    ctx->pc = 0x2dd928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd92c: 0x27a60004
    ctx->pc = 0x2dd92cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x2dd930: 0x27a70008
    ctx->pc = 0x2dd930u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
    // 0x2dd934: 0xc0b7ada
    ctx->pc = 0x2DD934u;
    SET_GPR_U32(ctx, 31, 0x2DD93Cu);
    ctx->pc = 0x2DD938u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x2DEB68u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecBeginPut_0x2deb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD93Cu; }
    }
    if (ctx->pc != 0x2DD93Cu) { return; }
    ctx->pc = 0x2DD93Cu;
    // 0x2dd93c: 0x8fa40000
    ctx->pc = 0x2dd93cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd940: 0x8fa50004
    ctx->pc = 0x2dd940u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2dd944: 0x8fa60008
    ctx->pc = 0x2dd944u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd948: 0x8fa7000c
    ctx->pc = 0x2dd948u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2dd94c: 0x260402d
    ctx->pc = 0x2dd94cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd950: 0x200482d
    ctx->pc = 0x2dd950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd954: 0x280502d
    ctx->pc = 0x2dd954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd958: 0xc0b7666
    ctx->pc = 0x2DD958u;
    SET_GPR_U32(ctx, 31, 0x2DD960u);
    ctx->pc = 0x2DD95Cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DD998u;
    {
        const uint32_t __entryPc = ctx->pc;
        copy2area_0x2dd998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD960u; }
    }
    if (ctx->pc != 0x2DD960u) { return; }
    ctx->pc = 0x2DD960u;
    // 0x2dd960: 0x40802d
    ctx->pc = 0x2dd960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd964: 0x26442af8
    ctx->pc = 0x2dd964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 11000));
    // 0x2dd968: 0xc0b7af6
    ctx->pc = 0x2DD968u;
    SET_GPR_U32(ctx, 31, 0x2DD970u);
    ctx->pc = 0x2DD96Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DEBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecEndPut_0x2debd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD970u; }
    }
    if (ctx->pc != 0x2DD970u) { return; }
    ctx->pc = 0x2DD970u;
    // 0x2dd970: 0x10102a
    ctx->pc = 0x2dd970u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x2dd974: 0xdfbf0060
    ctx->pc = 0x2dd974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd978: 0xdfb40050
    ctx->pc = 0x2dd978u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd97c: 0xdfb30040
    ctx->pc = 0x2dd97cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd980: 0xdfb20030
    ctx->pc = 0x2dd980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd984: 0xdfb10020
    ctx->pc = 0x2dd984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd988: 0xdfb00010
    ctx->pc = 0x2dd988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd98c: 0x3e00008
    ctx->pc = 0x2DD98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD990u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DD8F4u: goto label_2dd8f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DD994u;
}
