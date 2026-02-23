#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_IsExistStmId
// Address: 0x19fda0 - 0x19fe0c
void SFH_IsExistStmId_0x19fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_IsExistStmId");


    ctx->pc = 0x19fda0u;

    // 0x19fda0: 0x27bdffc0
    ctx->pc = 0x19fda0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19fda4: 0xffb00000
    ctx->pc = 0x19fda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19fda8: 0xffb20020
    ctx->pc = 0x19fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19fdac: 0xc0802d
    ctx->pc = 0x19fdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fdb0: 0xffbf0030
    ctx->pc = 0x19fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19fdb4: 0x30b200ff
    ctx->pc = 0x19fdb4u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 5), 255));
    // 0x19fdb8: 0xffb10010
    ctx->pc = 0x19fdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19fdbc: 0xae000000
    ctx->pc = 0x19fdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19fdc0: 0xc067f18
    ctx->pc = 0x19FDC0u;
    SET_GPR_U32(ctx, 31, 0x19FDC8u);
    ctx->pc = 0x19FDC4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDC8u; }
        else if (ctx->pc != 0x19FDC8u) { ctx->pc = 0x19FDC8u; }
    }
    if (ctx->pc != 0x19FDC8u) { return; }
    ctx->pc = 0x19FDC8u;
    // 0x19fdc8: 0x14400003
    ctx->pc = 0x19FDC8u;
    {
        const bool branch_taken_0x19fdc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19FDCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fdc8) {
            ctx->pc = 0x19FDD8u;
            goto label_19fdd8;
        }
    }
    ctx->pc = 0x19FDD0u;
    // 0x19fdd0: 0x10000008
    ctx->pc = 0x19FDD0u;
    {
        const bool branch_taken_0x19fdd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FDD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fdd0) {
            ctx->pc = 0x19FDF4u;
            goto label_19fdf4;
        }
    }
    ctx->pc = 0x19FDD8u;
label_19fdd8:
    // 0x19fdd8: 0xc067fb0
    ctx->pc = 0x19FDD8u;
    SET_GPR_U32(ctx, 31, 0x19FDE0u);
    ctx->pc = 0x19FDDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        searchStmId_0x19fec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDE0u; }
        else if (ctx->pc != 0x19FDE0u) { ctx->pc = 0x19FDE0u; }
    }
    if (ctx->pc != 0x19FDE0u) { return; }
    ctx->pc = 0x19FDE0u;
    // 0x19fde0: 0x10400003
    ctx->pc = 0x19FDE0u;
    {
        const bool branch_taken_0x19fde0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FDE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19fde0) {
            ctx->pc = 0x19FDF0u;
            goto label_19fdf0;
        }
    }
    ctx->pc = 0x19FDE8u;
    // 0x19fde8: 0x10000002
    ctx->pc = 0x19FDE8u;
    {
        const bool branch_taken_0x19fde8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FDECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x19fde8) {
            ctx->pc = 0x19FDF4u;
            goto label_19fdf4;
        }
    }
    ctx->pc = 0x19FDF0u;
label_19fdf0:
    // 0x19fdf0: 0xae000000
    ctx->pc = 0x19fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_19fdf4:
    // 0x19fdf4: 0xdfbf0030
    ctx->pc = 0x19fdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fdf8: 0xdfb20020
    ctx->pc = 0x19fdf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fdfc: 0xdfb10010
    ctx->pc = 0x19fdfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fe00: 0xdfb00000
    ctx->pc = 0x19fe00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fe04: 0x3e00008
    ctx->pc = 0x19FE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FE08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FDD8u: goto label_19fdd8;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FDF4u: goto label_19fdf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FE0Cu;
}
