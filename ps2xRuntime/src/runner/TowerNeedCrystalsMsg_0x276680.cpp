#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TowerNeedCrystalsMsg
// Address: 0x276680 - 0x276754
void TowerNeedCrystalsMsg_0x276680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276680u;

    // 0x276680: 0x27bdffd0
    ctx->pc = 0x276680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276684: 0xffbf0020
    ctx->pc = 0x276684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276688: 0xffb10010
    ctx->pc = 0x276688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27668c: 0xffb00000
    ctx->pc = 0x27668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276690: 0xa0802d
    ctx->pc = 0x276690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276694: 0x3c02003c
    ctx->pc = 0x276694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x276698: 0x24423a08
    ctx->pc = 0x276698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14856));
    // 0x27669c: 0x101880
    ctx->pc = 0x27669cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2766a0: 0x621821
    ctx->pc = 0x2766a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2766a4: 0x3c020031
    ctx->pc = 0x2766a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2766a8: 0xc4610000
    ctx->pc = 0x2766a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2766ac: 0xc440ffa4
    ctx->pc = 0x2766acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2766b0: 0x46000834
    ctx->pc = 0x2766b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2766b4: 0x0
    ctx->pc = 0x2766b4u;
    // NOP
    // 0x2766b8: 0x45000021
    ctx->pc = 0x2766B8u;
    {
        const bool branch_taken_0x2766b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2766BCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2766b8) {
            ctx->pc = 0x276740u;
            goto label_276740;
        }
    }
    ctx->pc = 0x2766C0u;
    // 0x2766c0: 0x3c020031
    ctx->pc = 0x2766c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2766c4: 0x8c42f184
    ctx->pc = 0x2766c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2766c8: 0x1040000b
    ctx->pc = 0x2766C8u;
    {
        const bool branch_taken_0x2766c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2766CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2766c8) {
            ctx->pc = 0x2766F8u;
            goto label_2766f8;
        }
    }
    ctx->pc = 0x2766D0u;
    // 0x2766d0: 0x3c05003b
    ctx->pc = 0x2766d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2766d4: 0xc080726
    ctx->pc = 0x2766D4u;
    SET_GPR_U32(ctx, 31, 0x2766DCu);
    ctx->pc = 0x2766D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945240));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766DCu; }
    }
    if (ctx->pc != 0x2766DCu) { return; }
    ctx->pc = 0x2766DCu;
    // 0x2766dc: 0x220202d
    ctx->pc = 0x2766dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766e0: 0x40282d
    ctx->pc = 0x2766e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766e4: 0x302d
    ctx->pc = 0x2766e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2766e8: 0xc08a0b4
    ctx->pc = 0x2766E8u;
    SET_GPR_U32(ctx, 31, 0x2766F0u);
    ctx->pc = 0x2766ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766F0u; }
    }
    if (ctx->pc != 0x2766F0u) { return; }
    ctx->pc = 0x2766F0u;
    // 0x2766f0: 0x1000000a
    ctx->pc = 0x2766F0u;
    {
        const bool branch_taken_0x2766f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2766F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2766f0) {
            ctx->pc = 0x27671Cu;
            goto label_27671c;
        }
    }
    ctx->pc = 0x2766F8u;
label_2766f8:
    // 0x2766f8: 0x3c05003b
    ctx->pc = 0x2766f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2766fc: 0xc080726
    ctx->pc = 0x2766FCu;
    SET_GPR_U32(ctx, 31, 0x276704u);
    ctx->pc = 0x276700u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945256));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276704u; }
    }
    if (ctx->pc != 0x276704u) { return; }
    ctx->pc = 0x276704u;
    // 0x276704: 0x220202d
    ctx->pc = 0x276704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276708: 0x40282d
    ctx->pc = 0x276708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27670c: 0x200302d
    ctx->pc = 0x27670cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276710: 0xc08a0b4
    ctx->pc = 0x276710u;
    SET_GPR_U32(ctx, 31, 0x276718u);
    ctx->pc = 0x276714u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276718u; }
    }
    if (ctx->pc != 0x276718u) { return; }
    ctx->pc = 0x276718u;
    // 0x276718: 0x3c02003c
    ctx->pc = 0x276718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_27671c:
    // 0x27671c: 0x24423a08
    ctx->pc = 0x27671cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14856));
    // 0x276720: 0x101880
    ctx->pc = 0x276720u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x276724: 0x621821
    ctx->pc = 0x276724u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276728: 0x3c020031
    ctx->pc = 0x276728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27672c: 0xc440ffa4
    ctx->pc = 0x27672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276730: 0x3c014120
    ctx->pc = 0x276730u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x276734: 0x44810800
    ctx->pc = 0x276734u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x276738: 0x46010000
    ctx->pc = 0x276738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27673c: 0xe4600000
    ctx->pc = 0x27673cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_276740:
    // 0x276740: 0xdfbf0020
    ctx->pc = 0x276740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276744: 0xdfb10010
    ctx->pc = 0x276744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276748: 0xdfb00000
    ctx->pc = 0x276748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27674c: 0x3e00008
    ctx->pc = 0x27674Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2766F8u: goto label_2766f8;
            case 0x27671Cu: goto label_27671c;
            case 0x276740u: goto label_276740;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276754u;
}
