#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sendToIOP
// Address: 0x119e88 - 0x119efc
void sendToIOP_0x119e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119e88u;

    // 0x119e88: 0x27bdffc0
    ctx->pc = 0x119e88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119e8c: 0x80102d
    ctx->pc = 0x119e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e90: 0xffb10020
    ctx->pc = 0x119e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x119e94: 0xffbf0030
    ctx->pc = 0x119e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119e98: 0xc0882d
    ctx->pc = 0x119e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e9c: 0x1e200003
    ctx->pc = 0x119E9Cu;
    {
        const bool branch_taken_0x119e9c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x119EA0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x119e9c) {
            ctx->pc = 0x119EACu;
            goto label_119eac;
        }
    }
    ctx->pc = 0x119EA4u;
    // 0x119ea4: 0x10000010
    ctx->pc = 0x119EA4u;
    {
        const bool branch_taken_0x119ea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119EA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119ea4) {
            ctx->pc = 0x119EE8u;
            goto label_119ee8;
        }
    }
    ctx->pc = 0x119EACu;
label_119eac:
    // 0x119eac: 0xafa50000
    ctx->pc = 0x119eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x119eb0: 0x202d
    ctx->pc = 0x119eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119eb4: 0xafa20004
    ctx->pc = 0x119eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x119eb8: 0xafb10008
    ctx->pc = 0x119eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x119ebc: 0xc043948
    ctx->pc = 0x119EBCu;
    SET_GPR_U32(ctx, 31, 0x119EC4u);
    ctx->pc = 0x119EC0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EC4u; }
    }
    if (ctx->pc != 0x119EC4u) { return; }
    ctx->pc = 0x119EC4u;
    // 0x119ec4: 0x3a0202d
    ctx->pc = 0x119ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ec8: 0xc043998
    ctx->pc = 0x119EC8u;
    SET_GPR_U32(ctx, 31, 0x119ED0u);
    ctx->pc = 0x119ECCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10E660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x10e660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119ED0u; }
    }
    if (ctx->pc != 0x119ED0u) { return; }
    ctx->pc = 0x119ED0u;
    // 0x119ed0: 0x40802d
    ctx->pc = 0x119ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ed4: 0x0
    ctx->pc = 0x119ed4u;
    // NOP
label_119ed8:
    // 0x119ed8: 0xc043990
    ctx->pc = 0x119ED8u;
    SET_GPR_U32(ctx, 31, 0x119EE0u);
    ctx->pc = 0x119EDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x10e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EE0u; }
    }
    if (ctx->pc != 0x119EE0u) { return; }
    ctx->pc = 0x119EE0u;
    // 0x119ee0: 0x441fffd
    ctx->pc = 0x119EE0u;
    {
        const bool branch_taken_0x119ee0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119EE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119ee0) {
            ctx->pc = 0x119ED8u;
            goto label_119ed8;
        }
    }
    ctx->pc = 0x119EE8u;
label_119ee8:
    // 0x119ee8: 0xdfbf0030
    ctx->pc = 0x119ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119eec: 0xdfb10020
    ctx->pc = 0x119eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119ef0: 0xdfb00010
    ctx->pc = 0x119ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ef4: 0x3e00008
    ctx->pc = 0x119EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119EF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119EACu: goto label_119eac;
            case 0x119ED8u: goto label_119ed8;
            case 0x119EE8u: goto label_119ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119EFCu;
}
