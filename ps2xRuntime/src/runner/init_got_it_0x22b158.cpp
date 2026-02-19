#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_got_it
// Address: 0x22b158 - 0x22b1cc
void init_got_it_0x22b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22b158u;

    // 0x22b158: 0x27bdffd0
    ctx->pc = 0x22b158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b15c: 0xffbf0020
    ctx->pc = 0x22b15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22b160: 0xffb10010
    ctx->pc = 0x22b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22b164: 0xffb00000
    ctx->pc = 0x22b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b168: 0x3c020033
    ctx->pc = 0x22b168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22b16c: 0x2450cb70
    ctx->pc = 0x22b16cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x22b170: 0x882d
    ctx->pc = 0x22b170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b174: 0x0
    ctx->pc = 0x22b174u;
    // NOP
label_22b178:
    // 0x22b178: 0xae000000
    ctx->pc = 0x22b178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x22b17c: 0x8e040018
    ctx->pc = 0x22b17cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x22b180: 0x50800005
    ctx->pc = 0x22B180u;
    {
        const bool branch_taken_0x22b180 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22b180) {
            ctx->pc = 0x22B184u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x22B198u;
            goto label_22b198;
        }
    }
    ctx->pc = 0x22B188u;
    // 0x22b188: 0xc0b0b38
    ctx->pc = 0x22B188u;
    SET_GPR_U32(ctx, 31, 0x22B190u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B190u; }
    }
    if (ctx->pc != 0x22B190u) { return; }
    ctx->pc = 0x22B190u;
    // 0x22b190: 0xae000018
    ctx->pc = 0x22b190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x22b194: 0x8e040014
    ctx->pc = 0x22b194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_22b198:
    // 0x22b198: 0x10800004
    ctx->pc = 0x22B198u;
    {
        const bool branch_taken_0x22b198 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B19Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x22b198) {
            ctx->pc = 0x22B1ACu;
            goto label_22b1ac;
        }
    }
    ctx->pc = 0x22B1A0u;
    // 0x22b1a0: 0xc0b0b38
    ctx->pc = 0x22B1A0u;
    SET_GPR_U32(ctx, 31, 0x22B1A8u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B1A8u; }
    }
    if (ctx->pc != 0x22B1A8u) { return; }
    ctx->pc = 0x22B1A8u;
    // 0x22b1a8: 0xae000014
    ctx->pc = 0x22b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_22b1ac:
    // 0x22b1ac: 0x2a220018
    ctx->pc = 0x22b1acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 24));
    // 0x22b1b0: 0x1440fff1
    ctx->pc = 0x22B1B0u;
    {
        const bool branch_taken_0x22b1b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22B1B4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 28));
        if (branch_taken_0x22b1b0) {
            ctx->pc = 0x22B178u;
            goto label_22b178;
        }
    }
    ctx->pc = 0x22B1B8u;
    // 0x22b1b8: 0xdfbf0020
    ctx->pc = 0x22b1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b1bc: 0xdfb10010
    ctx->pc = 0x22b1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b1c0: 0xdfb00000
    ctx->pc = 0x22b1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b1c4: 0x3e00008
    ctx->pc = 0x22B1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B1C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B178u: goto label_22b178;
            case 0x22B198u: goto label_22b198;
            case 0x22B1ACu: goto label_22b1ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B1CCu;
}
