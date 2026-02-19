#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDamagePlayer
// Address: 0x29ba70 - 0x29bba0
void CritterDamagePlayer_0x29ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ba70u;

    // 0x29ba70: 0x27bdffa0
    ctx->pc = 0x29ba70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29ba74: 0xffbf0040
    ctx->pc = 0x29ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29ba78: 0xffb30030
    ctx->pc = 0x29ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29ba7c: 0xffb20020
    ctx->pc = 0x29ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29ba80: 0xffb10010
    ctx->pc = 0x29ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29ba84: 0xffb00000
    ctx->pc = 0x29ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ba88: 0xe7b40050
    ctx->pc = 0x29ba88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29ba8c: 0x80182d
    ctx->pc = 0x29ba8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba90: 0xa0902d
    ctx->pc = 0x29ba90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba94: 0x100982d
    ctx->pc = 0x29ba94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba98: 0x8cc20004
    ctx->pc = 0x29ba98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x29ba9c: 0xe28025
    ctx->pc = 0x29ba9cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29baa0: 0x3c020034
    ctx->pc = 0x29baa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29baa4: 0x8c42e7c8
    ctx->pc = 0x29baa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x29baa8: 0xc4c1002c
    ctx->pc = 0x29baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29baac: 0xc44000bc
    ctx->pc = 0x29baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bab0: 0x46000d02
    ctx->pc = 0x29bab0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bab4: 0x1120000a
    ctx->pc = 0x29BAB4u;
    {
        const bool branch_taken_0x29bab4 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x29BAB8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x29bab4) {
            ctx->pc = 0x29BAE0u;
            goto label_29bae0;
        }
    }
    ctx->pc = 0x29BABCu;
    // 0x29babc: 0x84c50042
    ctx->pc = 0x29babcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 66)));
    // 0x29bac0: 0x4a00007
    ctx->pc = 0x29BAC0u;
    {
        const bool branch_taken_0x29bac0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x29BAC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29bac0) {
            ctx->pc = 0x29BAE0u;
            goto label_29bae0;
        }
    }
    ctx->pc = 0x29BAC8u;
    // 0x29bac8: 0x24660050
    ctx->pc = 0x29bac8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 80));
    // 0x29bacc: 0x382d
    ctx->pc = 0x29baccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bad0: 0xc0a50f4
    ctx->pc = 0x29BAD0u;
    SET_GPR_U32(ctx, 31, 0x29BAD8u);
    ctx->pc = 0x29BAD4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2943D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoSfx_0x2943d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BAD8u; }
    }
    if (ctx->pc != 0x29BAD8u) { return; }
    ctx->pc = 0x29BAD8u;
    // 0x29bad8: 0x3c020100
    ctx->pc = 0x29bad8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x29badc: 0x2028025
    ctx->pc = 0x29badcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_29bae0:
    // 0x29bae0: 0x8e420004
    ctx->pc = 0x29bae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29bae4: 0x8c420120
    ctx->pc = 0x29bae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x29bae8: 0x84430020
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29baec: 0x24020004
    ctx->pc = 0x29baecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x29baf0: 0x1062000b
    ctx->pc = 0x29BAF0u;
    {
        const bool branch_taken_0x29baf0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29BAF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x29baf0) {
            ctx->pc = 0x29BB20u;
            goto label_29bb20;
        }
    }
    ctx->pc = 0x29BAF8u;
    // 0x29baf8: 0xc44107fc
    ctx->pc = 0x29baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bafc: 0x3c013f80
    ctx->pc = 0x29bafcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29bb00: 0x44810000
    ctx->pc = 0x29bb00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29bb04: 0x46000834
    ctx->pc = 0x29bb04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bb08: 0x0
    ctx->pc = 0x29bb08u;
    // NOP
    // 0x29bb0c: 0x45000005
    ctx->pc = 0x29BB0Cu;
    {
        const bool branch_taken_0x29bb0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29BB10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29bb0c) {
            ctx->pc = 0x29BB24u;
            goto label_29bb24;
        }
    }
    ctx->pc = 0x29BB14u;
    // 0x29bb14: 0x3c013f00
    ctx->pc = 0x29bb14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29bb18: 0x44810000
    ctx->pc = 0x29bb18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29bb1c: 0x4600a502
    ctx->pc = 0x29bb1cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_29bb20:
    // 0x29bb20: 0x220202d
    ctx->pc = 0x29bb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29bb24:
    // 0x29bb24: 0x4600a306
    ctx->pc = 0x29bb24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29bb28: 0x24050001
    ctx->pc = 0x29bb28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bb2c: 0x200302d
    ctx->pc = 0x29bb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb30: 0xc08c73c
    ctx->pc = 0x29BB30u;
    SET_GPR_U32(ctx, 31, 0x29BB38u);
    ctx->pc = 0x29BB34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB38u; }
    }
    if (ctx->pc != 0x29BB38u) { return; }
    ctx->pc = 0x29BB38u;
    // 0x29bb38: 0x40802d
    ctx->pc = 0x29bb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb3c: 0x3c020032
    ctx->pc = 0x29bb3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29bb40: 0x24421bc0
    ctx->pc = 0x29bb40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29bb44: 0x24032b00
    ctx->pc = 0x29bb44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29bb48: 0x2231818
    ctx->pc = 0x29bb48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29bb4c: 0x621821
    ctx->pc = 0x29bb4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29bb50: 0xac6008ec
    ctx->pc = 0x29bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2284), GPR_U32(ctx, 0));
    // 0x29bb54: 0x3c020031
    ctx->pc = 0x29bb54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29bb58: 0xc440ffa4
    ctx->pc = 0x29bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bb5c: 0x3c013e80
    ctx->pc = 0x29bb5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x29bb60: 0x44810800
    ctx->pc = 0x29bb60u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29bb64: 0x46010000
    ctx->pc = 0x29bb64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29bb68: 0xe46008c0
    ctx->pc = 0x29bb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2240), bits); }
    // 0x29bb6c: 0x220202d
    ctx->pc = 0x29bb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb70: 0x240282d
    ctx->pc = 0x29bb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb74: 0xc0a6e6c
    ctx->pc = 0x29BB74u;
    SET_GPR_U32(ctx, 31, 0x29BB7Cu);
    ctx->pc = 0x29BB78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x29B9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamagedPlayerSub_0x29b9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BB7Cu; }
    }
    if (ctx->pc != 0x29BB7Cu) { return; }
    ctx->pc = 0x29BB7Cu;
    // 0x29bb7c: 0x200102d
    ctx->pc = 0x29bb7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb80: 0xdfbf0040
    ctx->pc = 0x29bb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29bb84: 0xdfb30030
    ctx->pc = 0x29bb84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29bb88: 0xdfb20020
    ctx->pc = 0x29bb88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29bb8c: 0xdfb10010
    ctx->pc = 0x29bb8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29bb90: 0xdfb00000
    ctx->pc = 0x29bb90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bb94: 0xc7b40050
    ctx->pc = 0x29bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29bb98: 0x3e00008
    ctx->pc = 0x29BB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BB9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29BAE0u: goto label_29bae0;
            case 0x29BB20u: goto label_29bb20;
            case 0x29BB24u: goto label_29bb24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29BBA0u;
}
