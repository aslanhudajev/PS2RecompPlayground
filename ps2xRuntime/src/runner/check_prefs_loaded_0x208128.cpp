#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: check_prefs_loaded
// Address: 0x208128 - 0x2081d4
void check_prefs_loaded_0x208128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x208128u;

    // 0x208128: 0x27bdffd0
    ctx->pc = 0x208128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20812c: 0xffbf0020
    ctx->pc = 0x20812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x208130: 0xffbe0010
    ctx->pc = 0x208130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x208134: 0x3a0f02d
    ctx->pc = 0x208134u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208138: 0xafc40000
    ctx->pc = 0x208138u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x20813c: 0xafc50004
    ctx->pc = 0x20813cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x208140: 0x3c020031
    ctx->pc = 0x208140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x208144: 0x8c42f184
    ctx->pc = 0x208144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x208148: 0x10400004
    ctx->pc = 0x208148u;
    {
        const bool branch_taken_0x208148 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208148) {
            ctx->pc = 0x20815Cu;
            goto label_20815c;
        }
    }
    ctx->pc = 0x208150u;
    // 0x208150: 0x102d
    ctx->pc = 0x208150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208154: 0x10000019
    ctx->pc = 0x208154u;
    {
        const bool branch_taken_0x208154 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208154) {
            ctx->pc = 0x2081BCu;
            goto label_2081bc;
        }
    }
    ctx->pc = 0x20815Cu;
label_20815c:
    // 0x20815c: 0x3c020031
    ctx->pc = 0x20815cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x208160: 0x8c421d90
    ctx->pc = 0x208160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7568)));
    // 0x208164: 0x14400012
    ctx->pc = 0x208164u;
    {
        const bool branch_taken_0x208164 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x208164) {
            ctx->pc = 0x2081B0u;
            goto label_2081b0;
        }
    }
    ctx->pc = 0x20816Cu;
    // 0x20816c: 0x24020020
    ctx->pc = 0x20816cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x208170: 0xafc20008
    ctx->pc = 0x208170u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x208174: 0x24020001
    ctx->pc = 0x208174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x208178: 0x3c010031
    ctx->pc = 0x208178u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x20817c: 0xac221d90
    ctx->pc = 0x20817cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7568), GPR_U32(ctx, 2));
    // 0x208180: 0x27c20008
    ctx->pc = 0x208180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
    // 0x208184: 0x8fc40000
    ctx->pc = 0x208184u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208188: 0x8fc50004
    ctx->pc = 0x208188u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20818c: 0x2406fffe
    ctx->pc = 0x20818cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x208190: 0x3c070032
    ctx->pc = 0x208190u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x208194: 0x24e7f458
    ctx->pc = 0x208194u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294964312));
    // 0x208198: 0x40402d
    ctx->pc = 0x208198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20819c: 0xc08258e
    ctx->pc = 0x20819Cu;
    SET_GPR_U32(ctx, 31, 0x2081A4u);
    ctx->pc = 0x209638u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveLoad_0x209638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2081A4u; }
    }
    if (ctx->pc != 0x2081A4u) { return; }
    ctx->pc = 0x2081A4u;
    // 0x2081a4: 0x24020001
    ctx->pc = 0x2081a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2081a8: 0x10000004
    ctx->pc = 0x2081A8u;
    {
        const bool branch_taken_0x2081a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2081a8) {
            ctx->pc = 0x2081BCu;
            goto label_2081bc;
        }
    }
    ctx->pc = 0x2081B0u;
label_2081b0:
    // 0x2081b0: 0x102d
    ctx->pc = 0x2081b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081b4: 0x10000001
    ctx->pc = 0x2081B4u;
    {
        const bool branch_taken_0x2081b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2081b4) {
            ctx->pc = 0x2081BCu;
            goto label_2081bc;
        }
    }
    ctx->pc = 0x2081BCu;
label_2081bc:
    // 0x2081bc: 0x3c0e82d
    ctx->pc = 0x2081bcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081c0: 0xdfbf0020
    ctx->pc = 0x2081c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2081c4: 0xdfbe0010
    ctx->pc = 0x2081c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2081c8: 0x27bd0030
    ctx->pc = 0x2081c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2081cc: 0x3e00008
    ctx->pc = 0x2081CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20815Cu: goto label_20815c;
            case 0x2081B0u: goto label_2081b0;
            case 0x2081BCu: goto label_2081bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2081D4u;
}
