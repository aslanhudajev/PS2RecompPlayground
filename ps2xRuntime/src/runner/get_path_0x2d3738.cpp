#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_path
// Address: 0x2d3738 - 0x2d3830
void get_path_0x2d3738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3738u;

    // 0x2d3738: 0x27bdfed0
    ctx->pc = 0x2d3738u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2d373c: 0xffbf0120
    ctx->pc = 0x2d373cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2d3740: 0xffb10110
    ctx->pc = 0x2d3740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x2d3744: 0xffb00100
    ctx->pc = 0x2d3744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2d3748: 0x80882d
    ctx->pc = 0x2d3748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d374c: 0xa0102d
    ctx->pc = 0x2d374cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3750: 0x10400009
    ctx->pc = 0x2D3750u;
    {
        const bool branch_taken_0x2d3750 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3754u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d3750) {
            ctx->pc = 0x2D3778u;
            goto label_2d3778;
        }
    }
    ctx->pc = 0x2D3758u;
    // 0x2d3758: 0x3a0202d
    ctx->pc = 0x2d3758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d375c: 0x3c05003b
    ctx->pc = 0x2d375cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2d3760: 0x24a578d0
    ctx->pc = 0x2d3760u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30928));
    // 0x2d3764: 0x40302d
    ctx->pc = 0x2d3764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3768: 0xc0b6252
    ctx->pc = 0x2D3768u;
    SET_GPR_U32(ctx, 31, 0x2D3770u);
    ctx->pc = 0x2D376Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3770u; }
    }
    if (ctx->pc != 0x2D3770u) { return; }
    ctx->pc = 0x2D3770u;
    // 0x2d3770: 0x10000007
    ctx->pc = 0x2D3770u;
    {
        const bool branch_taken_0x2d3770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3774u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x2d3770) {
            ctx->pc = 0x2D3790u;
            goto label_2d3790;
        }
    }
    ctx->pc = 0x2D3778u;
label_2d3778:
    // 0x2d3778: 0x3a0202d
    ctx->pc = 0x2d3778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d377c: 0x3c05003b
    ctx->pc = 0x2d377cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2d3780: 0x24a578d8
    ctx->pc = 0x2d3780u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30936));
    // 0x2d3784: 0xc0b6252
    ctx->pc = 0x2D3784u;
    SET_GPR_U32(ctx, 31, 0x2D378Cu);
    ctx->pc = 0x2D3788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D378Cu; }
    }
    if (ctx->pc != 0x2D378Cu) { return; }
    ctx->pc = 0x2D378Cu;
    // 0x2d378c: 0x82030000
    ctx->pc = 0x2d378cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2d3790:
    // 0x2d3790: 0x24020057
    ctx->pc = 0x2d3790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 87));
    // 0x2d3794: 0x14620008
    ctx->pc = 0x2D3794u;
    {
        const bool branch_taken_0x2d3794 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D3798u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d3794) {
            ctx->pc = 0x2D37B8u;
            goto label_2d37b8;
        }
    }
    ctx->pc = 0x2D379Cu;
    // 0x2d379c: 0x82030001
    ctx->pc = 0x2d379cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2d37a0: 0x24020041
    ctx->pc = 0x2d37a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x2d37a4: 0x14620004
    ctx->pc = 0x2D37A4u;
    {
        const bool branch_taken_0x2d37a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D37A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 68));
        if (branch_taken_0x2d37a4) {
            ctx->pc = 0x2D37B8u;
            goto label_2d37b8;
        }
    }
    ctx->pc = 0x2D37ACu;
    // 0x2d37ac: 0x82030002
    ctx->pc = 0x2d37acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2d37b0: 0x10620008
    ctx->pc = 0x2D37B0u;
    {
        const bool branch_taken_0x2d37b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2d37b0) {
            ctx->pc = 0x2D37D4u;
            goto label_2d37d4;
        }
    }
    ctx->pc = 0x2D37B8u;
