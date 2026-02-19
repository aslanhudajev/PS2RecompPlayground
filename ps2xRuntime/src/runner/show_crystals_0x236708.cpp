#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: show_crystals
// Address: 0x236708 - 0x236934
void show_crystals_0x236708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236708u;

    // 0x236708: 0x27bdffb0
    ctx->pc = 0x236708u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23670c: 0xffbf0040
    ctx->pc = 0x23670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x236710: 0xffb30030
    ctx->pc = 0x236710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x236714: 0xffb20020
    ctx->pc = 0x236714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x236718: 0xffb10010
    ctx->pc = 0x236718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23671c: 0xffb00000
    ctx->pc = 0x23671cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236720: 0x3c020033
    ctx->pc = 0x236720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236724: 0x8c42cb6c
    ctx->pc = 0x236724u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953836)));
    // 0x236728: 0x1c40007c
    ctx->pc = 0x236728u;
    {
        const bool branch_taken_0x236728 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23672Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x236728) {
            ctx->pc = 0x23691Cu;
            goto label_23691c;
        }
    }
    ctx->pc = 0x236730u;
    // 0x236730: 0x3c020032
    ctx->pc = 0x236730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x236734: 0x8c42d358
    ctx->pc = 0x236734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x236738: 0x14400079
    ctx->pc = 0x236738u;
    {
        const bool branch_taken_0x236738 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23673Cu;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x236738) {
            ctx->pc = 0x236920u;
            goto label_236920;
        }
    }
    ctx->pc = 0x236740u;
    // 0x236740: 0x3c020031
    ctx->pc = 0x236740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x236744: 0x8c430018
    ctx->pc = 0x236744u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x236748: 0x24024010
    ctx->pc = 0x236748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x23674c: 0x14620075
    ctx->pc = 0x23674Cu;
    {
        const bool branch_taken_0x23674c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x236750u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x23674c) {
            ctx->pc = 0x236924u;
            goto label_236924;
        }
    }
    ctx->pc = 0x236754u;
    // 0x236754: 0xc4810904
    ctx->pc = 0x236754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236758: 0x44800000
    ctx->pc = 0x236758u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x23675c: 0x46010034
    ctx->pc = 0x23675cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236760: 0x0
    ctx->pc = 0x236760u;
    // NOP
    // 0x236764: 0x4500006f
    ctx->pc = 0x236764u;
    {
        const bool branch_taken_0x236764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x236768u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x236764) {
            ctx->pc = 0x236924u;
            goto label_236924;
        }
    }
    ctx->pc = 0x23676Cu;
    // 0x23676c: 0x8c900000
    ctx->pc = 0x23676cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236770: 0xc440ffa8
    ctx->pc = 0x236770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236774: 0x46000801
    ctx->pc = 0x236774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x236778: 0xe4800904
    ctx->pc = 0x236778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2308), bits); }
    // 0x23677c: 0x8c850900
    ctx->pc = 0x23677cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 2304)));
    // 0x236780: 0x28a20200
    ctx->pc = 0x236780u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 512));
    // 0x236784: 0x14400016
    ctx->pc = 0x236784u;
    {
        const bool branch_taken_0x236784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236788u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
        if (branch_taken_0x236784) {
            ctx->pc = 0x2367E0u;
            goto label_2367e0;
        }
    }
    ctx->pc = 0x23678Cu;
    // 0x23678c: 0x24b1fe00
    ctx->pc = 0x23678cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x236790: 0x3c020034
    ctx->pc = 0x236790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x236794: 0x8c52d31c
    ctx->pc = 0x236794u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294955804)));
    // 0x236798: 0x2a220010
    ctx->pc = 0x236798u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x23679c: 0x10400009
    ctx->pc = 0x23679Cu;
    {
        const bool branch_taken_0x23679c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2367A0u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 2312)));
        if (branch_taken_0x23679c) {
            ctx->pc = 0x2367C4u;
            goto label_2367c4;
        }
    }
    ctx->pc = 0x2367A4u;
    // 0x2367a4: 0x111080
    ctx->pc = 0x2367a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2367a8: 0x3c060032
    ctx->pc = 0x2367a8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x2367ac: 0x24c61428
    ctx->pc = 0x2367acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5160));
    // 0x2367b0: 0x3c04003c
    ctx->pc = 0x2367b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2367b4: 0x24841b48
    ctx->pc = 0x2367b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x2367b8: 0x3c05003a
    ctx->pc = 0x2367b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2367bc: 0x1000001c
    ctx->pc = 0x2367BCu;
    {
        const bool branch_taken_0x2367bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2367C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31304));
        if (branch_taken_0x2367bc) {
            ctx->pc = 0x236830u;
            goto label_236830;
        }
    }
    ctx->pc = 0x2367C4u;
