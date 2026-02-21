#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_blocks_free
// Address: 0x2da4a0 - 0x2da4f4
void inflate_blocks_free_0x2da4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2da4a0u;

label_2da4a0:
    // 0x2da4a0: 0x27bdffd0
    ctx->pc = 0x2da4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_2da4a4:
    // 0x2da4a4: 0xffbf0020
    ctx->pc = 0x2da4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2da4a8:
    // 0x2da4a8: 0xffb10010
    ctx->pc = 0x2da4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2da4ac:
    // 0x2da4ac: 0xffb00000
    ctx->pc = 0x2da4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2da4b0:
    // 0x2da4b0: 0x80882d
    ctx->pc = 0x2da4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da4b4:
    // 0x2da4b4: 0xc0b655a
label_2da4b8:
    if (ctx->pc == 0x2DA4B8u) {
        ctx->pc = 0x2DA4B8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4BCu;
        goto label_2da4bc;
    }
    ctx->pc = 0x2DA4B4u;
    SET_GPR_U32(ctx, 31, 0x2DA4BCu);
    ctx->pc = 0x2DA4B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D9568u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_reset_0x2d9568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4BCu; }
    }
    if (ctx->pc != 0x2DA4BCu) { return; }
    ctx->pc = 0x2DA4BCu;
label_2da4bc:
    // 0x2da4bc: 0x8e020024
    ctx->pc = 0x2da4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2da4c0:
    // 0x2da4c0: 0x8e040028
    ctx->pc = 0x2da4c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2da4c4:
    // 0x2da4c4: 0x40f809
label_2da4c8:
    if (ctx->pc == 0x2DA4C8u) {
        ctx->pc = 0x2DA4C8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x2DA4CCu;
        goto label_2da4cc;
    }
    ctx->pc = 0x2DA4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA4CCu);
        ctx->pc = 0x2DA4C8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DA4A0u: goto label_2da4a0;
            case 0x2DA4A4u: goto label_2da4a4;
            case 0x2DA4A8u: goto label_2da4a8;
            case 0x2DA4ACu: goto label_2da4ac;
            case 0x2DA4B0u: goto label_2da4b0;
            case 0x2DA4B4u: goto label_2da4b4;
            case 0x2DA4B8u: goto label_2da4b8;
            case 0x2DA4BCu: goto label_2da4bc;
            case 0x2DA4C0u: goto label_2da4c0;
            case 0x2DA4C4u: goto label_2da4c4;
            case 0x2DA4C8u: goto label_2da4c8;
            case 0x2DA4CCu: goto label_2da4cc;
            case 0x2DA4D0u: goto label_2da4d0;
            case 0x2DA4D4u: goto label_2da4d4;
            case 0x2DA4D8u: goto label_2da4d8;
            case 0x2DA4DCu: goto label_2da4dc;
            case 0x2DA4E0u: goto label_2da4e0;
            case 0x2DA4E4u: goto label_2da4e4;
            case 0x2DA4E8u: goto label_2da4e8;
            case 0x2DA4ECu: goto label_2da4ec;
            case 0x2DA4F0u: goto label_2da4f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4CCu; }
            if (ctx->pc != 0x2DA4CCu) { return; }
        }
    }
    ctx->pc = 0x2DA4CCu;
label_2da4cc:
    // 0x2da4cc: 0x8e020024
    ctx->pc = 0x2da4ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2da4d0:
    // 0x2da4d0: 0x8e040028
    ctx->pc = 0x2da4d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2da4d4:
    // 0x2da4d4: 0x40f809
label_2da4d8:
    if (ctx->pc == 0x2DA4D8u) {
        ctx->pc = 0x2DA4D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4DCu;
        goto label_2da4dc;
    }
    ctx->pc = 0x2DA4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA4DCu);
        ctx->pc = 0x2DA4D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DA4A0u: goto label_2da4a0;
            case 0x2DA4A4u: goto label_2da4a4;
            case 0x2DA4A8u: goto label_2da4a8;
            case 0x2DA4ACu: goto label_2da4ac;
            case 0x2DA4B0u: goto label_2da4b0;
            case 0x2DA4B4u: goto label_2da4b4;
            case 0x2DA4B8u: goto label_2da4b8;
            case 0x2DA4BCu: goto label_2da4bc;
            case 0x2DA4C0u: goto label_2da4c0;
            case 0x2DA4C4u: goto label_2da4c4;
            case 0x2DA4C8u: goto label_2da4c8;
            case 0x2DA4CCu: goto label_2da4cc;
            case 0x2DA4D0u: goto label_2da4d0;
            case 0x2DA4D4u: goto label_2da4d4;
            case 0x2DA4D8u: goto label_2da4d8;
            case 0x2DA4DCu: goto label_2da4dc;
            case 0x2DA4E0u: goto label_2da4e0;
            case 0x2DA4E4u: goto label_2da4e4;
            case 0x2DA4E8u: goto label_2da4e8;
            case 0x2DA4ECu: goto label_2da4ec;
            case 0x2DA4F0u: goto label_2da4f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4DCu; }
            if (ctx->pc != 0x2DA4DCu) { return; }
        }
    }
    ctx->pc = 0x2DA4DCu;
label_2da4dc:
    // 0x2da4dc: 0x102d
    ctx->pc = 0x2da4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da4e0:
    // 0x2da4e0: 0xdfbf0020
    ctx->pc = 0x2da4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2da4e4:
    // 0x2da4e4: 0xdfb10010
    ctx->pc = 0x2da4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2da4e8:
    // 0x2da4e8: 0xdfb00000
    ctx->pc = 0x2da4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da4ec:
    // 0x2da4ec: 0x3e00008
label_2da4f0:
    if (ctx->pc == 0x2DA4F0u) {
        ctx->pc = 0x2DA4F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2DA4F4u;
        goto label_fallthrough_0x2da4ec;
    }
    ctx->pc = 0x2DA4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA4F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DA4A0u: goto label_2da4a0;
            case 0x2DA4A4u: goto label_2da4a4;
            case 0x2DA4A8u: goto label_2da4a8;
            case 0x2DA4ACu: goto label_2da4ac;
            case 0x2DA4B0u: goto label_2da4b0;
            case 0x2DA4B4u: goto label_2da4b4;
            case 0x2DA4B8u: goto label_2da4b8;
            case 0x2DA4BCu: goto label_2da4bc;
            case 0x2DA4C0u: goto label_2da4c0;
            case 0x2DA4C4u: goto label_2da4c4;
            case 0x2DA4C8u: goto label_2da4c8;
            case 0x2DA4CCu: goto label_2da4cc;
            case 0x2DA4D0u: goto label_2da4d0;
            case 0x2DA4D4u: goto label_2da4d4;
            case 0x2DA4D8u: goto label_2da4d8;
            case 0x2DA4DCu: goto label_2da4dc;
            case 0x2DA4E0u: goto label_2da4e0;
            case 0x2DA4E4u: goto label_2da4e4;
            case 0x2DA4E8u: goto label_2da4e8;
            case 0x2DA4ECu: goto label_2da4ec;
            case 0x2DA4F0u: goto label_2da4f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2da4ec:
    ctx->pc = 0x2DA4F4u;
}
