#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: enemy_mod_alpha
// Address: 0x23b188 - 0x23b27c
void enemy_mod_alpha_0x23b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23b188u;

    // 0x23b188: 0x27bdffc0
    ctx->pc = 0x23b188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23b18c: 0xffbf0030
    ctx->pc = 0x23b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23b190: 0xffb20020
    ctx->pc = 0x23b190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23b194: 0xffb10010
    ctx->pc = 0x23b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23b198: 0xffb00000
    ctx->pc = 0x23b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b19c: 0x80902d
    ctx->pc = 0x23b19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1a0: 0xa0882d
    ctx->pc = 0x23b1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1a4: 0xc0b40f8
    ctx->pc = 0x23B1A4u;
    SET_GPR_U32(ctx, 31, 0x23B1ACu);
    ctx->pc = 0x23B1A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    ctx->pc = 0x2D03E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeGetAlpha_0x2d03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B1ACu; }
    }
    if (ctx->pc != 0x23B1ACu) { return; }
    ctx->pc = 0x23B1ACu;
    // 0x23b1ac: 0x1a200004
    ctx->pc = 0x23B1ACu;
    {
        const bool branch_taken_0x23b1ac = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23B1B0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b1ac) {
            ctx->pc = 0x23B1C0u;
            goto label_23b1c0;
        }
    }
    ctx->pc = 0x23B1B4u;
    // 0x23b1b4: 0x2a0200ff
    ctx->pc = 0x23b1b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 255));
    // 0x23b1b8: 0x1040002b
    ctx->pc = 0x23B1B8u;
    {
        const bool branch_taken_0x23b1b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B1BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x23b1b8) {
            ctx->pc = 0x23B268u;
            goto label_23b268;
        }
    }
    ctx->pc = 0x23B1C0u;
label_23b1c0:
    // 0x23b1c0: 0x6210003
    ctx->pc = 0x23B1C0u;
    {
        const bool branch_taken_0x23b1c0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x23B1C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23b1c0) {
            ctx->pc = 0x23B1D0u;
            goto label_23b1d0;
        }
    }
    ctx->pc = 0x23B1C8u;
    // 0x23b1c8: 0x12000027
    ctx->pc = 0x23B1C8u;
    {
        const bool branch_taken_0x23b1c8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B1CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x23b1c8) {
            ctx->pc = 0x23B268u;
            goto label_23b268;
        }
    }
    ctx->pc = 0x23B1D0u;
label_23b1d0:
    // 0x23b1d0: 0x8c42ffbc
    ctx->pc = 0x23b1d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23b1d4: 0x2221818
    ctx->pc = 0x23b1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23b1d8: 0x708021
    ctx->pc = 0x23b1d8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23b1dc: 0x6000004
    ctx->pc = 0x23B1DCu;
    {
        const bool branch_taken_0x23b1dc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x23B1E0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 256));
        if (branch_taken_0x23b1dc) {
            ctx->pc = 0x23B1F0u;
            goto label_23b1f0;
        }
    }
    ctx->pc = 0x23B1E4u;
    // 0x23b1e4: 0x240200ff
    ctx->pc = 0x23b1e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x23b1e8: 0x10000002
    ctx->pc = 0x23B1E8u;
    {
        const bool branch_taken_0x23b1e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B1ECu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
        if (branch_taken_0x23b1e8) {
            ctx->pc = 0x23B1F4u;
            goto label_23b1f4;
        }
    }
    ctx->pc = 0x23B1F0u;
