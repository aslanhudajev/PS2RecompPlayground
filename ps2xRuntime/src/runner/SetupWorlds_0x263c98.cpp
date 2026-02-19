#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetupWorlds
// Address: 0x263c98 - 0x263cfc
void SetupWorlds_0x263c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x263c98u;

    // 0x263c98: 0x27bdffe0
    ctx->pc = 0x263c98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263c9c: 0xffbf0010
    ctx->pc = 0x263c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263ca0: 0xffb00000
    ctx->pc = 0x263ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x263ca4: 0x80802d
    ctx->pc = 0x263ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ca8: 0xc0382d
    ctx->pc = 0x263ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cac: 0x4e1000b
    ctx->pc = 0x263CACu;
    {
        const bool branch_taken_0x263cac = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x263CB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x263cac) {
            ctx->pc = 0x263CDCu;
            goto label_263cdc;
        }
    }
    ctx->pc = 0x263CB4u;
    // 0x263cb4: 0x3c050032
    ctx->pc = 0x263cb4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x263cb8: 0x24a5fa78
    ctx->pc = 0x263cb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965880));
    // 0x263cbc: 0xc080d22
    ctx->pc = 0x263CBCu;
    SET_GPR_U32(ctx, 31, 0x263CC4u);
    ctx->pc = 0x263CC0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CC4u; }
    }
    if (ctx->pc != 0x263CC4u) { return; }
    ctx->pc = 0x263CC4u;
    // 0x263cc4: 0x3c030032
    ctx->pc = 0x263cc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x263cc8: 0xac62fa7c
    ctx->pc = 0x263cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965884), GPR_U32(ctx, 2));
    // 0x263ccc: 0xc0870de
    ctx->pc = 0x263CCCu;
    SET_GPR_U32(ctx, 31, 0x263CD4u);
    ctx->pc = 0x263CD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21C378u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorlds_0x21c378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CD4u; }
    }
    if (ctx->pc != 0x263CD4u) { return; }
    ctx->pc = 0x263CD4u;
    // 0x263cd4: 0x10000004
    ctx->pc = 0x263CD4u;
    {
        const bool branch_taken_0x263cd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x263CD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x263cd4) {
            ctx->pc = 0x263CE8u;
            goto label_263ce8;
        }
    }
    ctx->pc = 0x263CDCu;
label_263cdc:
    // 0x263cdc: 0x3c020032
    ctx->pc = 0x263cdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x263ce0: 0xac47fa7c
    ctx->pc = 0x263ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965884), GPR_U32(ctx, 7));
    // 0x263ce4: 0x3c020032
    ctx->pc = 0x263ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_263ce8:
    // 0x263ce8: 0x8c42fa7c
    ctx->pc = 0x263ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965884)));
    // 0x263cec: 0xdfbf0010
    ctx->pc = 0x263cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263cf0: 0xdfb00000
    ctx->pc = 0x263cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263cf4: 0x3e00008
    ctx->pc = 0x263CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263CF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263CDCu: goto label_263cdc;
            case 0x263CE8u: goto label_263ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263CFCu;
}
