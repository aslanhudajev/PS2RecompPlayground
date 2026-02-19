#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: check_vacancy
// Address: 0x23ca58 - 0x23cb84
void check_vacancy_0x23ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23ca58u;

    // 0x23ca58: 0x27bdffb0
    ctx->pc = 0x23ca58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23ca5c: 0xffbf0030
    ctx->pc = 0x23ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23ca60: 0xffb10020
    ctx->pc = 0x23ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23ca64: 0xffb00010
    ctx->pc = 0x23ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23ca68: 0xe7b40040
    ctx->pc = 0x23ca68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23ca6c: 0x80882d
    ctx->pc = 0x23ca6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca70: 0xa0202d
    ctx->pc = 0x23ca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca74: 0x240303b0
    ctx->pc = 0x23ca74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23ca78: 0x831818
    ctx->pc = 0x23ca78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23ca7c: 0x3c020033
    ctx->pc = 0x23ca7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23ca80: 0x2442dfd0
    ctx->pc = 0x23ca80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23ca84: 0x621821
    ctx->pc = 0x23ca84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ca88: 0xc460024c
    ctx->pc = 0x23ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ca8c: 0x3c013dcc
    ctx->pc = 0x23ca8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x23ca90: 0x3421cccd
    ctx->pc = 0x23ca90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23ca94: 0x44816800
    ctx->pc = 0x23ca94u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x23ca98: 0x460d0500
    ctx->pc = 0x23ca98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x23ca9c: 0xc4610250
    ctx->pc = 0x23ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23caa0: 0x2410ffff
    ctx->pc = 0x23caa0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23caa4: 0x40054800
    ctx->pc = 0x23caa4u;
    SET_GPR_U32(ctx, 5, ctx->cop0_count);
    // 0x23caa8: 0x3c02003a
    ctx->pc = 0x23caa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23caac: 0x8c4221d0
    ctx->pc = 0x23caacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23cab0: 0xac450158
    ctx->pc = 0x23cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 5));
    // 0x23cab4: 0xc4600060
    ctx->pc = 0x23cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cab8: 0xe7a00000
    ctx->pc = 0x23cab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23cabc: 0xc4600068
    ctx->pc = 0x23cabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cac0: 0xe7a00008
    ctx->pc = 0x23cac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23cac4: 0xc6200004
    ctx->pc = 0x23cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cac8: 0xe7a00004
    ctx->pc = 0x23cac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23cacc: 0x3a0282d
    ctx->pc = 0x23caccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cad0: 0x220302d
    ctx->pc = 0x23cad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cad4: 0x382d
    ctx->pc = 0x23cad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cad8: 0x4600a306
    ctx->pc = 0x23cad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23cadc: 0x460d0b40
    ctx->pc = 0x23cadcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x23cae0: 0xc090a70
    ctx->pc = 0x23CAE0u;
    SET_GPR_U32(ctx, 31, 0x23CAE8u);
    ctx->pc = 0x23CAE4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2429C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyCollideEnemy_0x2429c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CAE8u; }
    }
    if (ctx->pc != 0x23CAE8u) { return; }
    ctx->pc = 0x23CAE8u;
    // 0x23cae8: 0x28420000
    ctx->pc = 0x23cae8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 0));
    // 0x23caec: 0x2800a
    ctx->pc = 0x23caecu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x23caf0: 0x12000012
    ctx->pc = 0x23CAF0u;
    {
        const bool branch_taken_0x23caf0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x23CAF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23caf0) {
            ctx->pc = 0x23CB3Cu;
            goto label_23cb3c;
        }
    }
    ctx->pc = 0x23CAF8u;
    // 0x23caf8: 0x220282d
    ctx->pc = 0x23caf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cafc: 0x302d
    ctx->pc = 0x23cafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb00: 0x4600a306
    ctx->pc = 0x23cb00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23cb04: 0xc09612c
    ctx->pc = 0x23CB04u;
    SET_GPR_U32(ctx, 31, 0x23CB0Cu);
    ctx->pc = 0x23CB08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2584B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollide_0x2584b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB0Cu; }
    }
    if (ctx->pc != 0x23CB0Cu) { return; }
    ctx->pc = 0x23CB0Cu;
    // 0x23cb0c: 0x10400004
    ctx->pc = 0x23CB0Cu;
    {
        const bool branch_taken_0x23cb0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23CB10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x23cb0c) {
            ctx->pc = 0x23CB20u;
            goto label_23cb20;
        }
    }
    ctx->pc = 0x23CB14u;
    // 0x23cb14: 0xc0967ea
    ctx->pc = 0x23CB14u;
    SET_GPR_U32(ctx, 31, 0x23CB1Cu);
    ctx->pc = 0x23CB18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x259FA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyItemCollision_0x259fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB1Cu; }
    }
    if (ctx->pc != 0x23CB1Cu) { return; }
    ctx->pc = 0x23CB1Cu;
    // 0x23cb1c: 0x2800b
    ctx->pc = 0x23cb1cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
label_23cb20:
    // 0x23cb20: 0x12000006
    ctx->pc = 0x23CB20u;
    {
        const bool branch_taken_0x23cb20 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x23CB24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23cb20) {
            ctx->pc = 0x23CB3Cu;
            goto label_23cb3c;
        }
    }
    ctx->pc = 0x23CB28u;
    // 0x23cb28: 0x220282d
    ctx->pc = 0x23cb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb2c: 0x302d
    ctx->pc = 0x23cb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb30: 0xc087b72
    ctx->pc = 0x23CB30u;
    SET_GPR_U32(ctx, 31, 0x23CB38u);
    ctx->pc = 0x23CB34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EDC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FastWallCollide_0x21edc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB38u; }
    }
    if (ctx->pc != 0x23CB38u) { return; }
    ctx->pc = 0x23CB38u;
    // 0x23cb38: 0x2800b
    ctx->pc = 0x23cb38u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
label_23cb3c:
    // 0x23cb3c: 0x40034800
    ctx->pc = 0x23cb3cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23cb40: 0x3c02003a
    ctx->pc = 0x23cb40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23cb44: 0x8c4421d0
    ctx->pc = 0x23cb44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23cb48: 0x8c820158
    ctx->pc = 0x23cb48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x23cb4c: 0x621823
    ctx->pc = 0x23cb4cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cb50: 0x8c820150
    ctx->pc = 0x23cb50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x23cb54: 0x621821
    ctx->pc = 0x23cb54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cb58: 0xac830150
    ctx->pc = 0x23cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 3));
    // 0x23cb5c: 0x8c820154
    ctx->pc = 0x23cb5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x23cb60: 0x24420001
    ctx->pc = 0x23cb60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cb64: 0xac820154
    ctx->pc = 0x23cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x23cb68: 0x200102d
    ctx->pc = 0x23cb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb6c: 0xdfbf0030
    ctx->pc = 0x23cb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cb70: 0xdfb10020
    ctx->pc = 0x23cb70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cb74: 0xdfb00010
    ctx->pc = 0x23cb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cb78: 0xc7b40040
    ctx->pc = 0x23cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23cb7c: 0x3e00008
    ctx->pc = 0x23CB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CB80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CB20u: goto label_23cb20;
            case 0x23CB3Cu: goto label_23cb3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CB84u;
}