label_2367c4:
    // 0x2367c4: 0x3c04003c
    ctx->pc = 0x2367c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2367c8: 0x24841b48
    ctx->pc = 0x2367c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x2367cc: 0x3c05003a
    ctx->pc = 0x2367ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2367d0: 0xc0b6252
    ctx->pc = 0x2367D0u;
    SET_GPR_U32(ctx, 31, 0x2367D8u);
    ctx->pc = 0x2367D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31320));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2367D8u; }
    }
    if (ctx->pc != 0x2367D8u) { return; }
    ctx->pc = 0x2367D8u;
    // 0x2367d8: 0x1000002c
    ctx->pc = 0x2367D8u;
    {
        const bool branch_taken_0x2367d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2367DCu;
        SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
        if (branch_taken_0x2367d8) {
            ctx->pc = 0x23688Cu;
            goto label_23688c;
        }
    }
    ctx->pc = 0x2367E0u;
label_2367e0:
    // 0x2367e0: 0x54400017
    ctx->pc = 0x2367E0u;
    {
        const bool branch_taken_0x2367e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2367e0) {
            ctx->pc = 0x2367E4u;
            SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 2304)));
            ctx->pc = 0x236840u;
            goto label_236840;
        }
    }
    ctx->pc = 0x2367E8u;
    // 0x2367e8: 0x24b1ff00
    ctx->pc = 0x2367e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 5), 4294967040));
    // 0x2367ec: 0x200202d
    ctx->pc = 0x2367ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367f0: 0xc09dc30
    ctx->pc = 0x2367F0u;
    SET_GPR_U32(ctx, 31, 0x2367F8u);
    ctx->pc = 0x2367F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2770C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerNumGargItems_0x2770c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2367F8u; }
    }
    if (ctx->pc != 0x2367F8u) { return; }
    ctx->pc = 0x2367F8u;
    // 0x2367f8: 0x40982d
    ctx->pc = 0x2367f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367fc: 0x3c030034
    ctx->pc = 0x2367fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x236800: 0x2463fb00
    ctx->pc = 0x236800u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966016));
    // 0x236804: 0x111080
    ctx->pc = 0x236804u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x236808: 0x431021
    ctx->pc = 0x236808u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23680c: 0x8c520000
    ctx->pc = 0x23680cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236810: 0x2402000c
    ctx->pc = 0x236810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x236814: 0x2221018
    ctx->pc = 0x236814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x236818: 0x3c060034
    ctx->pc = 0x236818u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x23681c: 0x24c6fb10
    ctx->pc = 0x23681cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294966032));
    // 0x236820: 0x3c04003c
    ctx->pc = 0x236820u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x236824: 0x24841b48
    ctx->pc = 0x236824u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x236828: 0x3c05003a
    ctx->pc = 0x236828u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x23682c: 0x24a57a60
    ctx->pc = 0x23682cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31328));
label_236830:
    // 0x236830: 0xc0b6252
    ctx->pc = 0x236830u;
    SET_GPR_U32(ctx, 31, 0x236838u);
    ctx->pc = 0x236834u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236838u; }
    }
    if (ctx->pc != 0x236838u) { return; }
    ctx->pc = 0x236838u;
    // 0x236838: 0x10000014
    ctx->pc = 0x236838u;
    {
        const bool branch_taken_0x236838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23683Cu;
        SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
        if (branch_taken_0x236838) {
            ctx->pc = 0x23688Cu;
            goto label_23688c;
        }
    }
    ctx->pc = 0x236840u;
label_236840:
    // 0x236840: 0x200202d
    ctx->pc = 0x236840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236844: 0xc09db7c
    ctx->pc = 0x236844u;
    SET_GPR_U32(ctx, 31, 0x23684Cu);
    ctx->pc = 0x236848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x276DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerNumCrystals_0x276df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23684Cu; }
    }
    if (ctx->pc != 0x23684Cu) { return; }
    ctx->pc = 0x23684Cu;
    // 0x23684c: 0x40982d
    ctx->pc = 0x23684cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236850: 0x3c030034
    ctx->pc = 0x236850u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x236854: 0x2463fa90
    ctx->pc = 0x236854u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965904));
    // 0x236858: 0x111080
    ctx->pc = 0x236858u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x23685c: 0x431021
    ctx->pc = 0x23685cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236860: 0x8c520000
    ctx->pc = 0x236860u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236864: 0x1110c0
    ctx->pc = 0x236864u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
    // 0x236868: 0x3c060034
    ctx->pc = 0x236868u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
    // 0x23686c: 0x24c6fab8
    ctx->pc = 0x23686cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294965944));
    // 0x236870: 0x3c04003c
    ctx->pc = 0x236870u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x236874: 0x24841b48
    ctx->pc = 0x236874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6984));
    // 0x236878: 0x3c05003a
    ctx->pc = 0x236878u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x23687c: 0x24a57a68
    ctx->pc = 0x23687cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31336));
    // 0x236880: 0xc0b6252
    ctx->pc = 0x236880u;
    SET_GPR_U32(ctx, 31, 0x236888u);
    ctx->pc = 0x236884u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236888u; }
    }
    if (ctx->pc != 0x236888u) { return; }
    ctx->pc = 0x236888u;
    // 0x236888: 0x3c11003c
    ctx->pc = 0x236888u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