label_2d37b8:
    // 0x2d37b8: 0xc0bf49e
    ctx->pc = 0x2D37B8u;
    SET_GPR_U32(ctx, 31, 0x2D37C0u);
    ctx->pc = 0x2D37BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 46));
    ctx->pc = 0x2FD278u;
    {
        const uint32_t __entryPc = ctx->pc;
        strrchr_0x2fd278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37C0u; }
    }
    if (ctx->pc != 0x2D37C0u) { return; }
    ctx->pc = 0x2D37C0u;
    // 0x2d37c0: 0x14400004
    ctx->pc = 0x2D37C0u;
    {
        const bool branch_taken_0x2d37c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D37C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d37c0) {
            ctx->pc = 0x2D37D4u;
            goto label_2d37d4;
        }
    }
    ctx->pc = 0x2D37C8u;
    // 0x2d37c8: 0x3c05003b
    ctx->pc = 0x2d37c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2d37cc: 0xc0bf1c1
    ctx->pc = 0x2D37CCu;
    SET_GPR_U32(ctx, 31, 0x2D37D4u);
    ctx->pc = 0x2D37D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30944));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37D4u; }
    }
    if (ctx->pc != 0x2D37D4u) { return; }
    ctx->pc = 0x2D37D4u;
label_2d37d4:
    // 0x2d37d4: 0xc08027c
    ctx->pc = 0x2D37D4u;
    SET_GPR_U32(ctx, 31, 0x2D37DCu);
    ctx->pc = 0x2D37D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2009F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fed_upper_0x2009f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37DCu; }
    }
    if (ctx->pc != 0x2D37DCu) { return; }
    ctx->pc = 0x2D37DCu;
    // 0x2d37dc: 0x220202d
    ctx->pc = 0x2d37dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d37e0: 0x3c05003a
    ctx->pc = 0x2d37e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2d37e4: 0xc0bf2c1
    ctx->pc = 0x2D37E4u;
    SET_GPR_U32(ctx, 31, 0x2D37ECu);
    ctx->pc = 0x2D37E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8688));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37ECu; }
    }
    if (ctx->pc != 0x2D37ECu) { return; }
    ctx->pc = 0x2D37ECu;
    // 0x2d37ec: 0x3c020031
    ctx->pc = 0x2d37ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2d37f0: 0x8c42f184
    ctx->pc = 0x2d37f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2d37f4: 0x10400004
    ctx->pc = 0x2D37F4u;
    {
        const bool branch_taken_0x2d37f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D37F8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x2d37f4) {
            ctx->pc = 0x2D3808u;
            goto label_2d3808;
        }
    }
    ctx->pc = 0x2D37FCu;
    // 0x2d37fc: 0x220202d
    ctx->pc = 0x2d37fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3800: 0xc0bf1c1
    ctx->pc = 0x2D3800u;
    SET_GPR_U32(ctx, 31, 0x2D3808u);
    ctx->pc = 0x2D3804u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30952));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3808u; }
    }
    if (ctx->pc != 0x2D3808u) { return; }
    ctx->pc = 0x2D3808u;
label_2d3808:
    // 0x2d3808: 0x220202d
    ctx->pc = 0x2d3808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d380c: 0xc0bf1c1
    ctx->pc = 0x2D380Cu;
    SET_GPR_U32(ctx, 31, 0x2D3814u);
    ctx->pc = 0x2D3810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3814u; }
    }
    if (ctx->pc != 0x2D3814u) { return; }
    ctx->pc = 0x2D3814u;
    // 0x2d3814: 0xc0b4dbe
    ctx->pc = 0x2D3814u;
    SET_GPR_U32(ctx, 31, 0x2D381Cu);
    ctx->pc = 0x2D3818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D36F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BackslashMe_0x2d36f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D381Cu; }
    }
    if (ctx->pc != 0x2D381Cu) { return; }
    ctx->pc = 0x2D381Cu;
    // 0x2d381c: 0xdfbf0120
    ctx->pc = 0x2d381cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d3820: 0xdfb10110
    ctx->pc = 0x2d3820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d3824: 0xdfb00100
    ctx->pc = 0x2d3824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d3828: 0x3e00008
    ctx->pc = 0x2D3828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D382Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3778u: goto label_2d3778;
            case 0x2D3790u: goto label_2d3790;
            case 0x2D37B8u: goto label_2d37b8;
            case 0x2D37D4u: goto label_2d37d4;
            case 0x2D3808u: goto label_2d3808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3830u;
}
