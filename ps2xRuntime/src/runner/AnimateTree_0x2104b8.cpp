#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimateTree
// Address: 0x2104b8 - 0x2106dc
void AnimateTree_0x2104b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2104b8u;

    // 0x2104b8: 0x27bdff40
    ctx->pc = 0x2104b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2104bc: 0xffbf00a0
    ctx->pc = 0x2104bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2104c0: 0xffbe0090
    ctx->pc = 0x2104c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2104c4: 0xffb70080
    ctx->pc = 0x2104c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2104c8: 0xffb60070
    ctx->pc = 0x2104c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2104cc: 0xffb50060
    ctx->pc = 0x2104ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2104d0: 0xffb40050
    ctx->pc = 0x2104d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2104d4: 0xffb30040
    ctx->pc = 0x2104d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2104d8: 0xffb20030
    ctx->pc = 0x2104d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2104dc: 0xffb10020
    ctx->pc = 0x2104dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2104e0: 0xffb00010
    ctx->pc = 0x2104e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2104e4: 0xe7b400b0
    ctx->pc = 0x2104e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2104e8: 0x80802d
    ctx->pc = 0x2104e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104ec: 0xa0a82d
    ctx->pc = 0x2104ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104f0: 0xc0b82d
    ctx->pc = 0x2104f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104f4: 0x46006506
    ctx->pc = 0x2104f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2104f8: 0xe0882d
    ctx->pc = 0x2104f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104fc: 0x982d
    ctx->pc = 0x2104fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210500: 0xc083ee2
    ctx->pc = 0x210500u;
    SET_GPR_U32(ctx, 31, 0x210508u);
    ctx->pc = 0x210504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimCompressSetup_0x20fb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210508u; }
    }
    if (ctx->pc != 0x210508u) { return; }
    ctx->pc = 0x210508u;
    // 0x210508: 0xc08403a
    ctx->pc = 0x210508u;
    SET_GPR_U32(ctx, 31, 0x210510u);
    ctx->pc = 0x21050Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2100E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcAnimInfo_0x2100e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210510u; }
    }
    if (ctx->pc != 0x210510u) { return; }
    ctx->pc = 0x210510u;
    // 0x210510: 0x40f02d
    ctx->pc = 0x210510u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210514: 0x8616000e
    ctx->pc = 0x210514u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x210518: 0x92020036
    ctx->pc = 0x210518u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x21051c: 0x384200ff
    ctx->pc = 0x21051cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 255));
    // 0x210520: 0x2c540001
    ctx->pc = 0x210520u;
    SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x210524: 0x86020034
    ctx->pc = 0x210524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x210528: 0xafa20000
    ctx->pc = 0x210528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21052c: 0x24020001
    ctx->pc = 0x21052cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210530: 0x12220010
    ctx->pc = 0x210530u;
    {
        const bool branch_taken_0x210530 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x210534u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
        if (branch_taken_0x210530) {
            ctx->pc = 0x210574u;
            goto label_210574;
        }
    }
    ctx->pc = 0x210538u;
    // 0x210538: 0x50400005
    ctx->pc = 0x210538u;
    {
        const bool branch_taken_0x210538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x210538) {
            ctx->pc = 0x21053Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x210550u;
            goto label_210550;
        }
    }
    ctx->pc = 0x210540u;
    // 0x210540: 0x12200007
    ctx->pc = 0x210540u;
    {
        const bool branch_taken_0x210540 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x210540) {
            ctx->pc = 0x210560u;
            goto label_210560;
        }
    }
    ctx->pc = 0x210548u;
    // 0x210548: 0x10000011
    ctx->pc = 0x210548u;
    {
        const bool branch_taken_0x210548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21054Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x210548) {
            ctx->pc = 0x210590u;
            goto label_210590;
        }
    }
    ctx->pc = 0x210550u;
