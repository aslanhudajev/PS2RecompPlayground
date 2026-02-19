#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdateObjAttnOffset
// Address: 0x203288 - 0x20334c
void UpdateObjAttnOffset_0x203288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203288u;

    // 0x203288: 0x27bdffd0
    ctx->pc = 0x203288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20328c: 0xffbf0020
    ctx->pc = 0x20328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203290: 0xffb00010
    ctx->pc = 0x203290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x203294: 0x80802d
    ctx->pc = 0x203294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203298: 0xa0202d
    ctx->pc = 0x203298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20329c: 0x50800006
    ctx->pc = 0x20329Cu;
    {
        const bool branch_taken_0x20329c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20329c) {
            ctx->pc = 0x2032A0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2032B8u;
            goto label_2032b8;
        }
    }
    ctx->pc = 0x2032A4u;
    // 0x2032a4: 0x8e020064
    ctx->pc = 0x2032a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2032a8: 0x30420001
    ctx->pc = 0x2032a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2032ac: 0x50400007
    ctx->pc = 0x2032ACu;
    {
        const bool branch_taken_0x2032ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2032ac) {
            ctx->pc = 0x2032B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->pc = 0x2032CCu;
            goto label_2032cc;
        }
    }
    ctx->pc = 0x2032B4u;
    // 0x2032b4: 0xc6000030
    ctx->pc = 0x2032b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2032b8:
    // 0x2032b8: 0xe6000040
    ctx->pc = 0x2032b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2032bc: 0xc6000034
    ctx->pc = 0x2032bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2032c0: 0xe6000044
    ctx->pc = 0x2032c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2032c4: 0x1000001c
    ctx->pc = 0x2032C4u;
    {
        const bool branch_taken_0x2032c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2032C8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2032c4) {
            ctx->pc = 0x203338u;
            goto label_203338;
        }
    }
    ctx->pc = 0x2032CCu;
label_2032cc:
    // 0x2032cc: 0x30420002
    ctx->pc = 0x2032ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2032d0: 0x1040000c
    ctx->pc = 0x2032D0u;
    {
        const bool branch_taken_0x2032d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2032D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2032d0) {
            ctx->pc = 0x203304u;
            goto label_203304;
        }
    }
    ctx->pc = 0x2032D8u;
    // 0x2032d8: 0xc6000030
    ctx->pc = 0x2032d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2032dc: 0xc4810000
    ctx->pc = 0x2032dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2032e0: 0x46010000
    ctx->pc = 0x2032e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2032e4: 0xe6000040
    ctx->pc = 0x2032e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2032e8: 0xc6000034
    ctx->pc = 0x2032e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2032ec: 0xc4810004
    ctx->pc = 0x2032ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2032f0: 0x46010000
    ctx->pc = 0x2032f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2032f4: 0xe6000044
    ctx->pc = 0x2032f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2032f8: 0xc6000038
    ctx->pc = 0x2032f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2032fc: 0x1000000d
    ctx->pc = 0x2032FCu;
    {
        const bool branch_taken_0x2032fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203300u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x2032fc) {
            ctx->pc = 0x203334u;
            goto label_203334;
        }
    }
    ctx->pc = 0x203304u;
label_203304:
    // 0x203304: 0xc0b57a2
    ctx->pc = 0x203304u;
    SET_GPR_U32(ctx, 31, 0x20330Cu);
    ctx->pc = 0x203308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20330Cu; }
    }
    if (ctx->pc != 0x20330Cu) { return; }
    ctx->pc = 0x20330Cu;
    // 0x20330c: 0xc6000030
    ctx->pc = 0x20330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203310: 0xc7a10000
    ctx->pc = 0x203310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203314: 0x46010000
    ctx->pc = 0x203314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x203318: 0xe6000040
    ctx->pc = 0x203318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x20331c: 0xc6000034
    ctx->pc = 0x20331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203320: 0xc7a10004
    ctx->pc = 0x203320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203324: 0x46010000
    ctx->pc = 0x203324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x203328: 0xe6000044
    ctx->pc = 0x203328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x20332c: 0xc6000038
    ctx->pc = 0x20332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203330: 0xc7a10008
    ctx->pc = 0x203330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203334:
    // 0x203334: 0x46010000
    ctx->pc = 0x203334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_203338:
    // 0x203338: 0xe6000048
    ctx->pc = 0x203338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x20333c: 0xdfbf0020
    ctx->pc = 0x20333cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203340: 0xdfb00010
    ctx->pc = 0x203340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203344: 0x3e00008
    ctx->pc = 0x203344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2032B8u: goto label_2032b8;
            case 0x2032CCu: goto label_2032cc;
            case 0x203304u: goto label_203304;
            case 0x203334u: goto label_203334;
            case 0x203338u: goto label_203338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20334Cu;
}