label_23688c:
    // 0x23688c: 0x26311b48
    ctx->pc = 0x23688cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 6984));
    // 0x236890: 0xa220000e
    ctx->pc = 0x236890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x236894: 0x220202d
    ctx->pc = 0x236894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236898: 0xc0b1bb4
    ctx->pc = 0x236898u;
    SET_GPR_U32(ctx, 31, 0x2368A0u);
    ctx->pc = 0x23689Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368A0u; }
    }
    if (ctx->pc != 0x2368A0u) { return; }
    ctx->pc = 0x2368A0u;
    // 0x2368a0: 0x3c030032
    ctx->pc = 0x2368a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2368a4: 0x246315d0
    ctx->pc = 0x2368a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5584));
    // 0x2368a8: 0x108040
    ctx->pc = 0x2368a8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
    // 0x2368ac: 0x2038021
    ctx->pc = 0x2368acu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2368b0: 0x96050000
    ctx->pc = 0x2368b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2368b4: 0x40202d
    ctx->pc = 0x2368b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368b8: 0x24a5001c
    ctx->pc = 0x2368b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28));
    // 0x2368bc: 0x24060120
    ctx->pc = 0x2368bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 288));
    // 0x2368c0: 0x24070010
    ctx->pc = 0x2368c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2368c4: 0xc0b0c6a
    ctx->pc = 0x2368C4u;
    SET_GPR_U32(ctx, 31, 0x2368CCu);
    ctx->pc = 0x2368C8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368CCu; }
    }
    if (ctx->pc != 0x2368CCu) { return; }
    ctx->pc = 0x2368CCu;
    // 0x2368cc: 0x2402ffff
    ctx->pc = 0x2368ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2368d0: 0x53102a
    ctx->pc = 0x2368d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
    // 0x2368d4: 0x220202d
    ctx->pc = 0x2368d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368d8: 0x3c05003a
    ctx->pc = 0x2368d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2368dc: 0x24a57a78
    ctx->pc = 0x2368dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31352));
    // 0x2368e0: 0x240302d
    ctx->pc = 0x2368e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368e4: 0x262300b
    ctx->pc = 0x2368e4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 19));
    // 0x2368e8: 0xc0b6252
    ctx->pc = 0x2368E8u;
    SET_GPR_U32(ctx, 31, 0x2368F0u);
    ctx->pc = 0x2368ECu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368F0u; }
    }
    if (ctx->pc != 0x2368F0u) { return; }
    ctx->pc = 0x2368F0u;
    // 0x2368f0: 0x96040000
    ctx->pc = 0x2368f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2368f4: 0x24840030
    ctx->pc = 0x2368f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x2368f8: 0x24050124
    ctx->pc = 0x2368f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 292));
    // 0x2368fc: 0x24060001
    ctx->pc = 0x2368fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x236900: 0x3c0700ff
    ctx->pc = 0x236900u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x236904: 0x34e7ffff
    ctx->pc = 0x236904u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x236908: 0x3c013fc0
    ctx->pc = 0x236908u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x23690c: 0x44816000
    ctx->pc = 0x23690cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x236910: 0xc080510
    ctx->pc = 0x236910u;
    SET_GPR_U32(ctx, 31, 0x236918u);
    ctx->pc = 0x236914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236918u; }
    }
    if (ctx->pc != 0x236918u) { return; }
    ctx->pc = 0x236918u;
    // 0x236918: 0xdfbf0040
    ctx->pc = 0x236918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23691c:
    // 0x23691c: 0xdfb30030
    ctx->pc = 0x23691cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236920:
    // 0x236920: 0xdfb20020
    ctx->pc = 0x236920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236924:
    // 0x236924: 0xdfb10010
    ctx->pc = 0x236924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236928: 0xdfb00000
    ctx->pc = 0x236928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23692c: 0x3e00008
    ctx->pc = 0x23692Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2367C4u: goto label_2367c4;
            case 0x2367E0u: goto label_2367e0;
            case 0x236830u: goto label_236830;
            case 0x236840u: goto label_236840;
            case 0x23688Cu: goto label_23688c;
            case 0x23691Cu: goto label_23691c;
            case 0x236920u: goto label_236920;
            case 0x236924u: goto label_236924;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236934u;
}
