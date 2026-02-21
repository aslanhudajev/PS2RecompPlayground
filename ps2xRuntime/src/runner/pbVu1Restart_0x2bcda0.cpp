#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVu1Restart
// Address: 0x2bcda0 - 0x2bce14
void pbVu1Restart_0x2bcda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bcda0u;

    // 0x2bcda0: 0x27bdffe0
    ctx->pc = 0x2bcda0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bcda4: 0xffbf0010
    ctx->pc = 0x2bcda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bcda8: 0xffb00000
    ctx->pc = 0x2bcda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bcdac: 0x80802d
    ctx->pc = 0x2bcdacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcdb0: 0x202d
    ctx->pc = 0x2bcdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcdb4: 0x24050001
    ctx->pc = 0x2bcdb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcdb8: 0x24060001
    ctx->pc = 0x2bcdb8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcdbc: 0xc0ad004
    ctx->pc = 0x2BCDBCu;
    SET_GPR_U32(ctx, 31, 0x2BCDC4u);
    ctx->pc = 0x2BCDC0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4010u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVu1Info_0x2b4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDC4u; }
    }
    if (ctx->pc != 0x2BCDC4u) { return; }
    ctx->pc = 0x2BCDC4u;
    // 0x2bcdc4: 0x3c020037
    ctx->pc = 0x2bcdc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bcdc8: 0x8c4325d8
    ctx->pc = 0x2bcdc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 9688)));
    // 0x2bcdcc: 0xae030004
    ctx->pc = 0x2bcdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2bcdd0: 0x8c62025c
    ctx->pc = 0x2bcdd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 604)));
    // 0x2bcdd4: 0xae02000c
    ctx->pc = 0x2bcdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2bcdd8: 0x3c021000
    ctx->pc = 0x2bcdd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2bcddc: 0x34423000
    ctx->pc = 0x2bcddcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 12288));
    // 0x2bcde0: 0xac400000
    ctx->pc = 0x2bcde0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2bcde4: 0x8c640004
    ctx->pc = 0x2bcde4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bcde8: 0xc0ad02c
    ctx->pc = 0x2BCDE8u;
    SET_GPR_U32(ctx, 31, 0x2BCDF0u);
    ctx->pc = 0x2BCDECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x2B40B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Stopped_0x2b40b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCDF0u; }
    }
    if (ctx->pc != 0x2BCDF0u) { return; }
    ctx->pc = 0x2BCDF0u;
    // 0x2bcdf0: 0x10400005
    ctx->pc = 0x2BCDF0u;
    {
        const bool branch_taken_0x2bcdf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BCDF4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2bcdf0) {
            ctx->pc = 0x2BCE08u;
            goto label_2bce08;
        }
    }
    ctx->pc = 0x2BCDF8u;
    // 0x2bcdf8: 0x8e04000c
    ctx->pc = 0x2bcdf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bcdfc: 0xdfb00000
    ctx->pc = 0x2bcdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bce00: 0x80ace5e
    ctx->pc = 0x2BCE00u;
    ctx->pc = 0x2BCE04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2B3978u;
    pbStartVu1_0x2b3978(rdram, ctx, runtime); return;
    ctx->pc = 0x2BCE08u;
label_2bce08:
    // 0x2bce08: 0xdfb00000
    ctx->pc = 0x2bce08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bce0c: 0x3e00008
    ctx->pc = 0x2BCE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCE10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BCE08u: goto label_2bce08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BCE14u;
}
