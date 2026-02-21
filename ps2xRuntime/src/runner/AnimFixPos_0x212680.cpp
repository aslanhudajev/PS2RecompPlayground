#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimFixPos
// Address: 0x212680 - 0x212758
void AnimFixPos_0x212680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212680u;

    // 0x212680: 0x27bdffb0
    ctx->pc = 0x212680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x212684: 0xffbf0040
    ctx->pc = 0x212684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x212688: 0xffb20030
    ctx->pc = 0x212688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x21268c: 0xffb10020
    ctx->pc = 0x21268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x212690: 0xffb00010
    ctx->pc = 0x212690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x212694: 0x80802d
    ctx->pc = 0x212694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212698: 0xa0882d
    ctx->pc = 0x212698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21269c: 0x12000026
    ctx->pc = 0x21269Cu;
    {
        const bool branch_taken_0x21269c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2126A0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21269c) {
            ctx->pc = 0x212738u;
            goto label_212738;
        }
    }
    ctx->pc = 0x2126A4u;
    // 0x2126a4: 0x8e040000
    ctx->pc = 0x2126a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2126a8: 0x24840030
    ctx->pc = 0x2126a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x2126ac: 0x3a0282d
    ctx->pc = 0x2126acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2126b0: 0xc0b57a2
    ctx->pc = 0x2126B0u;
    SET_GPR_U32(ctx, 31, 0x2126B8u);
    ctx->pc = 0x2126B4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2126B8u; }
    }
    if (ctx->pc != 0x2126B8u) { return; }
    ctx->pc = 0x2126B8u;
    // 0x2126b8: 0xafa00004
    ctx->pc = 0x2126b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2126bc: 0x8e220000
    ctx->pc = 0x2126bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2126c0: 0xc4400030
    ctx->pc = 0x2126c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2126c4: 0xc7a10000
    ctx->pc = 0x2126c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2126c8: 0x46010000
    ctx->pc = 0x2126c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2126cc: 0xe4400030
    ctx->pc = 0x2126ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2126d0: 0x8e220000
    ctx->pc = 0x2126d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2126d4: 0xc4400034
    ctx->pc = 0x2126d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2126d8: 0xc7a10004
    ctx->pc = 0x2126d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2126dc: 0x46010000
    ctx->pc = 0x2126dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2126e0: 0xe4400034
    ctx->pc = 0x2126e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2126e4: 0x8e220000
    ctx->pc = 0x2126e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2126e8: 0xc4400038
    ctx->pc = 0x2126e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2126ec: 0xc7a10008
    ctx->pc = 0x2126ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2126f0: 0x46010000
    ctx->pc = 0x2126f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2126f4: 0xe4400038
    ctx->pc = 0x2126f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2126f8: 0x8e020000
    ctx->pc = 0x2126f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2126fc: 0xac400030
    ctx->pc = 0x2126fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x212700: 0x8e020000
    ctx->pc = 0x212700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212704: 0xac400038
    ctx->pc = 0x212704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x212708: 0x8e030020
    ctx->pc = 0x212708u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21270c: 0x24020001
    ctx->pc = 0x21270cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x212710: 0x1462000a
    ctx->pc = 0x212710u;
    {
        const bool branch_taken_0x212710 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x212714u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x212710) {
            ctx->pc = 0x21273Cu;
            goto label_21273c;
        }
    }
    ctx->pc = 0x212718u;
    // 0x212718: 0x8e02001c
    ctx->pc = 0x212718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21271c: 0xac400040
    ctx->pc = 0x21271cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x212720: 0x8e02001c
    ctx->pc = 0x212720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x212724: 0xac400048
    ctx->pc = 0x212724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x212728: 0x8e02001c
    ctx->pc = 0x212728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21272c: 0xac400060
    ctx->pc = 0x21272cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x212730: 0x8e02001c
    ctx->pc = 0x212730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x212734: 0xac400068
    ctx->pc = 0x212734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
label_212738:
    // 0x212738: 0x24020001
    ctx->pc = 0x212738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21273c:
    // 0x21273c: 0xa2420012
    ctx->pc = 0x21273cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x212740: 0xdfbf0040
    ctx->pc = 0x212740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212744: 0xdfb20030
    ctx->pc = 0x212744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212748: 0xdfb10020
    ctx->pc = 0x212748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21274c: 0xdfb00010
    ctx->pc = 0x21274cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212750: 0x3e00008
    ctx->pc = 0x212750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212738u: goto label_212738;
            case 0x21273Cu: goto label_21273c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212758u;
}