label_210550:
    // 0x210550: 0x1222000b
    ctx->pc = 0x210550u;
    {
        const bool branch_taken_0x210550 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x210550) {
            ctx->pc = 0x210580u;
            goto label_210580;
        }
    }
    ctx->pc = 0x210558u;
    // 0x210558: 0x1000000d
    ctx->pc = 0x210558u;
    {
        const bool branch_taken_0x210558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21055Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x210558) {
            ctx->pc = 0x210590u;
            goto label_210590;
        }
    }
    ctx->pc = 0x210560u;
label_210560:
    // 0x210560: 0x1280000b
    ctx->pc = 0x210560u;
    {
        const bool branch_taken_0x210560 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x210564u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x210560) {
            ctx->pc = 0x210590u;
            goto label_210590;
        }
    }
    ctx->pc = 0x210568u;
    // 0x210568: 0x2b61026
    ctx->pc = 0x210568u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x21056c: 0x10000008
    ctx->pc = 0x21056Cu;
    {
        const bool branch_taken_0x21056c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210570u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        if (branch_taken_0x21056c) {
            ctx->pc = 0x210590u;
            goto label_210590;
        }
    }
    ctx->pc = 0x210574u;
label_210574:
    // 0x210574: 0x24020001
    ctx->pc = 0x210574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210578: 0x10000005
    ctx->pc = 0x210578u;
    {
        const bool branch_taken_0x210578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21057Cu;
        if (GPR_U32(ctx, 20) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
        if (branch_taken_0x210578) {
            ctx->pc = 0x210590u;
            goto label_210590;
        }
    }
    ctx->pc = 0x210580u;
label_210580:
    // 0x210580: 0x56800003
    ctx->pc = 0x210580u;
    {
        const bool branch_taken_0x210580 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x210580) {
            ctx->pc = 0x210584u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x210590u;
            goto label_210590;
        }
    }
    ctx->pc = 0x210588u;
    // 0x210588: 0x56b60001
    ctx->pc = 0x210588u;
    {
        const bool branch_taken_0x210588 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 22));
        if (branch_taken_0x210588) {
            ctx->pc = 0x21058Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x210590u;
            goto label_210590;
        }
    }
    ctx->pc = 0x210590u;
