#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterAddHealthMeter
// Address: 0x293618 - 0x293754
void CritterAddHealthMeter_0x293618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293618u;

    // 0x293618: 0x27bdffd0
    ctx->pc = 0x293618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29361c: 0xffbf0020
    ctx->pc = 0x29361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x293620: 0xffb10010
    ctx->pc = 0x293620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x293624: 0xffb00000
    ctx->pc = 0x293624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293628: 0x80882d
    ctx->pc = 0x293628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29362c: 0x8e300004
    ctx->pc = 0x29362cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293630: 0x8e09005c
    ctx->pc = 0x293630u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x293634: 0x31220004
    ctx->pc = 0x293634u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 4));
    // 0x293638: 0x1040000b
    ctx->pc = 0x293638u;
    {
        const bool branch_taken_0x293638 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29363Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x293638) {
            ctx->pc = 0x293668u;
            goto label_293668;
        }
    }
    ctx->pc = 0x293640u;
    // 0x293640: 0x948c3
    ctx->pc = 0x293640u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 3));
    // 0x293644: 0x200202d
    ctx->pc = 0x293644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293648: 0x860500f8
    ctx->pc = 0x293648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x29364c: 0x860600fa
    ctx->pc = 0x29364cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 250)));
    // 0x293650: 0x860700fc
    ctx->pc = 0x293650u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x293654: 0x860800fe
    ctx->pc = 0x293654u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 254)));
    // 0x293658: 0x31290001
    ctx->pc = 0x293658u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), 1));
    // 0x29365c: 0xc0a7866
    ctx->pc = 0x29365Cu;
    SET_GPR_U32(ctx, 31, 0x293664u);
    ctx->pc = 0x293660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x29E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        HealthMeterStart_0x29e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293664u; }
    }
    if (ctx->pc != 0x293664u) { return; }
    ctx->pc = 0x293664u;
    // 0x293664: 0x40182d
    ctx->pc = 0x293664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293668:
    // 0x293668: 0xa6230484
    ctx->pc = 0x293668u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1156), (uint16_t)GPR_U32(ctx, 3));
    // 0x29366c: 0x8e02005c
    ctx->pc = 0x29366cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x293670: 0x30420800
    ctx->pc = 0x293670u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x293674: 0x10400032
    ctx->pc = 0x293674u;
    {
        const bool branch_taken_0x293674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293678u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x293674) {
            ctx->pc = 0x293740u;
            goto label_293740;
        }
    }
    ctx->pc = 0x29367Cu;
    // 0x29367c: 0x8e220004
    ctx->pc = 0x29367cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293680: 0x8c420120
    ctx->pc = 0x293680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x293684: 0x8c440028
    ctx->pc = 0x293684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x293688: 0x24a5e1c0
    ctx->pc = 0x293688u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959552));
    // 0x29368c: 0xc0847fc
    ctx->pc = 0x29368Cu;
    SET_GPR_U32(ctx, 31, 0x293694u);
    ctx->pc = 0x293690u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293694u; }
    }
    if (ctx->pc != 0x293694u) { return; }
    ctx->pc = 0x293694u;
    // 0x293694: 0x1040002a
    ctx->pc = 0x293694u;
    {
        const bool branch_taken_0x293694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293698u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 1160));
        if (branch_taken_0x293694) {
            ctx->pc = 0x293740u;
            goto label_293740;
        }
    }
    ctx->pc = 0x29369Cu;
    // 0x29369c: 0x40202d
    ctx->pc = 0x29369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2936a0: 0x200282d
    ctx->pc = 0x2936a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2936a4: 0x302d
    ctx->pc = 0x2936a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2936a8: 0xc08476a
    ctx->pc = 0x2936A8u;
    SET_GPR_U32(ctx, 31, 0x2936B0u);
    ctx->pc = 0x2936ACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2936B0u; }
    }
    if (ctx->pc != 0x2936B0u) { return; }
    ctx->pc = 0x2936B0u;
    // 0x2936b0: 0xae220488
    ctx->pc = 0x2936b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1160), GPR_U32(ctx, 2));
    // 0x2936b4: 0x8c440000
    ctx->pc = 0x2936b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2936b8: 0xc0b3f94
    ctx->pc = 0x2936B8u;
    SET_GPR_U32(ctx, 31, 0x2936C0u);
    ctx->pc = 0x2936BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2936C0u; }
    }
    if (ctx->pc != 0x2936C0u) { return; }
    ctx->pc = 0x2936C0u;
    // 0x2936c0: 0x8e220488
    ctx->pc = 0x2936c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1160)));
    // 0x2936c4: 0x8c440000
    ctx->pc = 0x2936c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2936c8: 0x3c050200
    ctx->pc = 0x2936c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)512 << 16));
    // 0x2936cc: 0xc0b41b8
    ctx->pc = 0x2936CCu;
    SET_GPR_U32(ctx, 31, 0x2936D4u);
    ctx->pc = 0x2936D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2936D4u; }
    }
    if (ctx->pc != 0x2936D4u) { return; }
    ctx->pc = 0x2936D4u;
    // 0x2936d4: 0x8e220488
    ctx->pc = 0x2936d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1160)));
    // 0x2936d8: 0x8c430000
    ctx->pc = 0x2936d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2936dc: 0x8e220004
    ctx->pc = 0x2936dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2936e0: 0xc4600030
    ctx->pc = 0x2936e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936e4: 0xc4410100
    ctx->pc = 0x2936e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2936e8: 0x46010000
    ctx->pc = 0x2936e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2936ec: 0xe4600030
    ctx->pc = 0x2936ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2936f0: 0x8e220488
    ctx->pc = 0x2936f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1160)));
    // 0x2936f4: 0x8c430000
    ctx->pc = 0x2936f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2936f8: 0x8e220004
    ctx->pc = 0x2936f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2936fc: 0xc4600034
    ctx->pc = 0x2936fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293700: 0xc4410104
    ctx->pc = 0x293700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293704: 0x46010000
    ctx->pc = 0x293704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293708: 0xe4600034
    ctx->pc = 0x293708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x29370c: 0x8e220488
    ctx->pc = 0x29370cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1160)));
    // 0x293710: 0x8c430000
    ctx->pc = 0x293710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293714: 0x8e220004
    ctx->pc = 0x293714u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293718: 0xc4600038
    ctx->pc = 0x293718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29371c: 0xc4410108
    ctx->pc = 0x29371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293720: 0x46010000
    ctx->pc = 0x293720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x293724: 0xe4600038
    ctx->pc = 0x293724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x293728: 0x200202d
    ctx->pc = 0x293728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29372c: 0x3c05003b
    ctx->pc = 0x29372cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x293730: 0x24a5e1c8
    ctx->pc = 0x293730u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959560));
    // 0x293734: 0xc084c2a
    ctx->pc = 0x293734u;
    SET_GPR_U32(ctx, 31, 0x29373Cu);
    ctx->pc = 0x293738u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x2130A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindNode_0x2130a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29373Cu; }
    }
    if (ctx->pc != 0x29373Cu) { return; }
    ctx->pc = 0x29373Cu;
    // 0x29373c: 0xae2204d0
    ctx->pc = 0x29373cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1232), GPR_U32(ctx, 2));
label_293740:
    // 0x293740: 0xdfbf0020
    ctx->pc = 0x293740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293744: 0xdfb10010
    ctx->pc = 0x293744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293748: 0xdfb00000
    ctx->pc = 0x293748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29374c: 0x3e00008
    ctx->pc = 0x29374Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293668u: goto label_293668;
            case 0x293740u: goto label_293740;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293754u;
}
