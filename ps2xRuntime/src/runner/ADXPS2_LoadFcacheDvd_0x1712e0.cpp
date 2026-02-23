#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_LoadFcacheDvd
// Address: 0x1712e0 - 0x17133c
void ADXPS2_LoadFcacheDvd_0x1712e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_LoadFcacheDvd");


    ctx->pc = 0x1712e0u;

    // 0x1712e0: 0x27bdffe0
    ctx->pc = 0x1712e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1712e4: 0x80102d
    ctx->pc = 0x1712e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712e8: 0xffb00000
    ctx->pc = 0x1712e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1712ec: 0xffbf0010
    ctx->pc = 0x1712ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1712f0: 0x10400008
    ctx->pc = 0x1712F0u;
    {
        const bool branch_taken_0x1712f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1712F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1712f0) {
            ctx->pc = 0x171314u;
            goto label_171314;
        }
    }
    ctx->pc = 0x1712F8u;
    // 0x1712f8: 0x8c470004
    ctx->pc = 0x1712f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1712fc: 0x8c440000
    ctx->pc = 0x1712fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171300: 0x8c450008
    ctx->pc = 0x171300u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x171304: 0xc05e0e0
    ctx->pc = 0x171304u;
    SET_GPR_U32(ctx, 31, 0x17130Cu);
    ctx->pc = 0x171308u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x178380u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiLoadFcache_0x178380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17130Cu; }
        else if (ctx->pc != 0x17130Cu) { ctx->pc = 0x17130Cu; }
    }
    if (ctx->pc != 0x17130Cu) { return; }
    ctx->pc = 0x17130Cu;
    // 0x17130c: 0x10000006
    ctx->pc = 0x17130Cu;
    {
        const bool branch_taken_0x17130c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171310u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17130c) {
            ctx->pc = 0x171328u;
            goto label_171328;
        }
    }
    ctx->pc = 0x171314u;
label_171314:
    // 0x171314: 0x202d
    ctx->pc = 0x171314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171318: 0x282d
    ctx->pc = 0x171318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17131c: 0x302d
    ctx->pc = 0x17131cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171320: 0xc05e0e0
    ctx->pc = 0x171320u;
    SET_GPR_U32(ctx, 31, 0x171328u);
    ctx->pc = 0x171324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178380u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiLoadFcache_0x178380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171328u; }
        else if (ctx->pc != 0x171328u) { ctx->pc = 0x171328u; }
    }
    if (ctx->pc != 0x171328u) { return; }
    ctx->pc = 0x171328u;
label_171328:
    // 0x171328: 0x200102d
    ctx->pc = 0x171328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17132c: 0xdfbf0010
    ctx->pc = 0x17132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171330: 0xdfb00000
    ctx->pc = 0x171330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171334: 0x3e00008
    ctx->pc = 0x171334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171338u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171314u: goto label_171314;
            case 0x171328u: goto label_171328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17133Cu;
}