label_210590:
    // 0x210590: 0x1240002a
    ctx->pc = 0x210590u;
    {
        const bool branch_taken_0x210590 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x210594u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x210590) {
            ctx->pc = 0x21063Cu;
            goto label_21063c;
        }
    }
    ctx->pc = 0x210598u;
    // 0x210598: 0x1280000b
    ctx->pc = 0x210598u;
    {
        const bool branch_taken_0x210598 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x21059Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x210598) {
            ctx->pc = 0x2105C8u;
            goto label_2105c8;
        }
    }
    ctx->pc = 0x2105A0u;
    // 0x2105a0: 0x3c013d08
    ctx->pc = 0x2105a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2105a4: 0x34218889
    ctx->pc = 0x2105a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2105a8: 0x44810800
    ctx->pc = 0x2105a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2105ac: 0x46010001
    ctx->pc = 0x2105acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2105b0: 0xc6010020
    ctx->pc = 0x2105b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2105b4: 0x46000834
    ctx->pc = 0x2105b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2105b8: 0x0
    ctx->pc = 0x2105b8u;
    // NOP
    // 0x2105bc: 0x45000008
    ctx->pc = 0x2105BCu;
    {
        const bool branch_taken_0x2105bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2105C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2105bc) {
            ctx->pc = 0x2105E0u;
            goto label_2105e0;
        }
    }
    ctx->pc = 0x2105C4u;
    // 0x2105c4: 0xc6000030
    ctx->pc = 0x2105c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2105c8:
    // 0x2105c8: 0x3c013d08
    ctx->pc = 0x2105c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2105cc: 0x34218889
    ctx->pc = 0x2105ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2105d0: 0x44810800
    ctx->pc = 0x2105d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2105d4: 0x46010001
    ctx->pc = 0x2105d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2105d8: 0xe6000020
    ctx->pc = 0x2105d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2105dc: 0x200202d
    ctx->pc = 0x2105dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2105e0:
    // 0x2105e0: 0x2a0282d
    ctx->pc = 0x2105e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105e4: 0x2e0302d
    ctx->pc = 0x2105e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105e8: 0x4600a306
    ctx->pc = 0x2105e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2105ec: 0xc0840d0
    ctx->pc = 0x2105ECu;
    SET_GPR_U32(ctx, 31, 0x2105F4u);
    ctx->pc = 0x2105F0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x210340u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitAnim_0x210340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2105F4u; }
    }
    if (ctx->pc != 0x2105F4u) { return; }
    ctx->pc = 0x2105F4u;
    // 0x2105f4: 0x5c400008
    ctx->pc = 0x2105F4u;
    {
        const bool branch_taken_0x2105f4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2105f4) {
            ctx->pc = 0x2105F8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x210618u;
            goto label_210618;
        }
    }
    ctx->pc = 0x2105FCu;
    // 0x2105fc: 0x3c04003a
    ctx->pc = 0x2105fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x210600: 0x248457d0
    ctx->pc = 0x210600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22480));
    // 0x210604: 0x40282d
    ctx->pc = 0x210604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210608: 0x2a0302d
    ctx->pc = 0x210608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21060c: 0xc0b4976
    ctx->pc = 0x21060Cu;
    SET_GPR_U32(ctx, 31, 0x210614u);
    ctx->pc = 0x210610u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210614u; }
    }
    if (ctx->pc != 0x210614u) { return; }
    ctx->pc = 0x210614u;
    // 0x210614: 0x8e030000
    ctx->pc = 0x210614u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_210618:
    // 0x210618: 0x24020030
    ctx->pc = 0x210618u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x21061c: 0x2c21018
    ctx->pc = 0x21061cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x210620: 0x431021
    ctx->pc = 0x210620u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210624: 0x84420026
    ctx->pc = 0x210624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x210628: 0x30420001
    ctx->pc = 0x210628u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x21062c: 0x36630008
    ctx->pc = 0x21062cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 19), 8));
    // 0x210630: 0x62980b
    ctx->pc = 0x210630u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
    // 0x210634: 0x36730001
    ctx->pc = 0x210634u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 1));
    // 0x210638: 0x32620001
    ctx->pc = 0x210638u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
label_21063c:
    // 0x21063c: 0x14400003
    ctx->pc = 0x21063Cu;
    {
        const bool branch_taken_0x21063c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x210640u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x21063c) {
            ctx->pc = 0x21064Cu;
            goto label_21064c;
        }
    }
    ctx->pc = 0x210644u;
    // 0x210644: 0x17c20008
    ctx->pc = 0x210644u;
    {
        const bool branch_taken_0x210644 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 2));
        if (branch_taken_0x210644) {
            ctx->pc = 0x210668u;
            goto label_210668;
        }
    }
    ctx->pc = 0x21064Cu;
label_21064c:
    // 0x21064c: 0xc08403a
    ctx->pc = 0x21064Cu;
    SET_GPR_U32(ctx, 31, 0x210654u);
    ctx->pc = 0x210650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2100E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcAnimInfo_0x2100e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210654u; }
    }
    if (ctx->pc != 0x210654u) { return; }
    ctx->pc = 0x210654u;
    // 0x210654: 0x2403000f
    ctx->pc = 0x210654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x210658: 0x14430003
    ctx->pc = 0x210658u;
    {
        const bool branch_taken_0x210658 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x210658) {
            ctx->pc = 0x210668u;
            goto label_210668;
        }
    }
    ctx->pc = 0x210660u;
    // 0x210660: 0xc08403a
    ctx->pc = 0x210660u;
    SET_GPR_U32(ctx, 31, 0x210668u);
    ctx->pc = 0x210664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2100E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcAnimInfo_0x2100e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210668u; }
    }
    if (ctx->pc != 0x210668u) { return; }
    ctx->pc = 0x210668u;
