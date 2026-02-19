#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdateObjColOffset
// Address: 0x2031c0 - 0x203284
void UpdateObjColOffset_0x2031c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2031c0u;

    // 0x2031c0: 0x27bdffd0
    ctx->pc = 0x2031c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2031c4: 0xffbf0020
    ctx->pc = 0x2031c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2031c8: 0xffb00010
    ctx->pc = 0x2031c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2031cc: 0x80802d
    ctx->pc = 0x2031ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031d0: 0xa0202d
    ctx->pc = 0x2031d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2031d4: 0x50800006
    ctx->pc = 0x2031D4u;
    {
        const bool branch_taken_0x2031d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2031d4) {
            ctx->pc = 0x2031D8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2031F0u;
            goto label_2031f0;
        }
    }
    ctx->pc = 0x2031DCu;
    // 0x2031dc: 0x8e020064
    ctx->pc = 0x2031dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2031e0: 0x30420001
    ctx->pc = 0x2031e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2031e4: 0x50400007
    ctx->pc = 0x2031E4u;
    {
        const bool branch_taken_0x2031e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2031e4) {
            ctx->pc = 0x2031E8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->pc = 0x203204u;
            goto label_203204;
        }
    }
    ctx->pc = 0x2031ECu;
    // 0x2031ec: 0xc6000030
    ctx->pc = 0x2031ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2031f0:
    // 0x2031f0: 0xe6000050
    ctx->pc = 0x2031f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2031f4: 0xc6000034
    ctx->pc = 0x2031f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2031f8: 0xe6000054
    ctx->pc = 0x2031f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2031fc: 0x1000001c
    ctx->pc = 0x2031FCu;
    {
        const bool branch_taken_0x2031fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203200u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2031fc) {
            ctx->pc = 0x203270u;
            goto label_203270;
        }
    }
    ctx->pc = 0x203204u;
label_203204:
    // 0x203204: 0x30420002
    ctx->pc = 0x203204u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x203208: 0x1040000c
    ctx->pc = 0x203208u;
    {
        const bool branch_taken_0x203208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20320Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x203208) {
            ctx->pc = 0x20323Cu;
            goto label_20323c;
        }
    }
    ctx->pc = 0x203210u;
    // 0x203210: 0xc6000030
    ctx->pc = 0x203210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203214: 0xc4810000
    ctx->pc = 0x203214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203218: 0x46010000
    ctx->pc = 0x203218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20321c: 0xe6000050
    ctx->pc = 0x20321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x203220: 0xc6000034
    ctx->pc = 0x203220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203224: 0xc4810004
    ctx->pc = 0x203224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203228: 0x46010000
    ctx->pc = 0x203228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20322c: 0xe6000054
    ctx->pc = 0x20322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x203230: 0xc6000038
    ctx->pc = 0x203230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203234: 0x1000000d
    ctx->pc = 0x203234u;
    {
        const bool branch_taken_0x203234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203238u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x203234) {
            ctx->pc = 0x20326Cu;
            goto label_20326c;
        }
    }
    ctx->pc = 0x20323Cu;
label_20323c:
    // 0x20323c: 0xc0b57a2
    ctx->pc = 0x20323Cu;
    SET_GPR_U32(ctx, 31, 0x203244u);
    ctx->pc = 0x203240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203244u; }
    }
    if (ctx->pc != 0x203244u) { return; }
    ctx->pc = 0x203244u;
    // 0x203244: 0xc6000030
    ctx->pc = 0x203244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203248: 0xc7a10000
    ctx->pc = 0x203248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20324c: 0x46010000
    ctx->pc = 0x20324cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x203250: 0xe6000050
    ctx->pc = 0x203250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x203254: 0xc6000034
    ctx->pc = 0x203254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203258: 0xc7a10004
    ctx->pc = 0x203258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20325c: 0x46010000
    ctx->pc = 0x20325cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x203260: 0xe6000054
    ctx->pc = 0x203260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x203264: 0xc6000038
    ctx->pc = 0x203264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203268: 0xc7a10008
    ctx->pc = 0x203268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20326c:
    // 0x20326c: 0x46010000
    ctx->pc = 0x20326cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_203270:
    // 0x203270: 0xe6000058
    ctx->pc = 0x203270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x203274: 0xdfbf0020
    ctx->pc = 0x203274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203278: 0xdfb00010
    ctx->pc = 0x203278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20327c: 0x3e00008
    ctx->pc = 0x20327Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203280u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2031F0u: goto label_2031f0;
            case 0x203204u: goto label_203204;
            case 0x20323Cu: goto label_20323c;
            case 0x20326Cu: goto label_20326c;
            case 0x203270u: goto label_203270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203284u;
}
