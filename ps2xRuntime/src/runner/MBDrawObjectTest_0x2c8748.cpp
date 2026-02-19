#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawObjectTest
// Address: 0x2c8748 - 0x2c8810
void MBDrawObjectTest_0x2c8748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8748u;

    // 0x2c8748: 0x27bdffd0
    ctx->pc = 0x2c8748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c874c: 0xffbf0020
    ctx->pc = 0x2c874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8750: 0xffb10010
    ctx->pc = 0x2c8750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c8754: 0xffb00000
    ctx->pc = 0x2c8754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8758: 0x80802d
    ctx->pc = 0x2c8758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c875c: 0xc0882d
    ctx->pc = 0x2c875cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8760: 0x8e020070
    ctx->pc = 0x2c8760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c8764: 0x24a40030
    ctx->pc = 0x2c8764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 48));
    // 0x2c8768: 0xc0b1084
    ctx->pc = 0x2C8768u;
    SET_GPR_U32(ctx, 31, 0x2C8770u);
    ctx->pc = 0x2C876Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2C4210u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereVisible_0x2c4210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8770u; }
    }
    if (ctx->pc != 0x2C8770u) { return; }
    ctx->pc = 0x2C8770u;
    // 0x2c8770: 0x2c430001
    ctx->pc = 0x2c8770u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2c8774: 0x3c020037
    ctx->pc = 0x2c8774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c8778: 0x8c448400
    ctx->pc = 0x2c8778u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2c877c: 0x8c820000
    ctx->pc = 0x2c877cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8780: 0x10400003
    ctx->pc = 0x2C8780u;
    {
        const bool branch_taken_0x2c8780 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c8780) {
            ctx->pc = 0x2C8790u;
            goto label_2c8790;
        }
    }
    ctx->pc = 0x2C8788u;
    // 0x2c8788: 0x8c820004
    ctx->pc = 0x2c8788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c878c: 0x2180b
    ctx->pc = 0x2c878cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
label_2c8790:
    // 0x2c8790: 0x1460001a
    ctx->pc = 0x2C8790u;
    {
        const bool branch_taken_0x2c8790 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C8794u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c8790) {
            ctx->pc = 0x2C87FCu;
            goto label_2c87fc;
        }
    }
    ctx->pc = 0x2C8798u;
    // 0x2c8798: 0x8e020060
    ctx->pc = 0x2c8798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c879c: 0x3c030010
    ctx->pc = 0x2c879cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x2c87a0: 0x34630400
    ctx->pc = 0x2c87a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1024));
    // 0x2c87a4: 0x431024
    ctx->pc = 0x2c87a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c87a8: 0x14400014
    ctx->pc = 0x2C87A8u;
    {
        const bool branch_taken_0x2c87a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C87ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2c87a8) {
            ctx->pc = 0x2C87FCu;
            goto label_2c87fc;
        }
    }
    ctx->pc = 0x2C87B0u;
    // 0x2c87b0: 0x12200012
    ctx->pc = 0x2C87B0u;
    {
        const bool branch_taken_0x2c87b0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C87B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c87b0) {
            ctx->pc = 0x2C87FCu;
            goto label_2c87fc;
        }
    }
    ctx->pc = 0x2C87B8u;
    // 0x2c87b8: 0x8e030060
    ctx->pc = 0x2c87b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c87bc: 0x30620800
    ctx->pc = 0x2c87bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2048));
    // 0x2c87c0: 0x1040000e
    ctx->pc = 0x2C87C0u;
    {
        const bool branch_taken_0x2c87c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C87C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c87c0) {
            ctx->pc = 0x2C87FCu;
            goto label_2c87fc;
        }
    }
    ctx->pc = 0x2C87C8u;
    // 0x2c87c8: 0x92020053
    ctx->pc = 0x2c87c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 83)));
    // 0x2c87cc: 0x1440000b
    ctx->pc = 0x2C87CCu;
    {
        const bool branch_taken_0x2c87cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C87D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2c87cc) {
            ctx->pc = 0x2C87FCu;
            goto label_2c87fc;
        }
    }
    ctx->pc = 0x2C87D4u;
    // 0x2c87d4: 0x3c024080
    ctx->pc = 0x2c87d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16512 << 16));
    // 0x2c87d8: 0x621024
    ctx->pc = 0x2c87d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c87dc: 0x14400007
    ctx->pc = 0x2C87DCu;
    {
        const bool branch_taken_0x2c87dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C87E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2c87dc) {
            ctx->pc = 0x2C87FCu;
            goto label_2c87fc;
        }
    }
    ctx->pc = 0x2C87E4u;
    // 0x2c87e4: 0x8e020070
    ctx->pc = 0x2c87e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c87e8: 0x8c420008
    ctx->pc = 0x2c87e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c87ec: 0x30420001
    ctx->pc = 0x2c87ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2c87f0: 0x14400002
    ctx->pc = 0x2C87F0u;
    {
        const bool branch_taken_0x2c87f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C87F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2c87f0) {
            ctx->pc = 0x2C87FCu;
            goto label_2c87fc;
        }
    }
    ctx->pc = 0x2C87F8u;
    // 0x2c87f8: 0x24020001
    ctx->pc = 0x2c87f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2c87fc:
    // 0x2c87fc: 0xdfbf0020
    ctx->pc = 0x2c87fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8800: 0xdfb10010
    ctx->pc = 0x2c8800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8804: 0xdfb00000
    ctx->pc = 0x2c8804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8808: 0x3e00008
    ctx->pc = 0x2C8808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C880Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8790u: goto label_2c8790;
            case 0x2C87FCu: goto label_2c87fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C8810u;
}