label_23b1f0:
    // 0x23b1f0: 0x102d
    ctx->pc = 0x23b1f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b1f4:
    // 0x23b1f4: 0x40802d
    ctx->pc = 0x23b1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1f8: 0x240200ff
    ctx->pc = 0x23b1f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x23b1fc: 0x1602000a
    ctx->pc = 0x23B1FCu;
    {
        const bool branch_taken_0x23b1fc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x23B200u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
        if (branch_taken_0x23b1fc) {
            ctx->pc = 0x23B228u;
            goto label_23b228;
        }
    }
    ctx->pc = 0x23B204u;
    // 0x23b204: 0x24050002
    ctx->pc = 0x23b204u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b208: 0xc0b41b8
    ctx->pc = 0x23B208u;
    SET_GPR_U32(ctx, 31, 0x23B210u);
    ctx->pc = 0x23B20Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B210u; }
    }
    if (ctx->pc != 0x23B210u) { return; }
    ctx->pc = 0x23B210u;
    // 0x23b210: 0x8e4401f0
    ctx->pc = 0x23b210u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x23b214: 0x24050002
    ctx->pc = 0x23b214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b218: 0xc0b41b8
    ctx->pc = 0x23B218u;
    SET_GPR_U32(ctx, 31, 0x23B220u);
    ctx->pc = 0x23B21Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B220u; }
    }
    if (ctx->pc != 0x23B220u) { return; }
    ctx->pc = 0x23B220u;
    // 0x23b220: 0x10000011
    ctx->pc = 0x23B220u;
    {
        const bool branch_taken_0x23b220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B224u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x23b220) {
            ctx->pc = 0x23B268u;
            goto label_23b268;
        }
    }
    ctx->pc = 0x23B228u;
label_23b228:
    // 0x23b228: 0x200282d
    ctx->pc = 0x23b228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b22c: 0xc0b40c0
    ctx->pc = 0x23B22Cu;
    SET_GPR_U32(ctx, 31, 0x23B234u);
    ctx->pc = 0x23B230u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B234u; }
    }
    if (ctx->pc != 0x23B234u) { return; }
    ctx->pc = 0x23B234u;
    // 0x23b234: 0x8e4401f0
    ctx->pc = 0x23b234u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x23b238: 0x200282d
    ctx->pc = 0x23b238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b23c: 0xc0b40c0
    ctx->pc = 0x23B23Cu;
    SET_GPR_U32(ctx, 31, 0x23B244u);
    ctx->pc = 0x23B240u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B244u; }
    }
    if (ctx->pc != 0x23B244u) { return; }
    ctx->pc = 0x23B244u;
    // 0x23b244: 0x8e440070
    ctx->pc = 0x23b244u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x23b248: 0x24050002
    ctx->pc = 0x23b248u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b24c: 0xc0b41e4
    ctx->pc = 0x23B24Cu;
    SET_GPR_U32(ctx, 31, 0x23B254u);
    ctx->pc = 0x23B250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B254u; }
    }
    if (ctx->pc != 0x23B254u) { return; }
    ctx->pc = 0x23B254u;
    // 0x23b254: 0x8e4401f0
    ctx->pc = 0x23b254u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x23b258: 0x24050002
    ctx->pc = 0x23b258u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b25c: 0xc0b41e4
    ctx->pc = 0x23B25Cu;
    SET_GPR_U32(ctx, 31, 0x23B264u);
    ctx->pc = 0x23B260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B264u; }
    }
    if (ctx->pc != 0x23B264u) { return; }
    ctx->pc = 0x23B264u;
    // 0x23b264: 0xdfbf0030
    ctx->pc = 0x23b264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b268:
    // 0x23b268: 0xdfb20020
    ctx->pc = 0x23b268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b26c: 0xdfb10010
    ctx->pc = 0x23b26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b270: 0xdfb00000
    ctx->pc = 0x23b270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b274: 0x3e00008
    ctx->pc = 0x23B274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B278u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B1C0u: goto label_23b1c0;
            case 0x23B1D0u: goto label_23b1d0;
            case 0x23B1F0u: goto label_23b1f0;
            case 0x23B1F4u: goto label_23b1f4;
            case 0x23B228u: goto label_23b228;
            case 0x23B268u: goto label_23b268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B27Cu;
}