label_210668:
    // 0x210668: 0x12600008
    ctx->pc = 0x210668u;
    {
        const bool branch_taken_0x210668 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x21066Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x210668) {
            ctx->pc = 0x21068Cu;
            goto label_21068c;
        }
    }
    ctx->pc = 0x210670u;
    // 0x210670: 0x56800006
    ctx->pc = 0x210670u;
    {
        const bool branch_taken_0x210670 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x210670) {
            ctx->pc = 0x210674u;
            SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 2));
            ctx->pc = 0x21068Cu;
            goto label_21068c;
        }
    }
    ctx->pc = 0x210678u;
    // 0x210678: 0x92030036
    ctx->pc = 0x210678u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x21067c: 0x240200ff
    ctx->pc = 0x21067cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x210680: 0x14620002
    ctx->pc = 0x210680u;
    {
        const bool branch_taken_0x210680 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x210684u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x210680) {
            ctx->pc = 0x21068Cu;
            goto label_21068c;
        }
    }
    ctx->pc = 0x210688u;
    // 0x210688: 0x36730002
    ctx->pc = 0x210688u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 2));
label_21068c:
    // 0x21068c: 0x14400004
    ctx->pc = 0x21068Cu;
    {
        const bool branch_taken_0x21068c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x210690u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x21068c) {
            ctx->pc = 0x2106A0u;
            goto label_2106a0;
        }
    }
    ctx->pc = 0x210694u;
    // 0x210694: 0x16b60004
    ctx->pc = 0x210694u;
    {
        const bool branch_taken_0x210694 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 22));
        ctx->pc = 0x210698u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210694) {
            ctx->pc = 0x2106A8u;
            goto label_2106a8;
        }
    }
    ctx->pc = 0x21069Cu;
    // 0x21069c: 0x36620004
    ctx->pc = 0x21069cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 19), 4));
label_2106a0:
    // 0x2106a0: 0x54980b
    ctx->pc = 0x2106a0u;
    if (GPR_U32(ctx, 20) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x2106a4: 0x260102d
    ctx->pc = 0x2106a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2106a8:
    // 0x2106a8: 0xdfbf00a0
    ctx->pc = 0x2106a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2106ac: 0xdfbe0090
    ctx->pc = 0x2106acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2106b0: 0xdfb70080
    ctx->pc = 0x2106b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2106b4: 0xdfb60070
    ctx->pc = 0x2106b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2106b8: 0xdfb50060
    ctx->pc = 0x2106b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2106bc: 0xdfb40050
    ctx->pc = 0x2106bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2106c0: 0xdfb30040
    ctx->pc = 0x2106c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2106c4: 0xdfb20030
    ctx->pc = 0x2106c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2106c8: 0xdfb10020
    ctx->pc = 0x2106c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2106cc: 0xdfb00010
    ctx->pc = 0x2106ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2106d0: 0xc7b400b0
    ctx->pc = 0x2106d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2106d4: 0x3e00008
    ctx->pc = 0x2106D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2106D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210550u: goto label_210550;
            case 0x210560u: goto label_210560;
            case 0x210574u: goto label_210574;
            case 0x210580u: goto label_210580;
            case 0x210590u: goto label_210590;
            case 0x2105C8u: goto label_2105c8;
            case 0x2105E0u: goto label_2105e0;
            case 0x210618u: goto label_210618;
            case 0x21063Cu: goto label_21063c;
            case 0x21064Cu: goto label_21064c;
            case 0x210668u: goto label_210668;
            case 0x21068Cu: goto label_21068c;
            case 0x2106A0u: goto label_2106a0;
            case 0x2106A8u: goto label_2106a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2106DCu;
}
