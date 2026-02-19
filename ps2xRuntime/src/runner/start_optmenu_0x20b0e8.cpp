#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: start_optmenu
// Address: 0x20b0e8 - 0x20b1e4
void start_optmenu_0x20b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20b0e8u;

    // 0x20b0e8: 0x27bdffc0
    ctx->pc = 0x20b0e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20b0ec: 0xffbf0030
    ctx->pc = 0x20b0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20b0f0: 0xffb20020
    ctx->pc = 0x20b0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20b0f4: 0xffb10010
    ctx->pc = 0x20b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20b0f8: 0xffb00000
    ctx->pc = 0x20b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b0fc: 0x80882d
    ctx->pc = 0x20b0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b100: 0xa0902d
    ctx->pc = 0x20b100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b104: 0xc0816cc
    ctx->pc = 0x20B104u;
    SET_GPR_U32(ctx, 31, 0x20B10Cu);
    ctx->pc = 0x20B108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x205B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearAllPlayerControls_0x205b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B10Cu; }
    }
    if (ctx->pc != 0x20B10Cu) { return; }
    ctx->pc = 0x20B10Cu;
    // 0x20b10c: 0x1220000b
    ctx->pc = 0x20B10Cu;
    {
        const bool branch_taken_0x20b10c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B110u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20b10c) {
            ctx->pc = 0x20B13Cu;
            goto label_20b13c;
        }
    }
    ctx->pc = 0x20B114u;
    // 0x20b114: 0x8c42f2f4
    ctx->pc = 0x20b114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
    // 0x20b118: 0x4400003
    ctx->pc = 0x20B118u;
    {
        const bool branch_taken_0x20b118 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B11Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20b118) {
            ctx->pc = 0x20B128u;
            goto label_20b128;
        }
    }
    ctx->pc = 0x20B120u;
    // 0x20b120: 0xc082cec
    ctx->pc = 0x20B120u;
    SET_GPR_U32(ctx, 31, 0x20B128u);
    ctx->pc = 0x20B124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_optmenu_0x20b3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B128u; }
    }
    if (ctx->pc != 0x20B128u) { return; }
    ctx->pc = 0x20B128u;
label_20b128:
    // 0x20b128: 0x3c030032
    ctx->pc = 0x20b128u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20b12c: 0x8c62f2f4
    ctx->pc = 0x20b12cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294963956)));
    // 0x20b130: 0x24420001
    ctx->pc = 0x20b130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20b134: 0x1000000c
    ctx->pc = 0x20B134u;
    {
        const bool branch_taken_0x20b134 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B138u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963956), GPR_U32(ctx, 2));
        if (branch_taken_0x20b134) {
            ctx->pc = 0x20B168u;
            goto label_20b168;
        }
    }
    ctx->pc = 0x20B13Cu;
label_20b13c:
    // 0x20b13c: 0x2404ffff
    ctx->pc = 0x20b13cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b140: 0xc082cec
    ctx->pc = 0x20B140u;
    SET_GPR_U32(ctx, 31, 0x20B148u);
    ctx->pc = 0x20B144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20B3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_optmenu_0x20b3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B148u; }
    }
    if (ctx->pc != 0x20B148u) { return; }
    ctx->pc = 0x20B148u;
    // 0x20b148: 0x3c020032
    ctx->pc = 0x20b148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b14c: 0x8c42f2f4
    ctx->pc = 0x20b14cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
    // 0x20b150: 0x440001e
    ctx->pc = 0x20B150u;
    {
        const bool branch_taken_0x20b150 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20B154u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x20b150) {
            ctx->pc = 0x20B1CCu;
            goto label_20b1cc;
        }
    }
    ctx->pc = 0x20B158u;
    // 0x20b158: 0x2463c558
    ctx->pc = 0x20b158u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952280));
    // 0x20b15c: 0x21080
    ctx->pc = 0x20b15cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b160: 0x431021
    ctx->pc = 0x20b160u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b164: 0x8c510000
    ctx->pc = 0x20b164u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b168:
    // 0x20b168: 0x3c020032
    ctx->pc = 0x20b168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b16c: 0x8c42f2f4
    ctx->pc = 0x20b16cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963956)));
    // 0x20b170: 0x28420004
    ctx->pc = 0x20b170u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x20b174: 0x14400006
    ctx->pc = 0x20B174u;
    {
        const bool branch_taken_0x20b174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20B178u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x20b174) {
            ctx->pc = 0x20B190u;
            goto label_20b190;
        }
    }
    ctx->pc = 0x20B17Cu;
    // 0x20b17c: 0x3c04003a
    ctx->pc = 0x20b17cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20b180: 0x24845310
    ctx->pc = 0x20b180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21264));
    // 0x20b184: 0xc0b49a6
    ctx->pc = 0x20B184u;
    SET_GPR_U32(ctx, 31, 0x20B18Cu);
    ctx->pc = 0x20B188u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B18Cu; }
    }
    if (ctx->pc != 0x20B18Cu) { return; }
    ctx->pc = 0x20B18Cu;
    // 0x20b18c: 0x3c03003c
    ctx->pc = 0x20b18cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_20b190:
    // 0x20b190: 0x2463c558
    ctx->pc = 0x20b190u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294952280));
    // 0x20b194: 0x3c100032
    ctx->pc = 0x20b194u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x20b198: 0x8e02f2f4
    ctx->pc = 0x20b198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294963956)));
    // 0x20b19c: 0x21080
    ctx->pc = 0x20b19cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b1a0: 0x431021
    ctx->pc = 0x20b1a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b1a4: 0xac510000
    ctx->pc = 0x20b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x20b1a8: 0x3c030032
    ctx->pc = 0x20b1a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20b1ac: 0x8e220000
    ctx->pc = 0x20b1acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20b1b0: 0xac62d358
    ctx->pc = 0x20b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955864), GPR_U32(ctx, 2));
    // 0x20b1b4: 0x220202d
    ctx->pc = 0x20b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1b8: 0xc082b3a
    ctx->pc = 0x20B1B8u;
    SET_GPR_U32(ctx, 31, 0x20B1C0u);
    ctx->pc = 0x20B1BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20ACE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_optmenu_nostack_0x20ace8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B1C0u; }
    }
    if (ctx->pc != 0x20B1C0u) { return; }
    ctx->pc = 0x20B1C0u;
    // 0x20b1c0: 0x8e02f2f4
    ctx->pc = 0x20b1c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294963956)));
    // 0x20b1c4: 0x24420001
    ctx->pc = 0x20b1c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20b1c8: 0xae22006c
    ctx->pc = 0x20b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_20b1cc:
    // 0x20b1cc: 0xdfbf0030
    ctx->pc = 0x20b1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b1d0: 0xdfb20020
    ctx->pc = 0x20b1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b1d4: 0xdfb10010
    ctx->pc = 0x20b1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b1d8: 0xdfb00000
    ctx->pc = 0x20b1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b1dc: 0x3e00008
    ctx->pc = 0x20B1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B1E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B128u: goto label_20b128;
            case 0x20B13Cu: goto label_20b13c;
            case 0x20B168u: goto label_20b168;
            case 0x20B190u: goto label_20b190;
            case 0x20B1CCu: goto label_20b1cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B1E4u;
}
