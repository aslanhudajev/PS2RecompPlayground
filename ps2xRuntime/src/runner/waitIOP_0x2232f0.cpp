#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: waitIOP
// Address: 0x2232f0 - 0x22339c
void waitIOP_0x2232f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2232f0u;

    // 0x2232f0: 0x27bdffa0
    ctx->pc = 0x2232f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2232f4: 0xffbf0050
    ctx->pc = 0x2232f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2232f8: 0xffb40040
    ctx->pc = 0x2232f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2232fc: 0xffb30030
    ctx->pc = 0x2232fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x223300: 0xffb20020
    ctx->pc = 0x223300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x223304: 0xffb10010
    ctx->pc = 0x223304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x223308: 0xffb00000
    ctx->pc = 0x223308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22330c: 0xa0902d
    ctx->pc = 0x22330cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223310: 0x24113a98
    ctx->pc = 0x223310u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15000));
    // 0x223314: 0x24020002
    ctx->pc = 0x223314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x223318: 0x44880b
    ctx->pc = 0x223318u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x22331c: 0x3c13003c
    ctx->pc = 0x22331cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x223320: 0x1000000a
    ctx->pc = 0x223320u;
    {
        const bool branch_taken_0x223320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223324u;
        SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
        if (branch_taken_0x223320) {
            ctx->pc = 0x22334Cu;
            goto label_22334c;
        }
    }
    ctx->pc = 0x223328u;
label_223328:
    // 0x223328: 0x2403ffff
    ctx->pc = 0x223328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22332c: 0x0
    ctx->pc = 0x22332cu;
    // NOP
label_223330:
    // 0x223330: 0x2442ffff
    ctx->pc = 0x223330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x223334: 0x0
    ctx->pc = 0x223334u;
    // NOP
    // 0x223338: 0x0
    ctx->pc = 0x223338u;
    // NOP
    // 0x22333c: 0x0
    ctx->pc = 0x22333cu;
    // NOP
    // 0x223340: 0x0
    ctx->pc = 0x223340u;
    // NOP
    // 0x223344: 0x1443fffa
    ctx->pc = 0x223344u;
    {
        const bool branch_taken_0x223344 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x223344) {
            ctx->pc = 0x223330u;
            goto label_223330;
        }
    }
    ctx->pc = 0x22334Cu;
label_22334c:
    // 0x22334c: 0xc0c1926
    ctx->pc = 0x22334Cu;
    SET_GPR_U32(ctx, 31, 0x223354u);
    ctx->pc = 0x223350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 3904));
    ctx->pc = 0x306498u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x306498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223354u; }
    }
    if (ctx->pc != 0x223354u) { return; }
    ctx->pc = 0x223354u;
    // 0x223354: 0x40802d
    ctx->pc = 0x223354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223358: 0x12000007
    ctx->pc = 0x223358u;
    {
        const bool branch_taken_0x223358 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x22335Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x223358) {
            ctx->pc = 0x223378u;
            goto label_223378;
        }
    }
    ctx->pc = 0x223360u;
    // 0x223360: 0x1620fff1
    ctx->pc = 0x223360u;
    {
        const bool branch_taken_0x223360 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x223364u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
        if (branch_taken_0x223360) {
            ctx->pc = 0x223328u;
            goto label_223328;
        }
    }
    ctx->pc = 0x223368u;
    // 0x223368: 0x12400004
    ctx->pc = 0x223368u;
    {
        const bool branch_taken_0x223368 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x22336Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223368) {
            ctx->pc = 0x22337Cu;
            goto label_22337c;
        }
    }
    ctx->pc = 0x223370u;
    // 0x223370: 0xc0b492e
    ctx->pc = 0x223370u;
    SET_GPR_U32(ctx, 31, 0x223378u);
    ctx->pc = 0x223374u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 26992));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223378u; }
    }
    if (ctx->pc != 0x223378u) { return; }
    ctx->pc = 0x223378u;
label_223378:
    // 0x223378: 0x200102d
    ctx->pc = 0x223378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22337c:
    // 0x22337c: 0xdfbf0050
    ctx->pc = 0x22337cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223380: 0xdfb40040
    ctx->pc = 0x223380u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223384: 0xdfb30030
    ctx->pc = 0x223384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223388: 0xdfb20020
    ctx->pc = 0x223388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22338c: 0xdfb10010
    ctx->pc = 0x22338cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223390: 0xdfb00000
    ctx->pc = 0x223390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223394: 0x3e00008
    ctx->pc = 0x223394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223398u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223328u: goto label_223328;
            case 0x223330u: goto label_223330;
            case 0x22334Cu: goto label_22334c;
            case 0x223378u: goto label_223378;
            case 0x22337Cu: goto label_22337c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22339Cu;
}
