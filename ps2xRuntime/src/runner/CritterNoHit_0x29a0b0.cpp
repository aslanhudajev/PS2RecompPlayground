#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterNoHit
// Address: 0x29a0b0 - 0x29a12c
void CritterNoHit_0x29a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a0b0u;

    // 0x29a0b0: 0x27bdffd0
    ctx->pc = 0x29a0b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a0b4: 0xffbf0020
    ctx->pc = 0x29a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29a0b8: 0xffb10010
    ctx->pc = 0x29a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a0bc: 0xffb00000
    ctx->pc = 0x29a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a0c0: 0x80802d
    ctx->pc = 0x29a0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a0c4: 0xc0a6812
    ctx->pc = 0x29A0C4u;
    SET_GPR_U32(ctx, 31, 0x29A0CCu);
    ctx->pc = 0x29A0C8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A048u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNoHitSub_0x29a048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A0CCu; }
    }
    if (ctx->pc != 0x29A0CCu) { return; }
    ctx->pc = 0x29A0CCu;
    // 0x29a0cc: 0x14400012
    ctx->pc = 0x29A0CCu;
    {
        const bool branch_taken_0x29a0cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A0D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29a0cc) {
            ctx->pc = 0x29A118u;
            goto label_29a118;
        }
    }
    ctx->pc = 0x29A0D4u;
    // 0x29a0d4: 0x8e040b64
    ctx->pc = 0x29a0d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2916)));
    // 0x29a0d8: 0x5080000c
    ctx->pc = 0x29A0D8u;
    {
        const bool branch_taken_0x29a0d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x29a0d8) {
            ctx->pc = 0x29A0DCu;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
            ctx->pc = 0x29A10Cu;
            goto label_29a10c;
        }
    }
    ctx->pc = 0x29A0E0u;
    // 0x29a0e0: 0xc0a6812
    ctx->pc = 0x29A0E0u;
    SET_GPR_U32(ctx, 31, 0x29A0E8u);
    ctx->pc = 0x29A0E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A048u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNoHitSub_0x29a048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A0E8u; }
    }
    if (ctx->pc != 0x29A0E8u) { return; }
    ctx->pc = 0x29A0E8u;
    // 0x29a0e8: 0x1040000b
    ctx->pc = 0x29A0E8u;
    {
        const bool branch_taken_0x29a0e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A0ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a0e8) {
            ctx->pc = 0x29A118u;
            goto label_29a118;
        }
    }
    ctx->pc = 0x29A0F0u;
    // 0x29a0f0: 0x10000009
    ctx->pc = 0x29A0F0u;
    {
        const bool branch_taken_0x29a0f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29A0F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29a0f0) {
            ctx->pc = 0x29A118u;
            goto label_29a118;
        }
    }
    ctx->pc = 0x29A0F8u;
label_29a0f8:
    // 0x29a0f8: 0xc0a6812
    ctx->pc = 0x29A0F8u;
    SET_GPR_U32(ctx, 31, 0x29A100u);
    ctx->pc = 0x29A0FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A048u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNoHitSub_0x29a048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A100u; }
    }
    if (ctx->pc != 0x29A100u) { return; }
    ctx->pc = 0x29A100u;
    // 0x29a100: 0x14400005
    ctx->pc = 0x29A100u;
    {
        const bool branch_taken_0x29a100 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29a100) {
            ctx->pc = 0x29A118u;
            goto label_29a118;
        }
    }
    ctx->pc = 0x29A108u;
    // 0x29a108: 0x8e100b60
    ctx->pc = 0x29a108u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
label_29a10c:
    // 0x29a10c: 0x1600fffa
    ctx->pc = 0x29A10Cu;
    {
        const bool branch_taken_0x29a10c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x29A110u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29a10c) {
            ctx->pc = 0x29A0F8u;
            goto label_29a0f8;
        }
    }
    ctx->pc = 0x29A114u;
    // 0x29a114: 0x102d
    ctx->pc = 0x29a114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a118:
    // 0x29a118: 0xdfbf0020
    ctx->pc = 0x29a118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a11c: 0xdfb10010
    ctx->pc = 0x29a11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a120: 0xdfb00000
    ctx->pc = 0x29a120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a124: 0x3e00008
    ctx->pc = 0x29A124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A0F8u: goto label_29a0f8;
            case 0x29A10Cu: goto label_29a10c;
            case 0x29A118u: goto label_29a118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A12Cu;
}
