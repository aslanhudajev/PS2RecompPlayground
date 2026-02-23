#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiSeek
// Address: 0x177978 - 0x177a0c
void dvCiSeek_0x177978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiSeek");


    ctx->pc = 0x177978u;

    // 0x177978: 0x27bdfff0
    ctx->pc = 0x177978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17797c: 0x80382d
    ctx->pc = 0x17797cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177980: 0x14e00007
    ctx->pc = 0x177980u;
    {
        const bool branch_taken_0x177980 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x177984u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x177980) {
            ctx->pc = 0x1779A0u;
            goto label_1779a0;
        }
    }
    ctx->pc = 0x177988u;
    // 0x177988: 0x3c05002c
    ctx->pc = 0x177988u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x17798c: 0x202d
    ctx->pc = 0x17798cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177990: 0xc05dd3c
    ctx->pc = 0x177990u;
    SET_GPR_U32(ctx, 31, 0x177998u);
    ctx->pc = 0x177994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947840));
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177998u; }
        else if (ctx->pc != 0x177998u) { ctx->pc = 0x177998u; }
    }
    if (ctx->pc != 0x177998u) { return; }
    ctx->pc = 0x177998u;
    // 0x177998: 0x10000019
    ctx->pc = 0x177998u;
    {
        const bool branch_taken_0x177998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17799Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177998) {
            ctx->pc = 0x177A00u;
            goto label_177a00;
        }
    }
    ctx->pc = 0x1779A0u;
label_1779a0:
    // 0x1779a0: 0x14c00003
    ctx->pc = 0x1779A0u;
    {
        const bool branch_taken_0x1779a0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1779A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1779a0) {
            ctx->pc = 0x1779B0u;
            goto label_1779b0;
        }
    }
    ctx->pc = 0x1779A8u;
    // 0x1779a8: 0x1000000d
    ctx->pc = 0x1779A8u;
    {
        const bool branch_taken_0x1779a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1779ACu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x1779a8) {
            ctx->pc = 0x1779E0u;
            goto label_1779e0;
        }
    }
    ctx->pc = 0x1779B0u;
label_1779b0:
    // 0x1779b0: 0x14c20005
    ctx->pc = 0x1779B0u;
    {
        const bool branch_taken_0x1779b0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x1779B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1779b0) {
            ctx->pc = 0x1779C8u;
            goto label_1779c8;
        }
    }
    ctx->pc = 0x1779B8u;
    // 0x1779b8: 0x8ce60008
    ctx->pc = 0x1779b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1779bc: 0xc51021
    ctx->pc = 0x1779bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1779c0: 0x10000008
    ctx->pc = 0x1779C0u;
    {
        const bool branch_taken_0x1779c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1779C4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1779c0) {
            ctx->pc = 0x1779E4u;
            goto label_1779e4;
        }
    }
    ctx->pc = 0x1779C8u;
label_1779c8:
    // 0x1779c8: 0x14c20006
    ctx->pc = 0x1779C8u;
    {
        const bool branch_taken_0x1779c8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x1779CCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 8)));
        if (branch_taken_0x1779c8) {
            ctx->pc = 0x1779E4u;
            goto label_1779e4;
        }
    }
    ctx->pc = 0x1779D0u;
    // 0x1779d0: 0x8ce2000c
    ctx->pc = 0x1779d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1779d4: 0x451021
    ctx->pc = 0x1779d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1779d8: 0x10000002
    ctx->pc = 0x1779D8u;
    {
        const bool branch_taken_0x1779d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1779DCu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1779d8) {
            ctx->pc = 0x1779E4u;
            goto label_1779e4;
        }
    }
    ctx->pc = 0x1779E0u;
label_1779e0:
    // 0x1779e0: 0x8ce60008
    ctx->pc = 0x1779e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1779e4:
    // 0x1779e4: 0x8ce2000c
    ctx->pc = 0x1779e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1779e8: 0x2403ffff
    ctx->pc = 0x1779e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1779ec: 0x46202a
    ctx->pc = 0x1779ecu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x1779f0: 0xc4100a
    ctx->pc = 0x1779f0u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x1779f4: 0x62182a
    ctx->pc = 0x1779f4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1779f8: 0x3100a
    ctx->pc = 0x1779f8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x1779fc: 0xace2000c
    ctx->pc = 0x1779fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_177a00:
    // 0x177a00: 0xdfbf0000
    ctx->pc = 0x177a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a04: 0x3e00008
    ctx->pc = 0x177A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177A08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1779A0u: goto label_1779a0;
            case 0x1779B0u: goto label_1779b0;
            case 0x1779C8u: goto label_1779c8;
            case 0x1779E0u: goto label_1779e0;
            case 0x1779E4u: goto label_1779e4;
            case 0x177A00u: goto label_177a00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177A0Cu;
}
